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
    char karakterDizisi[6] = "Celal";         // kaç karakterlik bir kelime olacaksa +1 oolacak þekilde yazýlýr, kaç tane yer ayýrýrsan o kadar byte yer ayýrýr
    float kesirliSayi = 9.2;                  // 4 byte

    printf("%s karakterleri Ram'de %d byte yer kaplar.\n", karakterDizisi, sizeof(char));
    printf("%d sayýsý Ram'de %d byte yer kaplar.\n", tamSayi, sizeof(int));
    printf("%.2f sayýsý Ram'de %d byte yer kaplar.\n", buyukYerKaplayanKesirliSayi, sizeof(double)); // .2 yazdýðýmýzda virgülden sonra gelecek karakter sayýsýný belli eder.
    printf("%c karakteri sayýsý Ram'de %d byte yer kaplar.\n", karakter, sizeof(char));
    printf("%.1f sayýsý Ram'de %d byte yer kaplar.\n", kesirliSayi, sizeof(float)); // .1 yazdýðýmýzda virgülden sonra gelecek karakter sayýsýný belli eder.

    return 0;
}
