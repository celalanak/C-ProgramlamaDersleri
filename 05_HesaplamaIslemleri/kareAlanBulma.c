#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");

    int kareninBirKenari;

    printf("Karenin bir kenarini cm cinsinden giriniz: ");
    scanf("%d",&kareninBirKenari);

    printf("Karenin Alaný: %d cm'dir",kareninBirKenari * kareninBirKenari);
}