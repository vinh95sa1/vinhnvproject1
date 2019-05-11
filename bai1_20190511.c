#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, ketqua = 1, i;
    printf("Xin moi nhap gia tri n:\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
       {
          ketqua = ketqua*i;
       }
    printf("Ket qua n! la: %d", ketqua);

    return 0;

}
