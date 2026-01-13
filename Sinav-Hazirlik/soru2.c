#include <stdio.h>

int main() {
    int i, j, z;
    int a[] = {8, 2, 9, 6}; // Dizi tanimlama

    // Dis dongu: Dizinin her elemanini tek tek gezer
    for(i = 0; i < 4; i++) {
        z = 0; // Sayac her yeni eleman icin sifirlanir

        // Ic dongu: Secili elemanin sagindaki elemanlara bakar
        for(j = i + 1; j < 4; j++)
            if(a[j] < a[i])// Eger sagdaki eleman, soldakinden kucukse sayaci arttir
                z += 1;

        printf("%d ", z); // Bulunan sayiyi ekrana yaz
    }
}