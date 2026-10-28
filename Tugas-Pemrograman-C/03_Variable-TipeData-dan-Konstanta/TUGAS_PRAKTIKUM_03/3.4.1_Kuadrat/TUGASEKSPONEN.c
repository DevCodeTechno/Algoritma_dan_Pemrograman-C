#include <stdio.h>//DevCode.

int main() {
    int angka, hasil;
    printf("Masukkan bilangan: ");
    scanf("%i", &angka);
    hasil = angka * angka;
    printf("Hasil: %i^2 = %i\n", angka, hasil);
    return 0;
}