#include <stdio.h>

int a[100], b[100] = {0}, i, j, n, min;

void nhap(){
    printf("Nhap so phan tu cua mang:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
        }
    printf("\nMang vua nhap: \n");
    for(i = 0; i< n; i++)
        printf("%d ", a[i]);
    }
void kiemTra(){
    i = 0;
    printf("\nMang da sap xep: \n");
    while(1){
        min = a[i];
        for(j = i + 1; j < n; j++)
            if(a[j] < min && b[j] == 0)
                min = a[j];
        for(j = i; j < n; j++)
        if(a[j] == min){
            b[j] = 1;
            printf("%3d", a[j]);
            }
        while(i < n && b[i] == 1)
            i++;
        if(i == n)
            break;
        }

    }

int main(){
    nhap();
    kiemTra();
    }
