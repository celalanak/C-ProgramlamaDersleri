#include <stdio.h>
#include <stdlib.h>

#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Turkish");

    int tamSayi = 6;                          // 4 byte
    double buyukYerKaplayanKesirliSayi = 7.2; // 8 byte
    short int uzunluk;                        // 2 byte
    long int uzunluk2;                        // 4 byte
    char karakter = 'k';                      // 1 byte
    char karakterDizisi[6] = "Celal";         // ka� karakterlik bir kelime olacaksa +1 oolacak �ekilde yaz�l�r, ka� tane yer ay�r�rsan o kadar byte yer ay�r�r
    float kesirliSayi = 9.2;                  // 4 byte

    printf("%s karakterleri Ram'de %d byte yer kaplar.\n", karakterDizisi, sizeof(char));
    printf("%d say�s� Ram'de %d byte yer kaplar.\n", tamSayi, sizeof(int));
    printf("%.2f say�s� Ram'de %d byte yer kaplar.\n", buyukYerKaplayanKesirliSayi, sizeof(double)); // .2 yazd���m�zda virg�lden sonra gelecek karakter say�s�n� belli eder.
    printf("%c karakteri say�s� Ram'de %d byte yer kaplar.\n", karakter, sizeof(char));
    printf("%.1f say�s� Ram'de %d byte yer kaplar.\n", kesirliSayi, sizeof(float)); // .1 yazd���m�zda virg�lden sonra gelecek karakter say�s�n� belli eder.

    return 0;
}
