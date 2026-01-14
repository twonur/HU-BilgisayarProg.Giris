/******************************************************************************
 * DERS 12 - İÇ İÇE DÖNGÜLER VE WHILE DÖNGÜSÜ
 * 
 * Bu dosya iç içe döngüleri ve while döngüsünü içerir:
 * - Faktöriyel tablosu (0! - n!)
 * - Dikdörtgen çizimi (iç içe döngü)
 * - while döngüsü kullanımı
 * - Sınıf başarı yüzdesi hesaplama
 ******************************************************************************/

// ============================================================================
// ÖRNEK 1: Faktöriyel Tablosu (0'dan n'e kadar)
// ============================================================================
// 0!'den n!'e kadar tüm faktöriyelleri ekrana yazdırma

#include <stdio.h>
main(){
	int sayi,i;
	long int carpim=1;     // long int: Büyük sayılar için
	
	printf("Faktoriyeli hesaplanacak sayi: ");scanf("%d",&sayi);
	
	for(i=0;i<=sayi;i++){
		if(i==0){
			// 0! = 1 (tanım gereği)
			printf("%d! = %d \n", i, carpim);
		}
		else{
			carpim *= i;   // Her adımda bir sonraki faktöriyeli hesapla
			printf("%d! = %d \n", i, carpim);
		}
	}
}


// ============================================================================
// ÖRNEK 2: Dikdörtgen Çizimi (İç İçe Döngü)
// ============================================================================
// Dış döngü: Satırlar, İç döngü: Sütunlar


#include <stdio.h>
main(){
	int a,b,i,j;
	
	printf("Dikdortgen boyutlarini girin (a b): ");scanf("%d %d", &a,&b);
	
	// Dış döngü: a tane satır
	for(i=0;i<a;i++){
		// İç döngü: Her satırda b tane yıldız
		for(j=0;j<b;j++){
			printf("*");
		}
		printf("\n");    // Satır sonu
	}
}



// ============================================================================
// ÖRNEK 3: Çift Sayıları Yazdırma (for döngüsü)
// ============================================================================
// i+=2 ile ikişer ikişer artırma


#include <stdio.h>
main(){
	int i,sayi;
	
	printf("Hangi sayiya kadar cift sayilar yazdirilsin: ");scanf("%d",&sayi);
	
	// 0'dan başla, 2'şer 2'şer artır
	for(i=0;i<=sayi;i+=2){
		printf("%d \n",i);
	}
}



/* ============================================================================
 * WHILE DÖNGÜSÜ
 * ============================================================================
 * 
 * while(koşul){
 *     // Koşul doğru olduğu sürece tekrarlanacak işlemler
 * }
 * 
 * for döngüsünden farkı: Tekrar sayısı belli değilse while kullanılır
 */


// ============================================================================
// ÖRNEK 4: Çift Sayıları Yazdırma (while döngüsü)
// ============================================================================
// for yerine while kullanımı


#include <stdio.h>
main(){
	int sayi,i=0;     // i'yi döngü dışında tanımla
	
	printf("Hangi sayiya kadar cift sayilar yazdirilsin: ");scanf("%d",&sayi);
	
	// i sayıdan küçük veya eşit olduğu sürece
	while(i<=sayi){
		printf("%d \n",i);
		i+=2;    // Artırımı manuel yapmalıyız
	}
}



// ============================================================================
// ÖRNEK 5: Sınıf Başarı Yüzdesi Hesaplama (while döngüsü)
// ============================================================================
// Öğrenci notlarını alıp başarı yüzdesini hesaplama
// Başarı notu: 65 ve üstü


#include <stdio.h>
main(){
	int i=1,basari=0;
	float yuzde,notu,sayi;
	
	printf("Ogrenci sayisini giriniz: ");scanf("%f", &sayi);
	
	// Her öğrencinin notunu al
	while(i<=sayi){
		printf("%d. ogrenci notu: ",i);scanf("%f",&notu);
		
		// 65 ve üstü başarılı
		if(notu>=65)
			basari++;    // Başarılı öğrenci sayacını artır
		
		i++;
	}
	
	// Başarı yüzdesi: (Başarılı / Toplam) * 100
	yuzde = basari/sayi;
	printf("Sinifin basari yuzdesi = %.2f", yuzde);
}

