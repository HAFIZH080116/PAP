#include <stdio.h>

int main() {
    int detik, jam, menit, sisa;

    printf("Masukkan jumlah detik: ");
    scanf("%d", &detik);

    jam = detik / 3600;
    sisa = detik % 3600;
    menit = sisa / 60;
    sisa = sisa % 60;

    printf("Hasil konversi: %d Jam, %d Menit, %d Detik\n", jam, menit, sisa);
    return 0;
}
