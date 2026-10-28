#include <stdio.h>//DevCode.

int main() {
    float alas, tinggi, luas;
    printf("Masukkan nilai alas: ");
    scanf("%f", &alas);
    printf("Masukkan nilai tinggi: ");
    scanf("%f", &tinggi);
    luas = 0.5 * alas * tinggi;
    printf("\nLuas segitiga dengan alas %.0f dan tinggi %.0f adalah %.2f\n", alas, tinggi, luas);
    return 0;
}