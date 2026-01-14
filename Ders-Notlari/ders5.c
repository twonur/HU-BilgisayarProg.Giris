/******************************************************************************
 * DERS 5 - GEOMETRİK HESAPLAMALAR
 * 
 * Bu dosya geometrik şekillerin hacim ve ortalama hesaplamalarını içerir:
 * - Boy uzunluklarının ortalaması
 * - Silindir hacmi hesaplama
 * - Dikdörtgen prizma hacmi hesaplama
 ******************************************************************************/

// ============================================================================
// ÖRNEK 1: Üç Boy Uzunluğunun Ortalamasını Bulma
// ============================================================================
// Üç farklı boy uzunluğunun cm cinsinden ortalaması


#include <stdio.h>

main(){
	float x, y, z, ort;
	
	// Üç boy uzunluğunu kullanıcıdan al
	printf("Birinci boy uzunlugunu giriniz -> "); scanf("%f",&x);
	printf("Ikinci boy uzunlugunu giriniz -> "); scanf("%f",&y);
	printf("Ucuncu boy uzunlugunu giriniz -> "); scanf("%f",&z);
	
	// Ortalama hesabı
	ort = (x+y+z)/3;
	
	printf("\nBoy uzunluklarin ortalamasi %.2f cm dir", ort);
}



// ============================================================================
// ÖRNEK 2: Silindir Hacmini Hesaplama
// ============================================================================
// Silindir hacmi formülü: V = π × r² × h
// π = 3.14, r = yarıçap, h = yükseklik


#include <stdio.h>
main(){
	float r,h,hacmi,pi;
	pi = 3.14;      // Pi sayısı sabit olarak tanımlanıyor
	
	// Silindirin boyutlarını al
	printf("Silindirin taban yaricapini girin (cm): ");scanf("%f", &r);
	printf("Silindirin yuksekligini girin (cm)    : ");scanf("%f", &h);
	
	// Hacim formülü: π × r² × h
	hacmi = pi*r*r*h;
	
	printf("\nSilindirin hacmi = %.2f cm^3", hacmi);
}



// ============================================================================
// ÖRNEK 3: Dikdörtgen Prizmanın Hacmini Hesaplama
// ============================================================================
// Dikdörtgen prizma hacmi formülü: V = Uzunluk × Genişlik × Yükseklik

#include <stdio.h>
main(){
	float x, y, z, hacmi;
	
	// Prizmanın boyutlarını kullanıcıdan al
	printf("Uzunlugu girin (cm)   : ");scanf("%f", &x);
	printf("Genisligi girin (cm)  : ");scanf("%f", &y);
	printf("Yuksekligi girin (cm) : ");scanf("%f", &z);
	
	// Hacim hesaplama: Uzunluk × Genişlik × Yükseklik
	hacmi = x*y*z;
	
	// Detaylı sonuç gösterimi
	printf("\nUzunlugu %.2f genisligi %.2f yuksekligi %.2f olan dikdortgen prizmanin hacmi %.2f cm^3", x,y,z,hacmi);
}
