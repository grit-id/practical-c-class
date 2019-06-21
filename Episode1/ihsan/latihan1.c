#include <stdio.h>

int main(){
    int angka = 0;

    printf("Masukan angka \n");

    scanf("%d",&angka);

    if (angka > 10)
    { printf("angka lebih besar dari 10\n"); }

    else
    {
        printf("angka lebih kecil dari 10\n");
    }

    return 0;  
    
}