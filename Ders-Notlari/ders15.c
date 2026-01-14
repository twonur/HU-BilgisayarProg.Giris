/******************************************************************************
 * DERS 15 - DİZİLER (ARRAYS)
 * 
 * Bu dosya tek ve çok boyutlu dizi kullanımını gösterir:
 * - Dizi tanımlama ve kullanımı
 * - Dizi elemanlarını okuma ve yazdırma
 * - Toplam ve kareler toplamı hesaplama
 * - Çok boyutlu diziler (2D matrisler)
 ******************************************************************************/

/* ============================================================================
 * DİZİ (ARRAY) NEDİR?
 * ============================================================================
 * 
 * Dizi: Aynı türden birden fazla değeri tek bir değişken adı altında saklar
 * 
 * TANIMLAMA:
 * tip diziAdi[eleman_sayisi];
 * 
 * Örnek:
 * int notlar[67];        // 67 elemanlı tam sayı dizisi
 * float fiyatlar[10];    // 10 elemanlı ondalıklı dizi
 * 
 * DİZİ İNDEKSİ:
 * - İlk eleman indeksi: 0
 * - Son eleman indeksi: (boyut - 1)
 * - notlar[0]: İlk eleman
 * - notlar[66]: 67. eleman (son)
 * 
 * OKUMA (scanf):
 * scanf("%d", &notlar[0]);    // İlk elemanı oku
 * 
 * YAZMA (printf):
 * printf("3. eleman = %d", notlar[2]);    // 3. elemanı yazdır
 * 
 * İLK DEĞER ATAMA:
 * float dizi[] = {2.3, 5.3, 1, 5};    // Boyut otomatik belirlenir (4 eleman)
 */


// ============================================================================
// ÖRNEK 1: while Döngüsü ile Dizi Kullanımı
// ============================================================================
// 3 elemanlı dizi: Okuma ve yazdırma


#include <stdio.h>
main(){
	int dizi[3], i=0;

	// Diziyi doldur
	while(i<3){
		printf("bir sayi girin: ");scanf("%d",&dizi[i]);
		i++;
	}
	
	// Diziyi yazdır
	i=0;
	while(i<3){
		printf("b[%d]=%d\n",i,dizi[i]);    // İndeks ve değer
		i++;
	}
}



// ============================================================================
// ÖRNEK 2: Dizi Elemanlarını Yazdırma (Formatlanmış)
// ============================================================================
// {1,2,3,4} formatında yazdırma

#include <stdio.h>
main(){
	int a[4],i;
	
	// Dizi elemanlarını kullanıcıdan al
	for(i=0;i<4;i++){
		printf("%d. elamani girin: ",(i+1));scanf("%d",&a[i]);
	}
	
	// Diziyi {1,2,3,4} formatında yazdır
	printf("\nOlusturulan dizi\n");
	printf("{");
	
	// İlk 3 elemanı virgülle yazdır
	for(i=0;i<3;i++){
		printf("%d,",a[i]);
	}
	
	// Son elemanı virgülsüz yazdır
	printf("%d",a[3]);
	printf("}");
}


// ============================================================================
// ÖRNEK 3: Dizi ile Toplam ve Kareler Toplamı
// ============================================================================
// while(1) sonsuz döngü ile menü sistemi


#include <stdio.h>
#include <math.h>
main(){
	int a[5],i=0,s,S=0;
	
	// Diziyi doldur
	while(i<5){
		printf("%d. elaman: ",(i+1));scanf("%d",&a[i]);
		i++;
	}
	
	// Sonsuz döngü ile işlem seçimi
	while(1){
		printf("\nYapilacak islemi giriniz:\n");
		printf("Toplam:1 - Kareler toplami:2 -> ");scanf("%d",&s);
		
		if(s==1){
			// Normal toplam
			for(i=0;i<5;i++)
				S+=a[i];
				
			printf("\nGirilen sayilarin toplami= %d",S);
			break;    // Döngüden çık
		}
		else if(s==2){
			// Kareler toplamı: a² + b² + c² + ...
			for(i=0;i<5;i++)
				S+=pow(a[i],2);
			printf("\nGirilen sayilarin karesi= %d",S);
			break;
		}
		else{
			printf("\nYanlis girdi yaptiniz");
			break;
		}
	}
}



/* ============================================================================
 * ÇOK BOYUTLU DİZİLER (2D DİZİLER - MATRİSLER)
 * ============================================================================
 * 
 * TANIMLAMA:
 * tip diziAdi[satir_sayisi][sutun_sayisi];
 * 
 * Örnek:
 * int matris[3][3];    // 3x3 matris (9 eleman)
 * 
 * OKUMA:
 * scanf("%d", &matris[1][2]);    // 2. satır, 3. sütun
 * 
 * YAZMA:
 * printf("%d", matris[0][0]);    // İlk eleman
 * 
 * İLK DEĞER ATAMA:
 * int a[2][3] = {{1,2,3}, {4,5,6}};
 * veya
 * int a[2][3] = {1,2,3,4,5,6};
 */


// ÖRNEK: 3x3 Matris Yazdırma (yorum satırı - tamamlanmamış)

#include <stdio.h>
main(){
	int i,j;
	int a[3][3]={3,4,5,6,4,3,6,3,5};
	
	// İç içe döngü: Matris elemanlarını yazdır
	for(i=0;i<3;i++){           // Satırlar
		for(j=0;j<3;j++){       // Sütunlar
			printf("%d ",a[i][j]);
		}
		printf("\n");           // Satır sonu
	}
}

