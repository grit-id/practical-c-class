#include <stdio.h>
int main(){
    int angka=0;
    printf("Masukan angka \n");
    scanf("%d", &angka);
    if (angka > 10)
        { printf("Angka lebih besar dari 10\n");}
    else 
        { printf("Angka kurang dari 10\n");}
    return 0;
}