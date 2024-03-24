#include <stdio.h>
#include <string.h>
#include <linux/errno.h>

void main(){
   int a = 10;

   int *p;

   p = &a;

   printf("%d\n",*p);
   printf("%p\n",p);
   printf("%p\n",&p);
   
   printf("%d\n",a);
   printf("%p\n",&a);
}