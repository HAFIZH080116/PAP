#include <stdio.h>

int main() {
    int a, b;
    printf("Inputkan nilai a: ");
    scanf("%i", &a);
    printf("Inputkan nilai b: ");
    scanf("%i", &b);
    printf("Hasil a + b: %i\n", a + b);
    printf("Hasil a - b: %i\n", a - b);
    printf("Hasil a * b: %i\n", a * b);
    printf("Hasil a / b: %i\n", a / b);
    printf("Hasil a %% b: %i\n", a % b); // gunakan %% untuk menampilkan %
    return 0;
}