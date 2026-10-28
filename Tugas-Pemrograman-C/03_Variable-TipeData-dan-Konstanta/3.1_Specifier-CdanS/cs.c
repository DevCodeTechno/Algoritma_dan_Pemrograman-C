#include <stdio.h> // oleh DevCode.
int main(){
	char huruf;
	char nama[25];
	printf ("Masukkan huruf : ");
	scanf ("%c",&huruf);//C untuk Character
	printf ("Masukkan nama : ");
	scanf ("%s",&nama);//S untuk strings
	printf ("\nNama : %c\n",huruf);
	printf ("Nama : %s",nama);
	return 0;
}