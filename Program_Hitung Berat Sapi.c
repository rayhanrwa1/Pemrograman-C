#include <stdio.h>
#define Kambing = 221.12
int main()
{
	int sapi1,sapi2,sapi4;
	float sapi3;
	Kambing=221.12;

    printf("Masukkan Berat Sapi 1 : ");
    scanf("%d", &sapi1);
    
    printf("Masukkan Berat Sapi 2 : ");
    scanf("%d", &sapi2);
    
    printf("Masukkan Berat Sapi 3 : ");
    scanf("%f", &sapi3);
    
    printf("Masukkan Berat Sapi 4 : ");
    scanf("%d", &sapi4);
    
    float hitung = sapi1 + sapi2 + sapi3 + sapi4;
    
    printf("Hasil berat Sapi: %.2f\n", hitung);
    printf("Hasil berat Kambing: %i\n", Kambing);

    return 0;
}