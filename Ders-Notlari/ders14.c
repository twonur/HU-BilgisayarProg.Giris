/******************************************************************************
 * DERS 14 - ŞEKİL ÇİZİMİ VE FİBONACCİ SERİSİ
 * 
 * Bu dosya iç içe döngü kullanarak desen oluşturma ve Fibonacci serisini içerir:
 * - Azalan üçgen çizimi
 * - Boş kare çizimi
 * - Fibonacci serisi
 * - İşaretli seri toplamı
 ******************************************************************************/

// ============================================================================
// ÖRNEK 1: Azalan Üçgen Çizimi
// ============================================================================
// İç içe döngü ile her satır bir öncekinden daha az karakter içeren üçgen


#include <stdio.h>
main(){
	int n,satir,sutun;
	char karakter;
	
	printf("karakter: ");scanf("%s", &karakter);
	printf("n= ");scanf("%d",&n);
	
	// Her satır için
	for(satir=1;satir<=n; satir++){
		// Sutun sayısı her satırda azalıyor
		for(sutun=satir;sutun<=n;sutun++){
			printf("%c",karakter);
		}
		printf("\n");    // Satır sonu
	}
}



// ============================================================================
// ÖRNEK 2: Boş Kare Çizimi
// ============================================================================
// Sadece kenarları dolu, içi boş kare


#include <stdio.h>
main()
{
	int n,satir,sutun;
	char karakter;
	
	printf("n= ");scanf("%d",&n);
	karakter='X';
	
	for(satir=1;satir<=n; satir++){
		for(sutun=1;sutun<=n;sutun++){
			// İlk/son satır VEYA ilk/son sütunda karakter yaz
			if(satir==1||satir==n)
				printf("%c ",karakter);
			else if(sutun==1||sutun==n)
				printf("%c ",karakter);
			else
				printf("  ");    // İç kısımda boşluk
		}
		printf("\n");
	}
}



/* ============================================================================
 * FİBONACCİ SERİSİ
 * ============================================================================
 * 
 * Fibonacci: Her sayı kendinden önceki iki sayının toplamıdır
 * Seri: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55...
 * 
 * Formül: F(n) = F(n-1) + F(n-2)
 * F(0) = 0, F(1) = 1
 */


// ============================================================================
// ÖRNEK 3: Fibonacci Serisi
// ============================================================================
// İlk n terimini ekrana yazdırma

#include <stdio.h>
main(){
	int n,ilk=0,ikinci=1,ucuncu,i;
	
	printf("Kacinci terime kadar istersin: ");scanf("%d",&n);

	// n tane Fibonacci terimi yazdır
	for(i=1;i<=n;i++){
		printf("%d ",ilk);          // Mevcut terimi yazdır
		
		ucuncu = ilk+ikinci;        // Sonraki terimi hesapla
		ilk = ikinci;               // Değerleri kaydır
		ikinci = ucuncu;
	}
}



// ============================================================================
// ÖRNEK 4: İşaretli Seri Toplamı
// ============================================================================
// 1/3 + 3/5 - 5/7 + 7/9 - ... formatında işaret değiştiren seri
// Çift indekslerde (+), tek indekslerde (-) işareti

#include <stdio.h>
main(){
	int n,i;
	float x=1,y=3,s=0;
	
	printf("Kacinci terime kadar seri toplami hesaplansin: ");scanf("%d",&n);
	
	s = x/y;    // İlk terim: 1/3
	printf("s = %.0f/%.0f ", x,y);
	
	for(i=2;i<=n;i++){
		if(i%2==0){
			// Çift sırada: toplama
			s += (x+2)/(y+2);
			printf("+ %.0f/%.0f ",x+2,y+2);
		}
		else{
			// Tek sırada: çıkarma
			s -= (x+2)/(y+2);
			printf("- %.0f/%.0f ",x+2,y+2);
		}
		
		x+=2;
		y+=2;
	}
	printf("\nSerinin sonucu = %.2f", s);
}
