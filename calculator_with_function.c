#include <stdio.h>
#include <stdlib.h>

int topla();
int cikar();
int carp();
int bol();

int main(){
    int sayi1, sayi2, sonuc, secim;

    printf("1.sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("\n2.sayiyi giriniz: ");
    scanf("%d", &sayi2);

    printf("\nyapmak istediğiniz işlemi seçiniz: + = 1 , - = 2 , * = 3 , / = 4\n");
    scanf("%d", &secim);

 switch (secim)
    {
    case 1:
        sonuc = topla(sayi1,sayi2);
        printf("\n%d\n", sonuc);
        break;
    case 2:
        sonuc = cikar(sayi1,sayi2);
        printf("\n%d\n", sonuc);
        break;
    case 3:
        sonuc = carp(sayi1,sayi2);
        printf("\n%d\n", sonuc);
        break;
    case 4:
        sonuc = bol(sayi1,sayi2);
        printf("\n%d\n", sonuc);
        break;    
    default:
        printf("geçersiz işlem");
        break;
    }
}

int topla(int sayi1, int sayi2){
    printf("topla fonk calisti");
    return sayi1 + sayi2;
}

int cikar(int sayi1, int sayi2){
    printf("cikar fonk calisti");
    return sayi1 - sayi2; 
}

int carp(int sayi1, int sayi2){
    printf("carp fonk calisti");
    return sayi1 * sayi2;
}

int bol(int sayi1, int sayi2){
    printf("bol fonk calisti");
    return sayi1 / sayi2;
}