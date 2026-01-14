/******************************************************************************
 * DERS 8 - İÇ İÇE IF YAPILARI VE İLERİ UYGULAMALAR
 * 
 * Bu dosya iç içe if yapıları ve daha karmaşık uygulamaları içerir:
 * - Standart sapma hesaplama (sqrt fonksiyonu)
 * - Hız hesaplama (yol/zaman)
 * - Polinom fonksiyonu hesaplama
 * - Artık yıl kontrolü (iç içe if yapısı)
 ******************************************************************************/

// ============================================================================
// ÖRNEK 1: Dört Sayının Standart Sapmasını Hesaplama
// ============================================================================
// Standart sapma = sqrt(varyans)
// Varyans = [(x1-ort)² + (x2-ort)² + ... ] / n


#include <stdio.h>
#include <math.h>      // pow() ve sqrt() için

main(){
	float x,y,z,v,ort,var,standarts;
	
	printf("Lutfen 4 sayi giriniz: \n");
	scanf("%f %f %f %f", &x, &y, &z, &v);
	
	// Ortalama hesapla
	ort = (x+y+z+v)/4;
	
	// Varyans: Her sayının ortalamadan farkının karelerinin ortalaması
	var = (pow(x-ort,2) + pow(y-ort,2) + pow(z-ort,2) + pow(v-ort,2))/4;
	
	// Standart sapma: Varyansın karekökü
	standarts = sqrt(var);
	
	printf("Ortalama: %.3f", ort);
	printf("\nStandart sapma: %.3f", standarts);
}



// ============================================================================
// ÖRNEK 2: Hız Hesaplama (Yol = Hız × Zaman)
// ============================================================================
// Verilen mesafeyi ve süreyi kullanarak gerekli hızı bulma
// Formül: Hız = Yol / Zaman


#include <stdio.h>
main(){
	float yol,zaman,hiz;
	
	printf("Gideceginiz mesafe (km): ");scanf("%f", &yol);
	printf("Gitmek istediginiz sure (saat): ");scanf("%f", &zaman);
	
	hiz = yol/zaman;    // Hız = Yol / Zaman
	
	printf("%.2f, kilometreyi %.2f saate gidebilmeniz icin hiziniz %.2f km/sa olmalidir", yol,zaman,hiz);
}



// ============================================================================
// ÖRNEK 3: Polinom Fonksiyonu Hesaplama
// ============================================================================
// F(x) = ax³ - bx² + cx - d fonksiyonunun belirli bir x için değerini hesaplama


#include <stdio.h>
#include <math.h>
main(){
	float a,b,c,d,x,fonk;
	
	// Polinomun katsayılarını al
	printf("F(x) = ax^3 - bx^2 + cx - d seklindeki denklem icin\n");
	printf("	a degeri: ");scanf("%f", &a); 
	printf("	b degeri: ");scanf("%f", &b);
	printf("	c degeri: ");scanf("%f", &c);
	printf("	d degeri: ");scanf("%f", &d);
	
	// Oluşturulan denklemi göster
	printf("\nOlusturulan 3. dereceden denklemin fonksiyonu: F(x) = %.0fx^3 - %.0fx^2 + %.0fx - %.0f ", a,b,c,d);
	
	// Hesaplanacak x değerini al
	printf("\nHnagi x degeri icin fonksiyon ciktisi hesaplansin\n   x = ");scanf("%f", &x);
	
	// F(x) değerini hesapla: ax³ - bx² + cx - d
	fonk = a*pow(x,3) - b*pow(x,2) + c*x - d;
	
	printf("Sonuc= %.2f", fonk); 
}



// ============================================================================
// ÖRNEK 4: Artık Yıl Kontrolü (İç İçe if Yapısı)
// ============================================================================
// Artık yıl kuralları:
// 1. 4'e tam bölünmeyen yıllar artık yıl DEĞİLDİR
// 2. 4'e tam bölünen yıllar artık yıldır ANCAK
// 3. 100'e tam bölünen yıllar artık yıl değildir ANCAK
// 4. 400'e tam bölünen yıllar artık yıldır
// Örnek: 2000 artık yıl, 1900 değil, 2024 artık yıl

#include <stdio.h>
main(){
	int yil;
	
	printf("Bir yil giirniz: ");scanf("%d", &yil);
	
	// İç içe if yapısı ile artık yıl kontrolü
	if (yil%4 == 0)                    // 4'e bölünüyor mu?
	{
		if(yil%100 == 0)               // 100'e de bölünüyor mu?
		{
			if(yil%400 == 0)           // 400'e de bölünüyor mu?
				printf("BU YIL ARTIK YILDIR");     // Evet -> Artık yıl
			else
				printf("Bu YIL ARTIK YIL DEGILDIR");  // Hayır -> Artık yıl değil
		}
		else
			printf("BU YIL ARTIK YILDIR");    // 4'e bölünüyor ama 100'e değil -> Artık yıl
	}
	else
		printf("BU YIL ARTIK YIL DEGILDIR");  // 4'e bölünmüyor -> Artık yıl değil
}
