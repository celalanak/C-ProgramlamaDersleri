#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;

    for (i = 0; i < 10; i++) // i değer ataması for döngüsünde olur, i küçük 10 olduğu sürece devam et, arttır.
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}