/******************************************************************************
 * DERS 9 - ÜÇGEN TİPİ BELİRLEME VE SWITCH-CASE İLE AY GÜN SAYISI
 * 
 * Bu dosya karmaşık koşullu yapıları içerir:
 * - Üçgen kenarlarından üçgen türü belirleme
 * - Üç sayıyı büyükten küçüğe sıralama
 * - switch-case ile ay gün sayısı bulma
 ******************************************************************************/

// ============================================================================
// ÖRNEK 1: Üçgen Türü Belirleme
// ============================================================================
// Üç kenar uzunluğuna göre üçgen türünü belirleme
// Üçgen kuralı: Herhangi iki kenarın toplamı üçüncü kenardan büyük olmalı
// Eşkenar: Üç kenar eşit
// İkizkenar: İki kenar eşit
// Çeşitkenar: Hiçbir kenar eşit değil

/*
#include <stdio.h>
main(){
	float x,y,z;
	printf("3 Kenar uzunlugu giriniz: \n");scanf("%f %f %f", &x,&y,&z);
	
	// Önce üçgen olup olmadığını kontrol et
	// Üçgen kuralı: Her iki kenarın toplamı diğerinden büyük olmalı
	if(x+y > z && x+z > y && z+y > x){
		// Eşkenar üçgen kontrolü (üç kenar eşit)
		if(x == y && y ==z){
			printf("\nBu bir eskenar ucgen\n");
		}
		// İkizkenar üçgen kontrolü (iki kenar eşit)
		else if(x==y || x == z || y==z){
			printf("\nBu bir ikizkenar ucgen\n");
		}
		// Çeşitkenar üçgen (hiçbir kenar eşit değil)
		else{
			printf("\nBu bir cesitkenar ucgen\n");
		}
	}
	else{
		printf("\nBu bir ucgen degildir\n");    // Üçgen kuralı sağlanmıyor
	}
}
*/


// ============================================================================
// ÖRNEK 2: Üç Sayıyı Büyükten Küçüğe Sıralama
// ============================================================================
// Tüm olası durumları kontrol ederek sıralama yapma

/*
#include <stdio.h>
main(){
	int x,y,z;
	printf("3 sayi giriniz: ");scanf("%d %d %d", &x,&y,&z);
	
	// Tüm olası sıralama durumlarını kontrol et
	if(x>y && y>z){
		printf("%d-%d-%d", x,y,z);
	}
	else if(x>y && z>y){
		printf("%d-%d-%d", x,z,y);
	}
	
	else if(y>x && x>z){
		printf("%d-%d-%d", y,x,z);
	}
	
	else if(y>z && z>x){
		printf("%d-%d-%d", y,z,x);
	}
	
	else if(z>x && x>y){
		printf("%d-%d-%d", z,x,y);
	}
	
	else if(x>y && z>y){
		printf("%d-%d-%d", x,z,y);
	}
	else if(z>y && y>x){
		printf("%d-%d-%d", z,y,x);
	}
	else{
		printf("Bu sayilar esittir");
	}
}

*/


// ============================================================================
// ÖRNEK 3: Ay Numarasına Göre Gün Sayısını Bulma (switch-case)
// ============================================================================
// 1-12 arası ay numarası girilerek o ayın kaç gün olduğunu bulma
// case'leri gruplandırma tekniği kullanılıyor

#include <stdio.h>
main(){
	int ay;
	printf("Lutfen bir ay numarasi giriniz: ");scanf("%d",&ay);
	
	switch (ay){
		// 31 günlük aylar (case'ler gruplandırılıyor)
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("\nBu ay 31 icerir\n");
			break;
			
		// 30 günlük aylar
		case 4: case 6: case 9: case 11:
			printf("\nBu ay 30 gun icerir\n");
			break;
			
		// Şubat ayı (28 veya 29 gün - artık yıla göre)
		case 2:
			printf("Bu ay 28 veya 29 gun icerir");
			break;
			
		// Geçersiz ay numarası
		default:
			printf("Gecersiz ay girdiniz");
			break;
			
	}
}


