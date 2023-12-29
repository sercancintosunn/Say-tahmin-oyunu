#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>


int main() {
	
	srand(time(NULL));
	
	int sayi,tahmin,i;
	
	sayi = rand()%100; //Bilgisayarýn 0-100 arasý sayý seçmesi için rand fonksiyonunu kullandým.
	
	printf("---------- 0-100 Arasi Sayi Tahmin Oyunu----------\n\n");
	
	do //Kontrolü sonradan yapýcaðým için do-while döngüsü kullandým.
	{
		printf("Bir Sayi Giriniz: "); //Kullanýcýdan ilk tahminini aldým.
		scanf("%d",&tahmin);
		if(tahmin < 0 || tahmin > 150)
		{
			printf("Girdiginiz Sayi 0-150 Arasinda Degil.\n"); //Kullanýcý 150 den büyük veya 0 dan kücük sayi girebilir diye if le ayrý tanýmladým.
			continue;
		}
		if(tahmin > sayi) // Sayiya daha kolay tahmin etmesi için if le ipuçlarý verdim.
		{
			printf("Tahmininiz Sayidan Buyuktur!\n");
		}
		else  if(tahmin < sayi)
		{
			printf("Tahmininiz Sayidan Kucuktur!\n");
		}
		else
		{
			printf("Tebrikler!Sayiyi Dogru Tahmin Ettiniz.\n");
		}
		i++;
	}
	while(tahmin != sayi);
	
	printf("Sayiyi %d. Tahmininizde Buldunuz.\n",i);
	
	return 0;
}
