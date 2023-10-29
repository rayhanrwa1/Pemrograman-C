#include <stdio.h>


int main(){
	
	int pilih; 
	int matriks1[3][3];
	int matriks2[3][3];
	int hasil[3][3];
	
	printf("=== Operasi Matriks ===\n");
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("Pilih Salah Satu (1/2/3):");
	scanf("%d", &pilih);
	
	if (pilih==1){
		printf("\nMasukan elemen pada matriks pertama(3x3):\n" );
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				scanf("%d", &matriks1[i][j]);
			}
	    printf("\n");
		}
			
		printf("\nMasukan elemen pada matriks kedua(3x3):\n" );
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				scanf("%d", &matriks2[i][j]);
			}
        printf("\n");
		}
		
		printf("\nmatriks pertama :\n");
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				printf("%d", matriks1[i][j]);
			}
			printf("\n");
		}
		printf("\nmatriks kedua :\n");
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				printf("%d", matriks2[i][j]);
			}
        printf("\n");
		}
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
			hasil[i][j] = matriks1[i][j] + matriks2[i][j];	
			}
        printf("\n");
		}
		printf("\nhasil penjumlahan :\n");
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
			printf("%d", hasil[i][j]);	
			}
        printf("\n");
			
		}
		
		
		
	}else if(pilih==2){
		printf("\nMasukan elemen pada matriks pertama(3x3):\n" );
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				scanf("%d", &matriks1[i][j]);
			}
	    printf("\n");
		}
			
		printf("\nMasukan elemen pada matriks kedua(3x3):\n" );
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				scanf("%d", &matriks2[i][j]);
			}
        printf("\n");
		}
		
	printf("\nmatriks pertama :\n");
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				printf("%d", matriks1[i][j]);
			}
			printf("\n");
		}
		printf("\nmatriks kedua :\n");
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				printf("%d", matriks2[i][j]);
			}
        printf("\n");
		}
		
		
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
			hasil[i][j] = matriks1[i][j] - matriks2[i][j];	
			}
			printf("\n");
		}
		printf("hasil pengurangan :\n");
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
			printf("%d", hasil[i][j]);	
			}
        printf("\n");
			
		}
 		
    
	}else if(pilih==3){
		printf("\nMasukan elemen pada matriks pertama(3x3):\n" );
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				scanf("%d", &matriks1[i][j]);
			}
	    printf("\n");
		}
			
		printf("\nMasukan elemen pada matriks kedua(3x3):\n" );
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				scanf("%d", &matriks2[i][j]);
			}
        printf("\n");
		}
		
	printf("\nmatriks pertama :\n");
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				printf("%d", matriks1[i][j]);
			}
			printf("\n");
		}
		printf("\nmatriks kedua :\n");
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				printf("%d", matriks2[i][j]);
			}
        printf("\n");
		}
		
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
			hasil[i][j] = matriks1[i][j] * matriks2[i][j];	
			}
			printf("\n");
		}
		
		printf("\nhasil perkalian :\n");
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
			printf("%d", hasil[i][j]);	
			}
        printf("\n");
			
		}
	
	
	}else{
		printf("input salah maszehh");
	}
	
}