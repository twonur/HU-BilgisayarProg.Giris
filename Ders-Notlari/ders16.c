/******************************************************************************
 * DERS 16 - İLERİ DİZİ İŞLEMLERİ
 * 
 * Bu dosya dizilerle yapılan ileri düzey uygulamaları içerir:
 * - Aritmetik ve harmonik ortalama
 * - Vektörler arası uzaklık hesaplama (Euclidean)
 * - En büyük eleman bulma
 * - Matris toplama
 * - Matris çarpımı
 ******************************************************************************/

// ============================================================================
// ÖRNEK 1: Aritmetik ve Harmonik Ortalama
// ============================================================================
// Kullanıcının seçimine göre farklı ortalama türleri hesaplama


#include <stdio.h>
main(){
	int x,i=0,s;
	float O=0;
	
	printf("Kac sayi girilecek: ");scanf("%d",&x);
	float a[x];     // Dinamik boyutlu dizi
	
	// Sayıları diziye al
	while(i<x){
		printf("%d. Sayi -> ",i+1);scanf("%d",&a[i]);
		i++;
	}
	
	// İşlem seçimi
	printf("Aritmetik ortlama icin 1, \nHarmonik ortalama icin 2 degerini giriniz= ");
	scanf("%d",&s);
	
	if(s==1){
		// Aritmetik ortalama: (a+b+c+...)/n
		for(i=0;i<x;i++){
			O += a[i];
		} 
		printf("Girilen %d sayinin Aritmetik ortlamasi = %.2f",(x,(O/x)));
	}
	else{
		// Harmonik ortalama: n / (1/a + 1/b + 1/c + ...)
		for(i=0;i<x;i++){
			O += 1/a[i];
		}
		printf("Girilen %d sayinin Harmonik ortlamasi= %.2f",(x,(1/O)));
	}
}



// ============================================================================
// ÖRNEK 2: İki Vektör Arası Uzaklık Hesaplama (Euclidean Distance)
// ============================================================================
// Formül: √[(x1-y1)² + (x2-y2)² + ... + (xn-yn)²]

#include <stdio.h>
#include <math.h>      // sqrt() ve pow() için
main(){
	int a,i=0;
	float top;
	
	printf("Vektorlerin boyutunu giriniz: ");scanf("%d",&a);
	float x[a],y[a];
	
	// İlk vektörü al
	printf("x vektorunu giriniz...\n");
	while(i<a){
		printf("x vektorunun %d. elamani -> ",i+1);scanf("%f",&x[i]);
		i++;
	}
	
	printf("*************************************\n");
	
	// İkinci vektörü al
	printf("y vektorunu giriniz...\n");
	i=0;
	while(i<a){
		printf("y vektorunun %d. elamani -> ",i+1);scanf("%f",&y[i]);
		i++;
	}
	
	// Uzaklık hesabı: Farkların karelerinin toplamı
	for(i=0;i<a;i++) 
		top+=pow((x[i]-y[i]),2);
	
	// Sonucu göster
	printf("x=[");
	for (i=0;i<a;i++) printf("%.1f ",x[i]);
	printf("] ile y=[ ");
	for (i=0;i<a;i++) printf("%0.1f ",y[i]);
	printf("] vektorleri arasindaki uzaklik = %0.2f",sqrt(top));
}


// ============================================================================
// ÖRNEK 3: Dizide En Büyük Elemanı Bulma
// ============================================================================
// Verilen dizide maksimum değeri bulma algoritması


#include <stdio.h>
main(){
	int x[]={57,68,44,79,82,35,64,80,87,51};    // Hazır dizi
	int eB,i;
	
	eB = x[0];    // İlk elemanı en büyük kabul et
	
	// Tüm elemanları kontrol et
	for(i=0;i<10;i++){
		if(x[i]>eB)
			eB= x[i];    // Daha büyük bulundu, güncelle
	}
	
	printf("Dizinin en buyuk degeri: %d",eB);
}



// ============================================================================
// ÖRNEK 4: İki Matrisin Toplamı
// ============================================================================
// A + B = C işlemi (aynı boyutta matrisler)


#include <stdio.h>
main(){
	int i,j;
	int a[2][2],b[2][2],c[2][2];
	
	// A matrisini al
	printf("A matrisini giriniz\n");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++){
			printf("A[%d %d]= ",i+1,j+1);scanf("%d",&a[i][j]);
		}
	
	// B matrisini al
	printf("\n\nB matrisini giriniz\n");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++){
			printf("B[%d %d]= ",i+1,j+1);scanf("%d",&b[i][j]);
		}
	
	// Toplama işlemi: c[i][j] = a[i][j] + b[i][j]
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			c[i][j] = a[i][j]+b[i][j];
	
	// Sonuç matrisini yazdır
	printf("C toplam matrisi...\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf("%d  ",c[i][j]);
		printf("\n");
	}
}



// ============================================================================
// ÖDEV/ÖRNEK 5: İki Matrisin Çarpımı
// ============================================================================
// Matris çarpımı: C = A × B
// c[i][j] = Σ(a[i][k] * b[k][j])  (k=0'dan n'e)
// ÖNEMLİ: A'nın sütun sayısı = B'nin satır sayısı olmalı

#include <stdio.h>

int main() {
    int a[2][2], b[2][2], c[2][2];
    int i, j, k;

    // 1. Matrisi (A) Kullanıcıdan Al
    printf("A matrisi elemanlarini giriniz (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // 2. Matrisi (B) Kullanıcıdan Al
    printf("\nB matrisi elemanlarini giriniz (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // 3. Çarpma İşlemi (Asıl Önemli Kısım)
    // Üç iç içe döngü: satır, sütun, çarpma-toplama
    for(i = 0; i < 2; i++) {         // A'nın satırları
        for(j = 0; j < 2; j++) {     // B'nin sütunları
            c[i][j] = 0;             // ÖNEMLİ: Toplamaya başlamadan önce sıfırla
            
            // Çarp-Topla döngüsü
            for(k = 0; k < 2; k++) { 
                // c[i][j] = A'nın i. satırı × B'nin j. sütunu
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // 4. Sonucu Yazdır
    printf("\nSonuc Matrisi (C = A * B):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", c[i][j]);    // \t sütunları hizalar
        }
        printf("\n");
    }

    return 0;
}
