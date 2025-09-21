#include <stdio.h>

int main() {
    int a, b;
    int hasil_tambah, hasil_kurang, hasil_kali, hasil_bagi;

    printf("Masukkan nilai a: ");
    scanf("%d", &a);

    printf("Masukkan nilai b: ");
    scanf("%d", &b);

    hasil_tambah = a + b;
    hasil_kurang = a - b;
    hasil_kali   = a * b;
    hasil_bagi   = a / b;

    printf("Hasil dari %d + %d = %d\n", a, b, hasil_tambah);
    printf("Hasil dari %d - %d = %d\n", a, b, hasil_kurang);
    printf("Hasil dari %d * %d = %d\n", a, b, hasil_kali);
    printf("Hasil dari %d / %d = %d\n", a, b, hasil_bagi);

    return 0;
}