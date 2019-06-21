#include <stdio.h>
int main(){
    int angka = 0;
    printf("Masukkan angka \n");
    scanf("%d", &angka);
    if (angka > 10)
        {
            printf ("Angka yang anda masukkan lebih besar dari 10\n");
        }
    else
        {
            printf ("Angka yang anda masukkan lebih kecil dari 10\n");
        }
    return 0;
}