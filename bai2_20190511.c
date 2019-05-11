#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n = 0;
    double tongS = 1, i;
    printf("Xin moi nhap gia tri n:\n");
    scanf("%d", &n);
    for(i = 2; i <= n; i++)
       {
          tongS = tongS + (i-1)/i;
       }
         printf("Ket qua tong la: %f", tongS);

    return 0;
}
