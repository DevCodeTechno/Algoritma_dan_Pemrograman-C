#include <stdio.h>//DevCode.

int main() {
    float panjang, lebar, keliling;
    printf("Masukkan nilai panjang: ");
    scanf("%f", &panjang);
    printf("Masukkan nilai lebar: ");
    scanf("%f", &lebar);
    keliling = 2 * (panjang + lebar);
    printf("\nKeliling Persegi panjang dengan panjang %.0f dan lebar %.0f adalah %.2f\n", panjang, lebar, keliling);
    return 0;
}