/******************************************************************************
 * DERS 3 - ÖDEVLER
 * 
 * Bu dosya Ders 3 için verilen ödev çözümlerini içerir:
 * - Tip dönüşümü (Type Casting)
 * - KDV hesaplamaları
 * - Döviz kuru hesaplamaları
 ******************************************************************************/

// ============================================================================
// ÖDEV 1: INT Sayının FLOAT Olarak İşleme Alınması (Type Casting)
// ============================================================================
// Problem: İki tam sayının bölümünü ondalıklı sonuç olarak almak
// Çözüm: (float) ile tip dönüşümü yaparak ondalıklı sonuç elde etmek

/*
#include <stdio.h>
main()
{
	int a,b;    // Tam sayı değişkenler
	
	printf("Bolunen sayiyi giriniz: "); scanf("%d", &a);	
	printf("Bolen sayiyi giriniz: "); scanf("%d", &b);	
	
	// Type Casting: (float) ile a'yı geçici olarak float'a çevir
	float sonuc = (float)a / b;    // Bu işlem ondalıklı sonuç verir
	
	printf("Bolmun sonucu: %.3f", sonuc);   // %.3f: 3 ondalık basamak
}
*/


// ============================================================================
// ÖDEV 2: Değişken KDV Oranlı Satış Fiyatı Hesaplama
// ============================================================================
// Problem: Kullanıcıdan hem fiyat hem KDV oranını alarak satış fiyatını bul
// KDV oranı % olarak girilecek (örn: 18 girilirse %18)

/*
#include <stdio.h>
main(){
	float kdvOrani, fiyat, satisFiyati, kdv;
	
	printf("Urunun fiyatini giriniz: "); scanf("%f", &fiyat);
	printf("Kdv oranini giriniz: %"); scanf("%f", &kdvOrani);   // % sembolü ile görsel
	
	kdv = (kdvOrani/100)*fiyat;       // Yüzdeyi ondalığa çevir ve hesapla
	satisFiyati = fiyat + kdv;        // Ana fiyat + KDV
	
	printf("Satis fiyatiniz: %.2f", satisFiyati);
}
*/


// ============================================================================
// ÖDEV 3: Dolar Cinsi Fiyatı TL'ye Çevirme ve KDV Hesaplama
// ============================================================================
// Problem: 
// 1. Fiyat dolar cinsinden girilecek
// 2. Dolar kuru (1$ = X TL) girilecek
// 3. KDV oranı girilecek
// 4. Ürünün TL cinsinden KDV'li satış fiyatı bulunacak

#include <stdio.h>
main(){
	float fiyatD, dolarTL, kdvOrani, satisFiyati, kdv, TL;
	
	// Kullanıcıdan bilgileri al
	printf("Urunun fiyatini giriniz: $");scanf("%f", &fiyatD);
	printf("Bugunki 1 dolar kurunu giriniz(TL): ");scanf("%f", &dolarTL);
	printf("Kdv oranini giriniz: %%");scanf("%f", &kdvOrani);   // %% = tek % yazdırır
	
	// İşlemler
	TL = fiyatD*dolarTL;              // Dolar fiyatını TL'ye çevir
	kdv = TL*(kdvOrani/100);          // KDV miktarını hesapla
	satisFiyati = TL + kdv;           // KDV'li toplam fiyat
	
	// Sonuçları göster
	printf("\nUrunun TL fiyati: %.2f", TL);
	printf("\nUrunun kdvli satis fiyati: %.2f", satisFiyati);
}


