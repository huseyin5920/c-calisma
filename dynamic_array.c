#include <stdio.h>
#include <stdlib.h>

int main(){

    int* ptr;

    int sutun_sayisi;
    
    printf("sütun sayisini giriniz : ");
    scanf("%d", &sutun_sayisi);

    ptr = (int*)malloc(sizeof(int)* sutun_sayisi);

    *ptr = 1;
    *(ptr+1) = 2;
    *(ptr+2) = 3;

    for (int i = 0; i < sutun_sayisi; i++)
    {
        printf("%d \n", *(ptr+i));
    }
    
    

}