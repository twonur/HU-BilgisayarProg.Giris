#include <stdio.h>

int main() {
    int n;
    float i, top = 1.0;

    printf("n= ");scanf("%d", &n);

    printf("1 "); // Ilk 1 sayisini ekrana basiyoruz

    // Dongu 2'den baslar cunku toplamı 1 ile baslattik
    for(i=2; i<=n; i++) {
        top += i / (i+1); // Serinin formulu: n / (n+1)
        printf("+ %.f/%.f ", i, i+1); // Ekrana yazdirma formati
    }
    // Sonucun gosterimi (Virgulden sonra 3 basamak)
    printf("= %.3f\n", top);
}