#include <stdio.h>

int main() {
    char namaPembeli[50], namaBarang[50];
    int harga, jumlah, total;

    printf("Masukkan nama pembeli: ");
    scanf("%s", namaPembeli);
    printf("Masukkan nama barang: ");
    scanf("%s", namaBarang);
    printf("Masukkan harga barang (satuan): ");
    scanf("%d", &harga);
    printf("Masukkan jumlah barang: ");
    scanf("%d", &jumlah);

    total = harga * jumlah;

    printf("\n=== STRUK PEMBELIAN ===\n");
    printf("Nama Pembeli : %s\n", namaPembeli);
    printf("Nama Barang  : %s\n", namaBarang);
    printf("Harga Satuan : %d\n", harga);
    printf("Jumlah Beli  : %d\n", jumlah);
    printf("Total Harga  : %d\n", total);

    return 0;
}
