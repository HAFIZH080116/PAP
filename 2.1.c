#include <stdio.h>

int main() {
    char nama[100], nim[20], ttl[30], prodi[50], universitas[50], hobi[30];

    printf("Nama       : ");
    fgets(nama, sizeof(nama), stdin);

    printf("NIM        : ");
    fgets(nim, sizeof(nim), stdin);

    printf("TTL        : ");
    fgets(ttl, sizeof(ttl), stdin);

    printf("Prodi      : ");
    fgets(prodi, sizeof(prodi), stdin);

    printf("Universitas: ");
    fgets(universitas, sizeof(universitas), stdin);

    printf("Hobi       : ");
    fgets(hobi, sizeof(hobi), stdin);

    printf("\nData Diri Anda:\n");
    printf("Nama       : %s", nama);
    printf("NIM        : %s", nim);
    printf("TTL        : %s", ttl);
    printf("Prodi      : %s", prodi);
    printf("Universitas: %s", universitas);
    printf("Hobi       : %s", hobi);

    return 0;
}