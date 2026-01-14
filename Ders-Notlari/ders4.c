/******************************************************************************
 * DERS 4 - MATH KÜTÜPHANESİ VE MATEMATİKSEL FONKSİYONLAR
 * 
 * Bu dosya math.h kütüphanesinin kullanımını gösterir:
 * - pow() fonksiyonu: Üs alma işlemi
 * - Kareler toplamı hesaplama
 * - Ortalama hesaplama
 ******************************************************************************/

// ============================================================================
// ÖRNEK 1: Üç Sayının Ortalaması ve Kareler Toplamı
// ============================================================================
// pow(taban, üs) fonksiyonu: Üs alma işlemi yapar
// #include <math.h> kütüphanesi gereklidir

#include <stdio.h>
#include <math.h>      // pow() fonksiyonu için gerekli

main(){
	float a, b, c, ort, kare;
	
	// Kullanıcıdan üç sayı al (boşlukla ayrılmış)
	printf("3 sayi giriniz: "); 
	scanf("%f %f %f", &a, &b, &c);
	
	// Aritmetik ortalama: (a+b+c)/3
	ort = (a+b+c)/3; 
	
	// Kareler toplamı: a² + b² + c²
	// pow(a,2) = a'nın karesi
	kare = pow(a,2) + pow(b,2) + pow(c,2);
	
	// Alternatif yöntem (pow kullanmadan):
	// kare = a*a + b*b + c*c;
	
	// Sonuçları göster
	printf("\nSayilarin ortalamasi: %.2f", ort);
	printf("\nKarelerinin toplami: %.2f", kare);
}

/* NOTLAR:
 * - double ile çalışsaydık %lf format belirleyicisi kullanırdık
 * - pow(x, y) fonksiyonu x^y işlemini yapar
 * - math.h kütüphanesi başka fonksiyonlar da içerir:
 *   sqrt(x)  : Karekök
 *   ceil(x)  : Yukarı yuvarlama
 *   floor(x) : Aşağı yuvarlama
 *   fabs(x)  : Mutlak değer
 */

