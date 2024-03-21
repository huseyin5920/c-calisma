#include <stdio.h>
#include <stdlib.h>

int inc(void){

    static int x = 0;
    ++x;

    return x;

}


int main(void){

    int a = 10;
    a= inc();
    printf("\n%d\n",a);
    a=inc();
    printf("\n%d\n",a);


}