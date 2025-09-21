#include <stdio.h>

int main() {
    int a, b, c, terbesar;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);
    printf("Masukkan bilangan ketiga: ");
    scanf("%d", &c);

    terbesar = a;
    if (b > terbesar) {
        terbesar = b;
    }
    if (c > terbesar) {
        terbesar = c;
    }

    printf("Bilangan terbesar adalah: %d\n", terbesar);
    return 0;
}
