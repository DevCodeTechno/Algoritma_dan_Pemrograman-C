#include <stdio.h>//DevCode.
int main ()
{
	char nama[25], alamat[25];
	int umur;
	printf("Masukkan nama anda: ");
	fgets(nama, sizeof (nama), stdin);//memasukkan namanya harus 2 kalimat, Fgets input bisa 2 kalimat/1 garis-scanf hanya 1 kalimat saja
	printf ("Masukkan alamat anda: ");//stdin itu standard input
	scanf("%s",&alamat);
	printf("Masukkan umur anda: ");
	scanf("%i",&umur);
	printf("\nNama anda:\t %s", &nama);
	printf("Alamat anda: %s", &alamat);//n hapus satu
	printf("\nUmur anda:\t %i tahun", umur);
	return 0;
}