#include <stdio.h>

int main() {
    float alas, tinggi, luas;
    printf("Masukkan alas segitiga: ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &tinggi);
    luas = 0.5 * alas * tinggi;
    printf("Luas segitiga = %.2f\n", luas);
    return 0;
}