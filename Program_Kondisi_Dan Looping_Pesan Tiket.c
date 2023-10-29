#include <stdio.h>

int main()
{
	int usia,pilih,pilihseat;
	char num[100];
	char ulang[100]= "ya";
	int total=0;
 
	printf("===== Selamat Datang =====\n");
	printf("===== Di Cinema 21 =====\n");

do{	
	printf("Masukan usia anda :");
	scanf("%d", &usia);
	if(usia <= 18){
	printf("Maaf usia anda belum mencukupi, silahkan pilih film yang kami rekomendasikan\n");
	printf("Masukkan film yang ingin di tonton :\n");
	printf("\t\t1. Spiderman\n");
	printf("\t\t2. Upin-Ipin\n");
	printf("\t\tPilih film :");
	scanf("%d", &pilih);
		if(pilih == 1){
			printf("\t\tPilih kursi\n");
			printf("\t\t1. Seat A\n");
			printf("\t\t2. Seat B\n");
			printf("\t\tPilih kursi! :");
			scanf("%d", &pilihseat);
				if(pilihseat == 1){
					printf("\t\tMasukan kursi antara A1 - A10, Contoh : A1\n");
					printf("\t\tPilih nomor :");
					scanf("%s", &num);
					
					printf("\t\tSelamat tiket berhasil di pesan!\n");
					printf("\t\tFilm : Spidermen\n");
					printf("\t\tseat : %s\n", num);
					
				}else if(pilihseat == 2){
					printf("\t\tMasukan kursi antara B1-B10, Contoh : B1\n");
					printf("\t\tPilih nomor :");
					scanf("%s", &num);
					
					printf("\t\tSelamat tiket berhasil di pesan!\n");
					printf("\t\tFilm : Spiderman\n");
					printf("\t\tseat : %s\n", num);	
					
				}else{
					printf("\t\tInvalid");
			}	
		}else if(pilih == 2){
			printf("\t\tPilih kursi!\n");
			printf("\t\t1. Seat A\n");
			printf("\t\t2. Seat B\n");
			printf("\t\tPilih kursi :");
			scanf("%d", &pilihseat);
				if(pilihseat == 1){
					printf("\t\tMasukan kursi antara A1-A10, Contoh : A1\n");
					printf("\t\tpilih nomor :");
					scanf("%s", &num);
					
					printf("\t\tSelamat tiket berhasil di pesan!\n");
					printf("\t\tFilm : Upin-Ipin\n");
					printf("\t\tseat : %s\n", num);
					
				}else if(pilihseat == 2){
					printf("\t\tMasukan kursi antara B1-B10, Contoh : B1\n");
					printf("t\tPilih nomor :");
					scanf("%s", &num);
					
					printf("\t\tSelamat tiket berhasil di pesan!\n");
					printf("\t\tFilm Upin-Ipin\n");
					printf("\t\tseat : %s\n", num);
					
				}else{
					printf("\t\tInvalid");
				}
		}else{
			printf("\t\tInvalid");
		}
	
	
	}else if(usia >= 18){
	printf("Masukan film yang ingin di tonton :\n");
	printf("\t\t1. Dignitate\n");
	printf("\t\t2. The Doll 3\n");
	printf("\t\tPilih film :");
	scanf("%d", &pilih);
		if(pilih == 1){
			printf("\t\tPilih kursi!\n");
			printf("\t\t1. Seat A\n");
			printf("\t\t2. Seat B\n");
			printf("\t\tPilih kursi :");
			scanf("%d", &pilihseat);
				if(pilihseat == 1){
					printf("\t\tMasukan kursi antara A1-A10, Contoh : A1\n");
					printf("\t\tPilih nomor :");
					scanf("%s", &num);
					
					printf("\t\tSelamat tiket berhasil di pesan!\n");
					printf("\t\tFilm : Dignitate\n");
					printf("\t\tseat : %s\n", num);
				}else if(pilihseat == 2){
					printf("\t\tMasukan kursi antara B1-B10, Contoh : B1\n");
					printf("\t\tPilih nomor :");
					scanf("%s", &num);
					printf("\t\tSelamat tiket berhasil di pesan!\n");
					printf("\t\tFilm : Dignitate\n");
					printf("\t\tseat : %s\n", num);
				}else{
					printf("\t\tInvalid");
				}
		}else if(pilih == 2){
			printf("\t\tPilih kursi!\n");
			printf("\t\t1. Seat A\n");
			printf("\t\t2. Seat B\n");
			printf("\t\tPilih kursi :");
			scanf("%d", &pilihseat);
			if(pilihseat == 1){
				printf("\t\tMasukan kursi antara A1-A10, Contoh : A1\n");
				printf("\t\tpilih nomor :");
				scanf("%s", &num);
				printf("\t\tSelamat tiket berhasil di pesan!\n");
				printf("\t\tFilm : The Doll 3\n");
				printf("\t\tseat : %s\n", num);
			}else if(pilihseat == 2){
				printf("\t\tMasukan kursi antara B1-B10, Contoh : B1\n");
				printf("\t\tPilih nomor :");
				scanf("%s", &num);
				printf("\t\tSelamat tiket berhasil di pesan!\n");
				printf("\t\tFilm The Doll 3\n");
				printf("\t\tseat : %s\n", num);
			}else {
				printf("\t\tInvalid");
			}
		}else {
			printf("\t\tInvalid");
		}
	
	}else{
		printf("\t\tInvalid");
	}total++;
		printf("\t\tpesanan anda: %d\n", total);
		printf("\t\tingin memesan tiket lagi? (y/t):");
		scanf("%s", ulang);
}while (ulang[0]=='y'||ulang[0]=='Y');
printf("\t\tpesanan anda: %d\n", total);
	return 0;
}