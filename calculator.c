#include <stdio.h>
#include <stdlib.h>

 
int main()
{
    int sayi1, sayi2, secim;
    float sonuc;

    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("\n2. sayiyi giriniz: ");
    scanf("%d",&sayi2);
    printf("\nyapmak istediğiniz işlemi seçiniz: + = 1 , - = 2 , * = 3 , / = 4\n");
    scanf("%d", &secim);

    switch (secim)
    {
    case 1:
        sonuc = sayi1 + sayi2;
        printf("\n%f", sonuc);
        break;
    case 2:
        sonuc = sayi1 - sayi2;
        printf("\n%f", sonuc);
        break;
    case 3:
        sonuc = sayi1 * sayi2;
        printf("\n%f", sonuc);
        break;
    case 4:
        sonuc = sayi1 / sayi2;
        printf("\n%f", sonuc);
        break;    
    default:
        printf("geçersiz işlem");
        break;
    }
}