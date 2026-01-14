/******************************************************************************
 * DERS 3 - KULLANICIDAN GİRDİ ALMA VE VERİ TİPLERİ
 * 
 * Bu dosya kullanıcıdan veri almanın ve veri tiplerinin kullanımını gösterir:
 * - scanf() fonksiyonu ile kullanıcıdan girdi alma
 * - Temel veri tipleri (int, float, char, double)
 * - Format belirleyiciler (%d, %f, %c)
 * - Formatlanmış çıktı (virgülden sonra basamak sayısı)
 ******************************************************************************/

// ============================================================================
// ÖRNEK 1: Kullanıcıdan Tek Sayı Girişi Alma
// ============================================================================
// scanf() fonksiyonu kullanıcıdan klavyeden veri girmesini sağlar
// & işareti değişkenin bellek adresini gösterir

/*
#include <stdio.h>

main(){
	int deger;     // Tam sayı değişkeni tanımlama
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &deger);     // %d: tam sayı, &: değişkenin adresi
	
	printf("\n");
	printf("Girilen sayi = %d\n",deger);
}
*/


// ============================================================================
// ÖRNEK 2: İki Sayının Farkını Hesaplama (Kullanıcıdan Girdi Alma)
// ============================================================================
// Birden fazla scanf kullanarak iki değer alma ve çıkarma işlemi

/*
#include <stdio.h>

main(){
	int a,b,c;
	
	printf("Birinci sayiyi giriniz: ");   
	scanf("%d",&a);      // İlk sayıyı al
	
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&b);      // İkinci sayıyı al

	c = a-b;             // Fark işlemi
	
	printf("Ikis sayinin farki = %d", c);
}
*/


// ============================================================================
// ÖRNEK 3: Dikdörtgenin Çevresini Hesaplama
// ============================================================================
// Geometrik hesaplama örneği

/*
#include <stdio.h>

main(){
	int kk,uk,c;      // kk: kısa kenar, uk: uzun kenar, c: çevre
	
	printf("Kisa kenari girinz: "); scanf("%d", &kk);
	printf("Uzun kenari giriniz: "); scanf("%d", &uk);
	
	c = (kk+uk)*2;    // Çevre formülü: 2*(kısa+uzun)
	
	printf("DIkdortgenin cevresi = %d", c);
}
*/


/* ============================================================================
 * VERİ TİPLERİ HAKKINDA NOTLAR
 * ============================================================================
 * 
 * DOĞRU DEĞİŞKEN İSİMLENDİRMESİ:
 * - Değişken isimleri harfle başlamalı
 * - Türkçe karakter kullanmamak daha iyi
 * - Anlamlı isimler kullanın (orn: fiyat, toplam, not)
 * 
 * TEMEL VERİ TİPLERİ:
 * 
 * char    - Tek bir karakter saklar (-128 / 127)
 *           Örnek: char harf = 'A';
 * 
 * int     - Tam sayı saklar (-32768 / 32768)
 *           Örnek: int sayi = 100;
 * 
 * float   - Tek duyarlı gerçel sayı saklar (3.4e-38 / 3.4e+38)
 *           Örnek: float pi = 3.14;
 *           Format: %f
 * 
 * double  - Çift duyarlı gerçel sayı saklar (çok daha büyük aralık)
 *           Örnek: double buyukSayi = 1.234567890123;
 *           Format: %lf
 */


// ============================================================================
// ÖRNEK 4: Bölme İşlemi (Float Kullanımı)
// ============================================================================
// float kullanarak ondalıklı sonuç elde etme
// %6.2f: 6 karakter genişlik, virgülden sonra 2 basamak

/*
#include <stdio.h>

main(){
	float a,b;         // Ondalıklı sayılar için float
	
	printf("Bolunen sayiyi gitiniz: "); scanf("%f", &a);  // %f: float için
	printf("Bolen sayiyi gitiniz: "); scanf("%f", &b);
	
	// Formatlanmış çıktı: %6.2f = 6 karakter genişlik, 2 ondalık basamak
	printf("Bolum sonucu = %6.2f", a/b);
	
	/* FORMAT AÇIKLAMASI:
	 * %6.2f açıklaması:
	 * 6  = Başa eklenecek toplam karakter genişliği (boşluk dahil)
	 * .2 = Virgülden sonra yazılacak basamak sayısı
	 * f  = Float/ondalıklı sayı
	 */
}
*/


// ============================================================================
// ÖRNEK 5: KDV Hesaplama (Float ve Sabit Değer Kullanımı)
// ============================================================================
// Sabit KDV oranı ile satış fiyatı hesaplama
// #define kullanarak global sabit tanımlanabilir: #define kdvOrani 0.18

/*
#include <stdio.h>

main(){
	float kdv, kdvOrani, fiyat, satisFiyati;
	
	kdvOrani = 0.18;     // Sabit KDV oranı (%18)
	printf("Urunun fiyatini giriniz: "); scanf("%f", &fiyat);
	
	kdv = fiyat*kdvOrani;         // KDV miktarını hesapla
	satisFiyati = fiyat + kdv;    // Toplam satış fiyatı
	
	printf("Satis fiyatiniz= %.2f", satisFiyati);
}

// NOT: #define kdvOrani 0.18 şeklinde tanimlarsak global sabit olur
*/


// ============================================================================
// ÖRNEK 6: Üç Sayının Ortalaması (Çoklu Değişken Kullanımı)
// ============================================================================
// Birden fazla float değerin ortalamasını hesaplama

#include <stdio.h>
main(){
	float a,b,c, ort;
	
	// Üç sayıyı boşlukla ayrılmış şekilde al
	printf("Sayilari giriniz: "); scanf("%f %f %f", &a, &b, &c);
	
	ort = (a+b+c)/3;      // Aritmetik ortalama formülü
	
	// %.4f: virgülden sonra 4 basamak göster
	printf("\nSayilarin ortalamasi= %.4f", ort);
}


/* ============================================================================
 * C'DE ARİTMETİK İŞLEMLER ÖZET
 * ============================================================================
 * 
 * +  : Toplama
 * -  : Çıkarma
 * *  : Çarpma
 * /  : Bölme
 * %  : Mod alma (kalan bulma - sadece tam sayılarla)
 * 
 * İŞLEM ÖNCELİĞİ:
 * 1. Parantez içi işlemler
 * 2. *, /, %
 * 3. +, -
 */
