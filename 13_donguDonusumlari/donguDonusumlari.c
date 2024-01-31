#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int likeSayisi, i;
    double likeYuzde;

    for (i = 1; i <= 5; i++)
    {
        printf("%d. sanatcının beğenilme sayısı: ", i);
        scanf("%d", &likeSayisi);
        likeYuzde = (double)likeSayisi / 100;
        printf("%d. sanatcının beğenilme yüzdesi: %0.2lf\n",i,likeYuzde);
    }



    return 0;
}