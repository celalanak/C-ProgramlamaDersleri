#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    /*
    char isim [6] = {"Celal"};

    printf("%s",isim);
    */

    // char takimIsmi []= {'B','a','r','ç','a','\0'}; => \0 olmak zorunda

    char isim[6] = {}; // +1 karakter olması gerekli

    for (i = 0; i < 5; i++)
    {
        printf("Harfleri giriniz: \n");
        scanf("%s", &isim[i]); // Mutlaka %c başında 1 tane boşluk olması gerekmekte
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d. karakter: %c\n", i + 1, isim[i]);
    }

    printf("Girdiğiniz karakterle ile oluşan isim: %s\n", isim);

    return 0;
}