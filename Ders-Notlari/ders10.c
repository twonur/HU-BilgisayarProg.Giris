/******************************************************************************
 * DERS 10 - FOR DÖNGÜSÜ UYGULAMALARI
 * 
 * Bu dosya for döngüsü ile çeşitli uygulamaları içerir:
 * - Tek ve çift sayıların toplamı ve ortalaması
 * - 3 ve 5'e tam bölünebilen sayılar
 * - En küçük sayıyı bulma
 * - Asal sayı kontrolü
 ******************************************************************************/

// ============================================================================
// ÖRNEK 1: 1-10 Arası Tek ve Çift Sayıların Toplamı
// ============================================================================
// Mod operatörü (%) ile tek/çift kontrolü


#include <stdio.h>
main(){
	int i, tek_toplam=0, cift_toplam=0;
	
	// 1'den 10'a kadar sayıları kontrol et
	for(i=1;i<=10;i++){
		if(i%2==1)                  // Mod 2'ye bölümünden kalan 1 ise tek sayı
			tek_toplam += i;
		else                        // Kalan 0 ise çift sayı
			cift_toplam +=i;
	}
	
	printf("Tek sayilarin toplami = %d\n", tek_toplam);
	printf("Cift sayilarin toplami = %d\n", cift_toplam);
}



// ============================================================================
// ÖRNEK 2: Tek ve Çift Sayıların Ortalamasını Hesaplama
// ============================================================================
// Toplam ve ortalama hesabı birlikte


#include <stdio.h>
main(){
	int i, tek_toplam=0, cift_toplam=0;
	float x=0,y=0;     // Sayaçlar (kaç tane tek, kaç tane çift)
	
	for(i=1;i<=10;i++){
		if(i%2==1){
			tek_toplam += i;
			x++;         // Tek sayı sayacını artır
		}
		else{
			cift_toplam +=i;
			y++;         // Çift sayı sayacını artır
		}
	}
	
	// Ortalama = Toplam / Adet
	printf("Tek sayilarin toplami = %d ve ortalamasi = %.2f\n", tek_toplam, tek_toplam/x);
	printf("Cift sayilarin toplami = %d ve ortalamasi = %.2f", cift_toplam, cift_toplam/y);
}



// ============================================================================
// ÖRNEK 3: 3 ve 5'e Tam Bölünebilen Sayıları Bulma
// ============================================================================
// && operatörü ile çoklu koşul kontrolü


#include<stdio.h>
main(){
	int sayi,i;
	
	printf("Bir sayi giriniz= ");scanf("%d", &sayi);
	
	// 1'den girilen sayıya kadar kontrol et
	for(i=1; i<=sayi; i++){
		// && (VE): Her iki koşul da doğru olmalı
		if(i%3==0 && i%5==0){
			printf("Sayi kosulu sagliyor = %d \n",i);
		}
	}
}



// ============================================================================
// ÖRNEK 4: 3 ve 5'e Bölünebilen Sayılar (Hata Kontrolü ile)
// ============================================================================
// Girdi doğrulama eklendi


#include<stdio.h>
main(){
	int sayi,i;
	
	printf("1 ile 500 arasi bir sayi giriniz ");scanf("%d", &sayi);
	
	// Girdi kontrolü: Sayı 1-500 arasında mı?
	if(sayi>=1 && sayi<=500)
		for(i=1; i<=sayi; i++){
			if(i%3==0 && i%5==0){
				printf("Sayi kosulu sagliyor = %d \n",i);
			}
		}
	else
		printf("hatali veri giriniz");
}



// ============================================================================
// ÖRNEK 5: Girilen Sayılar Arasından En Küçüğü Bulma
// ============================================================================
// Döngü içinde minimum değeri güncelleme


#include<stdio.h>
main(){
	int n,i,enk,sayi;
	
	printf("Kac tane sayi yazdirmak istiyorsunuz= ");scanf("%d",&n);
	
	// İlk sayıyı en küçük olarak kabul et
	printf("sayilari giriniz: ");scanf("%d",&enk);
	
	// Kalan sayıları kontrol et
	for(i=2;i<=n;i++){
		printf("sayilari giriniz: ");scanf("%d",&sayi);
		if(sayi<=enk){
			enk = sayi;    // Daha küçük sayı bulundu, güncelle
		}
	}
	
	printf("en kucu sayi %d",enk);
}



// ============================================================================
// ÖRNEK 6: Asal Sayı Kontrolü
// ============================================================================
// Bir sayının asal olup olmadığını kontrol etme
// Asal sayı: 1 ve kendisinden başka böleni olmayan 2'den büyük sayı

#include<stdio.h>
int main() {
	int i, sayi;
	
	printf("2'den buyuk bir sayi gir ");scanf("%d", &sayi);
	
	// 2'den (sayi-1)'e kadar bölen var mı kontrol et
	for(i=2 ; i<sayi ; i++) {
		// Eğer sayı i'ye tam bölünüyorsa asal değildir
		if(sayi%i == 0) {
			printf("asal degil");
			break;     // Döngüyü bitir (zaten bölen bulduk)
		}
	}
	
	// Eğer döngü tamamlandıysa (break ile çıkılmadıysa) asal demektir
	if(i == sayi)
		printf("asal");
}

