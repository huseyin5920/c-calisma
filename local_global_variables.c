#include <stdio.h>
#include <stdlib.h>

/*mavi=5--sari=15--pembe=15--mor=20--turuncu=15*/

int a = 5;

int deger()
{
    printf("\n%d",a);
    printf("kırmızı");
    a = 10;
    printf("\n%d",a);
    printf("yeşil");
}


int main(){

    printf("\n%d",a);
    printf("mavi");

    int a = 15;
    printf("\n%d",a);
    printf("sarı");

    {
        printf("\n%d",a);
        printf("pembe");
        int a = 20;
        printf("\n%d",a);
        printf("mor");
    }
    printf("\n%d",a);
    printf("turuncu");
    printf("\n");
}