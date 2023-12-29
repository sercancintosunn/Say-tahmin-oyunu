#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>


int main() {
	
	srand(time(NULL));
	
	int sayi,tahmin,i;
	
	sayi = rand()%100; //Bilgisayar�n 0-100 aras� say� se�mesi i�in rand fonksiyonunu kulland�m.
	
	printf("---------- 0-100 Arasi Sayi Tahmin Oyunu----------\n\n");
	
	do //Kontrol� sonradan yap�ca��m i�in do-while d�ng�s� kulland�m.
	{
		printf("Bir Sayi Giriniz: "); //Kullan�c�dan ilk tahminini ald�m.
		scanf("%d",&tahmin);
		if(tahmin < 0 || tahmin > 150)
		{
			printf("Girdiginiz Sayi 0-150 Arasinda Degil.\n"); //Kullan�c� 150 den b�y�k veya 0 dan k�c�k sayi girebilir diye if le ayr� tan�mlad�m.
			continue;
		}
		if(tahmin > sayi) // Sayiya daha kolay tahmin etmesi i�in if le ipu�lar� verdim.
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
