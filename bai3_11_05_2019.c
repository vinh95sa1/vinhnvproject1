#include <stdio.h>

int a[5], b[5] = {0}, i, j, min;

void nhap(){
    for (i = 0; i < 5; i++){
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
        }
    printf("\nMang vua nhap: \n");
    for(i = 0; i< 5; i++)
        printf("%d ", a[i]);
    }
void kiemTra(){
    i = 0;
    printf("\nMang da sap xep: \n");
    while(1){
        min = a[i];
        for(j = i + 1; j < 5; j++)
            if(a[j] < min && b[j] == 0)
                min = a[j];
        for(j = i; j < 5; j++)
        if(a[j] == min){
            b[j] = 1;
            printf("%5d", a[j]);
            }
        while(i < 5 && b[i] == 1)
            i++;
        if(i == 5)
            break;
        }

    }

int main(){
    nhap();
    kiemTra();
    }
