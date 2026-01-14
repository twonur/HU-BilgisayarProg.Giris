/******************************************************************************
 * DERS 11 - İLERİ DÖNGÜ KONULARI
 * 
 * Bu dosya daha karmaşık döngü uygulamalarını içerir:
 * - Üs alma işlemi (taban^üs)
 * - Faktöriyel hesaplama
 * - Mükemmel sayı kontrolü
 ******************************************************************************/

// ============================================================================
// ÖRNEK 1: Üs Alma İşlemi (Taban^Üs)
// ============================================================================
// for döngüsü ile çarpma tekrarı yaparak üs alma

/*
#include <stdio.h>

main(){
	int taban,us,i,carpim=1;
	
	printf("Taban degeri giriniz: ");scanf("%d",&taban);
	printf("Us degeri giriniz: ");scanf("%d",&us);
	
	// Tabanı üs kadar kere çarp
	for (i=1;i<=us;i++)
		carpim *= taban;    // carpim = carpim * taban
		
	printf("%d uzeri %d = %d",taban,us,carpim);
}
*/


// ============================================================================
// ÖRNEK 2: Faktöriyel Hesaplama
// ============================================================================
// n! = n × (n-1) × (n-2) × ... × 2 × 1
// Önemli: Negatif sayıların faktöriyeli tanımsızdır

/*
#include <stdio.h>

main(){
	int sayi,i,carpim=1;
	
	printf("Lutfen bir sayi giriniz: ");scanf("%d",&sayi);
	
	// Negatif sayı kontrolü
	if(sayi<0){
		printf("Negatif sayilarin faktoriyeli tanimsizdir");
	}
	else{
		// 1'den sayıya kadar tüm sayıları çarp
		for(i=1;i<=sayi;i++){
			carpim *= i;
		}
		printf("%d! = %d",sayi,carpim);
	}
}
*/


// ============================================================================
// ÖRNEK 3: Mükemmel Sayı Kontrolü
// ============================================================================
// Mükemmel sayı: Kendisi hariç pozitif bölenlerinin toplamı kendisine eşit olan sayı
// Örnek: 6 = 1 + 2 + 3,  28 = 1 + 2 + 4 + 7 + 14

#include <stdio.h>
main(){
	int sayi,i,toplam=0;
	
	printf("Lutfen bir sayi giriniz: ");scanf("%d",&sayi);
	
	// Sayının yarısına kadar bölenlerini kontrol et (yarıdan büyük bölen olmaz)
	for(i=1;i<=sayi/2;i++)
	{
		// Eğer i, sayıyı tam bölüyorsa bölendır
		if(sayi%i == 0)
		{
			toplam+=i;    // Böleni toplama ekle
		}
	}
	
	// Bölenler toplamı sayıya eşit mi kontrol et
	if(toplam == sayi){
		printf("%d bir mukemmel sayidir",sayi);
	}
	else{
		printf("%d bir mukemmel sayi degildir",sayi);
	}
}
