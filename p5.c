#include <stdio.h>
#define phi 3.14
int main(){
float jari, luas, keliling;
printf("Masukan jari-jari lingkaran : ");
scanf("%f", &jari);
luas = phi*jari*jari;
keliling = 2*phi*jari;
printf("Luas Lingkaran = %f \n", luas);
printf("Keliling Lingkaran = %f \n", keliling);
return 0;
}