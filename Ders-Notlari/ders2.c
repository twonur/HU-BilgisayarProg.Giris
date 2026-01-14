/******************************************************************************
 * DERS 2 - TEMEL ARİTMETİK İŞLEMLER
 * 
 * Bu dosya temel aritmetik işlemlerin C'de nasıl yapıldığını gösterir:
 * - Toplama işlemi
 * - Çarpma işlemi
 * - Çıkarma işlemi
 * - Format belirleyiciler (%d)
 ******************************************************************************/

// ============================================================================
// ÖRNEK 1: İki Sayının Toplamı (Değişken Tanımlama ve Toplama)
// ============================================================================
// İki tam sayı toplanıp sonuç ekrana yazdırılıyor

 /*
 #include <stdio.h>
 
 int a, b, toplam;      // Global değişken tanımlama
 
 main(){
 	a = 50;            // Birinci sayıya değer atama
 	b = 100;           // İkinci sayıya değer atama
 	toplam = a + b;    // İki sayının toplamını hesaplama
 	
 	printf("Iki sayinin toplami = %d", toplam);
 }
 */
 
 
// ============================================================================
// ÖRNEK 2: İki Sayının Çarpımı (Birden Fazla printf Kullanımı)
// ============================================================================
// \n karakteri ile alt satıra geçiş yapılarak çıktı düzenleniyor

/*
#include <stdio.h>
main (){
	int a,b,c;         // Üç tam sayı değişkeni tanımlama
	a = 10;            // Birinci sayıya değer atama
	b = 15;            // İkinci sayıya değer atama
	c = a * b;         // Çarpma işlemi
	
	// Her değeri ayrı satırda yazdırma
	printf("Birinci sayi = %d \n", a);
	printf("Ikinci  sayi = %d \n\n", b);     // \n\n ile iki satır boşluk
	printf("Iki sayinin carpimi = %d", c);
}
*/


// ============================================================================
// ÖRNEK 3: İki Sayının Farkı (Çıkarma İşlemi)
// ============================================================================
// Çıkarma işlemi ve tek satırda birden fazla değişken yazdırma

/*
#include <stdio.h>
main(){
	int a,b,c;
	a = 50;           // Birinci sayı
	b = 40;           // İkinci sayı
	c = a - b;        // Çıkarma işlemi
	
	// Tek printf ile tüm sonucu gösterme
	printf("%d - %d = %d", a,b,c);
}
*/
