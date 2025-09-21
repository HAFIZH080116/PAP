#include <stdio.h>

int main() {
    char nama[50];
    int nilai;

    printf("Masukkan nama: ");
    scanf("%s", nama);
    printf("Masukkan nilai UAS: ");
    scanf("%d", &nilai);

    if (nilai > 80) {
        printf("%s LULUS\n", nama);
    } else {
        printf("%s TIDAK LULUS\n", nama);
    }
    return 0;
}
