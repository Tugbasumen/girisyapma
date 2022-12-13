#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	int sifre=123;
	char  kulanici_ad='t';
	int hak=3;
	
	printf("***Giris Yapalim*** \n\n");
	
	while(1==1)
	{
		printf("adinizin bas harfini  giriniz: ");
		scanf("%s",&kulanici_ad);
		printf("sifrenizi giriniz:");
		scanf("%d",&sifre);
		printf("\n");
		
		if(kulanici_ad=='t' && sifre==123)
		{
			printf("TEBRİKLER BASARİLİ GİRİS \n ");
			break;
		}
		else
		{
			printf("sifre veya kullanici adi yanlis !! \n\n");
			if(hak>0)
			{
				hak-=1;
			}
			if(hak==0)
			{
				printf("hakkiniz dolmustur \n\n");
				
				break;
				
			
			}
		}
	}
	
	return 0;
}
