/******************************************************************************
 * DERS 6 - KOŞULLU İFADELER (if-else YAPISI)
 * 
 * Bu dosya koşullu ifadelerin kullanımını gösterir:
 * - if, else if, else yapıları
 * - Mantıksal operatörler (&&, ||, ==, !=, <, >)
 * - Karşılaştırma işlemleri
 * - Basit hesap makinesi uygulaması
 ******************************************************************************/

// ============================================================================
// ÖRNEK 0: String (Metin) Kullanımı - Şehirler Arası Uzaklık
// ============================================================================
// char dizisi (array) ile metin saklama


#include <stdio.h>

main(){
	char x[15], y[15];    // 15 karakterlik iki string (metin dizisi)
	int z;
	
	printf("1. Sehrin adini giriniz -> "); scanf("%s", &x);
	printf("2. Sehrin adini giriniz -> "); scanf("%s", &y);
	
	printf("Iki sehrin arasindaki uzakligi giriniz: ");scanf("%d", &z);
	
	// %s: string (metin) yazdırmak için format belirleyici
	printf("\n%s ve %s arasindaki uzaklik %d kilometredir.", x,y,z);
}



/* ============================================================================
 * MANTIKSAL İFADELER VE OPERATÖRLER
 * ============================================================================
 * 
 * KARŞILAŞTIRMA OPERATÖRLERİ:
 * ==   : Eşit mi?               (x == y)
 * !=   : Eşit değil mi?         (x != y)
 * >    : Büyük mü?              (x > y)
 * <    : Küçük mü?              (x < y)
 * >=   : Büyük veya eşit mi?    (x >= y)
 * <=   : Küçük veya eşit mi?    (x <= y)
 * 
 * MANTIKSAL OPERATÖRLER:
 * &&   : VE (AND)  - Her iki koşul da doğru olmalı
 * ||   : VEYA (OR) - Koşullardan biri doğru olmalı
 * !    : DEĞİL (NOT) - Koşulun tersini alır
 * 
 * KOŞUL YAPILARI:
 * 
 * 1) Basit if:
 *    if(mantiksal ifade)
 *       yapilacak islem;
 * 
 * 2) if-else:
 *    if(mantiksal ifade){
 *       doğruysa yapılacak işlemler;
 *    }
 *    else{
 *       yanlışsa yapılacak işlemler;
 *    }
 * 
 * 3) if - else if - else:
 *    if(kosul1){
 *       ...
 *    }
 *    else if(kosul2){
 *       ...
 *    }
 *    else{
 *       ...
 *    }
 * 
 * NOT: Tek satırlık işlemler için {} gerekmez
 */


// ============================================================================
// ÖRNEK 1: Basit if Kullanımı - Sayının 50 ile Karşılaştırması
// ============================================================================
// Üç ayrı if ile üç farklı koşul kontrol ediliyor


#include <stdio.h>
main(){
	int x;
	
	printf("1 ile 100 arasinda bir tam sayi giriniz -> ");scanf("%d", &x);
	
	// Üç ayrı if bloğu - her biri bağımsız kontrol edilir
	if(x<50)
		printf("Girilen sayi 50 den kucuk");
	if(x>50)
		printf("Girilen sayi 50 den buyuk");
	if(x==50)
		printf("Girilen sayi 50 ye esit");
		
	// NOT: Tek satır işlem olduğu için {} kullanmaya gerek yok
}



// ============================================================================
// ÖRNEK 2: if-else ile Başarı Durumu Kontrolü
// ============================================================================
// Öğrenci notunu hesaplayıp başarılı/başarısız kontrolü


#include <stdio.h>
main(){
	int v1, v2, final;
	float ort;
	
	// Vize ve final notlarını al
	printf("Sirasiyla v1 v2 ve final notunu giriniz: ");
	scanf("%d %d %d", &v1, &v2, &final);
	
	// Not ortalaması: %25 vize1 + %25 vize2 + %50 final
	ort = v1*0.25 + v2*0.25 + final*0.5;
	
	printf("Ogrencinin notu = %.2f\n", ort);
	
	// Başarı kontrolü: 65 ve üzeri başarılı
	if(ort>65){
		printf("Basarili");
	}
	else{
		printf("Basarisiz");
	}
}



// ============================================================================
// ÖRNEK 3: İki Sayının Karşılaştırılması (if-else if-else)
// ============================================================================
// İki yöntem gösterilmiş: 
// 1) Üç ayrı if (verimsiz)
// 2) if-else if-else (önerilen)


#include <stdio.h>
main(){
	int x,y;
	printf("1. sayiyi giriniz: ");scanf("%d", &x);
	printf("2. sayiyi giriniz: ");scanf("%d", &y);
	printf("\n");
	
	/* YÖNTEM 1: Üç ayrı if (verimsiz - her koşul kontrol edilir)
	// -------------------------
	if(x>y){
		printf("%d > %d", x,y);
	}
	if(x<y){
		printf("%d < %d", x,y);
	}
	if(x==y){
		printf("%d = %d", x,y);
	}
	// -------------------------
	*/
	
	// YÖNTEM 2: if-else if-else (verimli - bir koşul tutunca diğerleri kontrol edilmez)
	if(x==y)
		printf("%d = %d", x,y);
	else if (x>y)
			printf("%d > %d", x,y);
	else
		printf("%d < %d", x,y);
}



// ============================================================================
// ÖRNEK 4: Basit Hesap Makinesi (char Kullanımı ve Çoklu Koşul)
// ============================================================================
// Kullanıcıdan matematiksel işlem alıp sonuç hesaplama
// char türünde operatör (+, -, *, /) kullanımı

#include <stdio.h>
main(){
	float a, b, sonuc;
	char x;      // İşlem operatörü (+, -, *, /)
	
	// Kullanıcıdan "a + b" formatında işlem al
	printf("Isleminizi giriniz <a + b seklinde> : ");
	scanf("%f %c %f", &a, &x, &b);    // Örnek: 5 + 3
	
	// Operatöre göre işlem seçimi
	if(x == '+')               // Toplama
		sonuc = a+b;
	else if (x == '-')         // Çıkarma
		sonuc = a-b;
	else if (x == '*')         // Çarpma
		sonuc = a*b;
	else if (x == '/')         // Bölme
		sonuc = a/b;
	else{
		printf("Gecersiz bir islem girdiniz...");
		return 0;              // Programı sonlandır
	}
	
	// Sonucu göster
	printf("%.2f %c %.2f = %.2f", a,x,b,sonuc);
}
