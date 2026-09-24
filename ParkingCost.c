#include <stdio.h>

int main () {
    int waktu;
    char kendaraan[15];
    printf("Nomor Kendaraan = ");
    scanf("%[^\n]", kendaraan); getchar();

    printf("Lama parkir = ");
    scanf("%d", &waktu); getchar();

    int biaya = 5000;
    int diskon;
    int Totalbiaya;
    
    if (waktu <= 2) {
        biaya = 5000 * waktu;
        diskon = 0;
        Totalbiaya = biaya - diskon;
        printf("\nBiaya Awal = Rp%d\n", biaya);
        printf("Diskon = Rp%d\n", diskon);
        printf("Total bayar = Rp%d\n", Totalbiaya);
    } else if (waktu <= 8) {
        biaya = (5000 * 2) + (3000 * (waktu - 2));
        diskon = 0;
        Totalbiaya = biaya - diskon;
        printf("\nBiaya awal = Rp%d\n", biaya);
        printf("Diskon = Rp%d\n", diskon);
        printf("Total bayar = Rp%d\n", Totalbiaya);
    } else {
        biaya = (5000 * 2) + (3000 * (waktu - 2));
        diskon = biaya * 10/100;
        Totalbiaya = biaya - diskon;
        printf("\nBiaya awal = Rp%d\n", biaya);
        printf("Diskon = Rp%d\n", diskon);
        printf("Total bayar = Rp%d\n", Totalbiaya);
    }
    

    return 0;
}