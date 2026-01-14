/******************************************************************************
 * DERS 7 - SWITCH-CASE VE FOR DÖNGÜSÜ
 * 
 * Bu dosya switch-case yapısı ve for döngüsünün kullanımını gösterir:
 * - Varyans hesaplama
 * - Not sistemi (A, B, C, F)
 * - switch-case yapısı
 * - for döngüsü ile tekrarlı işlemler
 * - Toplam ve ortalama hesaplama
 ******************************************************************************/

// ============================================================================
// ÖRNEK 1: Üç Sayının Varyansını Hesaplama
// ============================================================================
// Varyans formülü: Var = [(x1-ort)² + (x2-ort)² + (x3-ort)²] / n

/*
#include <stdio.h>
#include <math.h>     // pow() fonksiyonu için

main(){
	float x,y,z, ort, var;
	
	// Üç sayı al
	printf("3 sayi giriniz: \n");
	scanf("%f %f %f", &x,&y,&z);
	
	// Ortalama hesapla
	ort = (x + y + z)/3;
	
	// Varyans hesapla: Her sayının ortalamadan farkının karesi toplanır ve sayıya bölünür
	var = (pow(x-ort,2) + pow(y-ort,2) + pow(z-ort,2))/3;
	
	printf("Oralama: %.2f", ort);
	printf("\nVaryans: %.2f", var);
}
*/


// ============================================================================
// ÖRNEK 2: Öğrenci Not Sistemi (Harf Notu)
// ============================================================================
// Vize ve final ortalamasına göre harf notu belirleme
// && operatörü: İki koşul da doğru olmalı

/*
#include <stdio.h>
main(){
	float v, f, ort;
	
	printf("Vize ve final notunu giriniz: \n");
	scanf("%f %f", &v, &f);
	
	ort = (v+f)/2;    // Not ortalaması
	
	printf("Ders notu %.f dir\n", ort);
	
	// Not aralıklarına göre harf notu belirleme
	if(90<=ort && ort<=100)              // && (VE): Her iki koşul da doğru olmalı
		printf("Ogrenci A notu ile basarilidir.");
	else if (80<=ort && ort<90)
		printf("Ogrenci B notu ile basarilidir.");
	else if (70<=ort && ort<80)
		printf("Ogrenci C notu ile basarilidir.");
	else if (0<= ort && ort<70)
		printf("Ogrenci F notu ile basarilidir.");
	else
		printf("Gecersiz");    // 0-100 dışı değerler için
}
*/


/* ============================================================================
 * SWITCH-CASE YAPISI
 * ============================================================================
 * 
 * Belirli bir değişkenin değerine göre farklı işlemler yapmak için kullanılır
 * if-else'e alternatiftir ancak sadece eşitlik kontrolü yapar
 * 
 * SÖZDIZIMI:
 * 
 * switch(degisken){
 *     case deger1:
 *         // deger1 ile eşleşirse yapılacak işlemler
 *         break;
 *     case deger2:
 *         // deger2 ile eşleşirse yapılacak işlemler
 *         break;
 *     default:
 *         // Hiçbiri eşleşmezse yapılacak işlemler
 * }
 * 
 * ÖNEMLİ: break kullanmazsanız sonraki case'ler de çalışır!
 */


// ============================================================================
// ÖRNEK 3: Switch-Case ile Karakter Kontrolü
// ============================================================================
// Kullanıcının girdiği karakteri kontrol etme

/*
#include <stdio.h>
main(){
	char x;
	printf("a veya b harfinden birini giriniz: ");scanf("%c", &x);
	
	switch(x){                    // x değişkeninin değerine göre
		case 'a':                 // Eğer 'a' ise
			printf("\na degerini girdiniz"); 
			break;                // switch'ten çık
		case 'b':                 // Eğer 'b' ise
			printf("\nb degerini girdiniz"); 
			break;
		default:                  // Hiçbiri değilse
			printf("\nHic birini girmediniz");
	}
}
*/


/* ============================================================================
 * FOR DÖNGÜSÜ
 * ============================================================================
 * 
 * Belirli sayıda tekrar eden işlemler için kullanılır
 * 
 * SÖZDIZIMI:
 * for(başlangıç; koşul; artış){
 *     // Her döngüde yapılacak işlemler
 * }
 * 
 * ÖRNEK:
 * for(i=1; i<=10; i++){
 *     printf("Döngü %d\n", i);
 * }
 * 
 * i++  : i = i + 1 ile aynı (bir artır)
 * i+=2 : i = i + 2 ile aynı (iki artır)
 * 
 * NOT: Tek satır işlem varsa {} gerekmez
 */


// ============================================================================
// ÖRNEK 4: Belirli Sayıda Tekrarlı Yazma
// ============================================================================
// for döngüsü ile ekrana tekrarlı yazma

/*
#include <stdio.h>
main(){
	int x,i;
	
	printf("Ekrana kac kere yazdiralim: ");scanf("%d", &x);
	
	// i, 1'den başlar, x'e kadar devam eder, her adımda 1 artar
	for(i=1; i<=x; i++)
		printf("fenerbahce\n");    // x kez yazdırılır
}
*/


// ============================================================================
// ÖRNEK 5: Sayıların Toplamını Bulma (for Döngüsü)
// ============================================================================
// Kullanıcıdan N adet sayı alıp toplamını hesaplama

/*
#include <stdio.h>
main(){
	float toplam,x;
	int i,adet;
	
	printf("Kac sayinin toplami alinacak: ");scanf("%d", &adet);
	
	toplam = 0;    // Toplamı sıfırla (önemli!)
	
	// 1'den adet'e kadar döngü
	for(i=1;i<=adet;i++){
		printf("%d. Sayiyi giriniz: ", i);
		scanf("%f", &x);
		toplam += x;    // toplam = toplam + x
	}
	
	printf("Sayilarin toplami %.2f", toplam);
}
*/


// ============================================================================
// ÖRNEK 6: Sayıların Ortalamasını Bulma (for Döngüsü + Ortalama)
// ============================================================================
// N sayının ortalamasını hesaplama
// short int: Küçük tam sayılar için daha az bellek kullanır

#include <stdio.h>
main(){
	float toplam,x;
	int i,adet;    // short int kullanabiliriz (küçük sayılar için)
	
	printf("Kac sayinin ortalamasi alinacak: ");scanf("%d", &adet);
	
	toplam = 0;    // Başlangıç değeri
	
	// Her sayıyı al ve topla
	for(i=1;i<=adet;i++){
		printf("%d. Sayiyi giriniz: ", i);
		scanf("%f", &x);
		toplam += x;
	}
	
	// Ortalama: Toplam / Adet
	printf("\nSayilarin ortalamasi %.2f", toplam/adet);
}
