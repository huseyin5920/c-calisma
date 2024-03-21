#include <stdio.h>
#include <curl/curl.h>

int main() {
    curl_version_info_data *data = curl_version_info(CURLVERSION_TENTH);
    if (data) {
        printf("libcurl version: %s\n", data->version);
        printf("libcurl SSL version: %s\n", data->ssl_version);
        printf("libcurl SSL version: %s\n", data->ares);


    } else {
        fprintf(stderr, "libcurl version information could not be retrieved.\n");
        return 1;
    }
    return 0;
}