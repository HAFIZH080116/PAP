#include <stdio.h>

int main() {
    char nama[100];
    printf("Hello, siapa nama lengkapmu?\n");
    printf("Masukkan nama lengkap: ");
    fgets(nama, sizeof(nama), stdin);
    printf("Selamat Datang %s dalam Pemrograman C\n", nama);
    return 0;
}