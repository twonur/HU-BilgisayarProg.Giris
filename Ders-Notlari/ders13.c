/******************************************************************************
 * DERS 13 - MATEMATİKSEL DİZİLER
 * 
 * Bu dosya matematiksel dizi uygulamalarını içerir:
 * - Triangular (Üçgensel) dizi
 * - Harmonik dizi
 * - Aritmetik dizi ve toplamı
 ******************************************************************************/

// ============================================================================
// ÖRNEK 1: Triangular (Üçgensel) Dizi
// ============================================================================
// Triangular sayılar: Tn = n(n+1)/2
// İlk terimler: 1, 3, 6, 10, 15, 21, 28...

/*
#include <stdio.h>
main(){
	int i,n,Tn;
	
	printf("Tringular dizisi kacinci terimine kadar hesaplanacak: ");scanf("%d",&n);
	
	// n tane triangular sayı hesapla
	for(i=1;i<=n;i++){
		Tn = i*(i+1)/2;    // Triangular sayı formülü
		printf("%d ", Tn);
	}
}
*/


// ============================================================================
// ÖRNEK 2: Harmonik Dizi ve Toplamı
// ============================================================================
// Harmonik dizi: 1/1, 1/2, 1/3, 1/4, 1/5...
// Hn = 1/n,  Toplam = H1 + H2 + H3 + ... + Hn

/*
#include <stdio.h>
main(){
	int n;
	float i,sum,Hn;
	
	printf("Harmonik dizisinin kacinci terimine kadar hesaplanacak: ");scanf("%d",&n);
	
	sum = 0;    // Toplamı sıfırla
	
	// Her terimi hesapla ve yazdır
	for(i=1;i<=n;i++){
		Hn = 1/i;          // Harmonik terim: 1/n
		printf("%.3f ",Hn);
		sum += Hn;         // Toplama ekle
	}
	
	printf("\n\nHarmonik dizi degeri: %.6f",sum);
}
*/


// ============================================================================
// ÖRNEK 3: Aritmetik Dizi ve Toplamı
// ============================================================================
// Aritmetik dizi: Her terim bir öncekinden sabit bir fark (d) fazladır
// Formül: an = B + (n-1)×d
// B: İlk terim, d: Ortak fark, n: Terim sayısı

#include <stdio.h>
main(){
	int an,B,d,n,i,sum=0;
	
	printf("Aritmetik dizisinin kacinci terimine kadar hesaplanacak: ");scanf("%d",&n);
	printf("Baslangic terimini girin: ");scanf("%d",&B);
	printf("Artis miktarini girin: ");scanf("%d",&d);
	
	printf("\nAritmatik dizi elemanlari\n");
	
	// Her terimi hesapla
	for(i=1;i<=n;i++){
		an = B + (i-1)*d;     // n'inci terim formülü
		printf("%d ", an);
		sum += an;            // Toplama ekle
	}
	
	printf("\n\nDizi toplami: %d",sum);
}

