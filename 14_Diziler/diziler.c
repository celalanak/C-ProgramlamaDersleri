#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    int sayilar[] = {
        5, 7, 9, 10, 15, 99, 1024};

    printf("%d\n", sayilar[0]);
    printf("%d\n", sayilar[3]);
    printf("%d\n", sayilar[5]);
    */

    /*
     int sayilar[] = {
         5, 7, 9, 10, 15, 99, 1024};
     int sira = 0;
     for (int i = 0; i < 7; i++)
     {
         // sira++; 1'den başlıyor
         printf("%d. indeksteki sayi = %d\n", sira, sayilar[i]);
         sira++; // 0'dan başlıyor
     }
    */

    /*
    float sayilar[] = {1.5, 2.3, 5.5, 7.9};
    int sira = 0;
    for (int i = 0; i < 4; i++)
    {
        printf("%d. indeksteki sayi = %.1f\n", sira, sayilar[i]);
        sira++;
    }
    */
   
    float sayilar[7] = {}; //[Kaç Elaman Olacaksa yazman gerekli]
    int i;

    for (i = 0; i < 7; i++)
    {
        printf("%d. elemanı giriniz: \n", i + 1);
        scanf("%f", &sayilar[i]);
    }

    for (i = 0; i < 7; i++)
    {
        printf("Girdiğiniz sayilar %.1f\n", sayilar[i]);
    }
    
    
    
    return 0;
}