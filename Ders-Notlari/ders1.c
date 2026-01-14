/******************************************************************************
 * DERS 1 - C PROGRAMLAMAYA GİRİŞ
 * 
 * Bu dosya C programlama diline giriş seviyesi örnekler içerir:
 * - İlk program ve ekrana çıktı verme (printf)
 * - Değişken tanımlama ve kullanımı
 * - Temel aritmetik işlemler (çarpma)
 ******************************************************************************/

/* NOTLAR:
 * - Düşük seviye, orta seviye ve yüksek seviye diller arasındaki farkları bilmek önemli
 * - C, orta seviye bir programlama dilidir
 */

// ============================================================================
// ÖRNEK 1: İlk C Programı - Ekrana Mesaj Yazdırma
// ============================================================================
// Bu örnek en basit C programını gösterir
// printf() fonksiyonu ekrana metin yazdırmak için kullanılır
// \n karakteri alt satıra geçiş yapar


#include <stdio.h>
main(){
	printf("*** C de ilk program***\n");
}



// ============================================================================
// ÖRNEK 2: Değişken Tanımlama ve Kullanımı
// ============================================================================
// int: Tam sayı değişken tipi
// %d: Tam sayı değerleri yazdırmak için format belirleyici
// getch(); fonksiyonu programı durdurur ve bir tuşa basılmasını bekler


#include <stdio.h>
main()
{
	int a;        // Tam sayı tipinde değişken tanımlama
	a=20;         // Değişkene değer atama
	printf("a sayisinin degeri: %d",a);  // Değişkeni ekrana yazdırma
}



// ============================================================================
// ÖRNEK 3: İki Sayının Çarpımı
// ============================================================================
// Birden fazla değişken tanımlama ve aritmetik işlem yapma örneği

#include <stdio.h>
main()
{
	int a,b,carpim;       // Üç tam sayı değişkeni tanımlama
	a=21;                 // Birinci sayıya değer atama
	b=9;                  // İkinci sayıya değer atama
	carpim=a*b;          // İki sayının çarpımını hesaplama
	
	// Sonuçları ekrana yazdırma
	printf("Birinci sayinin degeri = %d", a);
	printf("\nIkinci sayinin degeri = %d",b);
	printf("\n \nIki sayinin carpimi = %d", carpim);
}

