#include<stdio.h>
#include<stdlib.h>


int main(){

    
    int i = 0;

    while (i<10)
    {
        printf("While %d\n", i);
        i++;
    }

    printf("***************\n");
    int a = 0;

    // do-while döngüsü, döngüye bir defa girer sonrasında şartı sorgular.

    do
    {
        printf("Do-While %d\n",a);
        a++;
    } while (a<10);
    
    



    return 0;
}