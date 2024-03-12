#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

// Verilen URL'yi tarayarak içeriği yazdıran işlev
size_t write_callback(void *ptr, size_t size, size_t nmemb, FILE *stream) {
    return fwrite(ptr, size, nmemb, stream);
}

int main(void) {
    CURL *curl;
    FILE *fp;
    CURLcode res;
    char *url = "https://onedio.com"; // Tarayacağınız URL'yi buraya yazın
    char outfilename[FILENAME_MAX] = "output.html"; // İçeriğin kaydedileceği dosya adı

    curl = curl_easy_init();
    if (curl) {
        fp = fopen(outfilename, "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);

        // Curl işlemi başarılı olduysa
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));

        // Dosyayı kapat
        fclose(fp);

        // Curl'i temizle
        curl_easy_cleanup(curl);
    }

    return 0;
}