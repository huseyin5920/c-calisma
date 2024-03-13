#include <stdio.h>
#include <stdlib.h>

struct STUDENT
{
    char name[30];
    char surname[30];
    int class;
    int age;
};



int main(){

    struct STUDENT student;

    printf("öğrenci kayıt sistemine hoşgeldiniz...\n");
    printf("öğrenci adi : ");
    scanf("%s", student.name);
    printf("öğrenci soyadi : ");
    scanf("%s", student.surname);
    printf("öğrenci sinif : ");
    scanf("%d", &student.class);
    printf("öğrenci yas : ");
    scanf("%d", &student.age);    

    printf("ogrenci bilgileri girisi yapiliyor...\n");
    printf("isim : %s\n", student.name);
    printf("soyisim : %s\n", student.surname);
    printf("sinif : %d\n", student.class);
    printf("yas : %d\n", student.age);
    return 0;

}