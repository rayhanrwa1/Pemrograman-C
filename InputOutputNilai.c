#include <stdio.h>

int main()
{
	int Matematika,Fisika,Biologi;
	
	printf("=== Perhitungan Nilai Rata-rata ===\n");
	
	printf("Masukan Nilai Matematika : ");
	scanf("%d",&Matematika);
	
	printf("Masukan Nilai Fisika : ");
	scanf("%d",&Fisika);

	printf("Masukan Nilai Biologi : ");
	scanf("%d",&Biologi);
	
	int hitung = Matematika + Fisika + Biologi;
	int hasil = hitung/3;
	
	printf("Nilai Rata-rata : %d\n", hasil);			
	
	
}