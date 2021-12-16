#include <stdio.h>
#include <string.h>
   
struct Mahasiswa {  
	char nama[100];
	int umur;
	char nim [20];   
	
}iman;  
  
int main(){  
	
	// ========================= CARA 1 =========================
	struct Mahasiswa rio = {"Rio Mario", 19, "012930123"};
	
	// ========================= CARA 2 =========================
	
	strcpy(iman.nama, "Iman Jeje");
	strcpy(iman.nim, "01230123");
	iman.umur = 20;
   
	printf("Nama Siswa : %s\n", rio.nama);
	printf("Umur       : %d\n", rio.umur);
	printf("NIM        : %s\n", rio.nim);
   
    printf("\nNama Siswa : %s\n", iman.nama);
	printf("Umur       : %d\n", iman.umur);
	printf("NIM        : %s\n", iman.nim);
	
	return 0;  
}
