#include <stdio.h>
#define phi 3.14
int main(){
int a,b,c;
printf("Program Menukar 2 Buah Nilai \n\n");
printf("Sebelum ditukar \n");
printf("================ \n");
printf("Bilangan Pertama : ");
scanf("%i", &a);
printf("Bilangan Kedua : ");
scanf("%i", &b);
c=a;
a=b;
b=c;
printf("\nSetelah ditukar \n");
printf("================ \n");
printf("Bilangan Pertama : %i \n", a);
printf("Bilangan Kedua : %i \n", b);
return 0;
}