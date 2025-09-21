#include <stdio.h>
/* Pendeklarasian variabel global*/
int a, b;
int c;
float f;

int main(){
    /* inisialisasi variabel*/
    a = 10;
    b = 20;
    c = a + b;
    printf("nilai dari c : %d \n", c);
    f = 70.0/3.0;
    printf("nilai dari f : %f \n", f);
    return 0;
}