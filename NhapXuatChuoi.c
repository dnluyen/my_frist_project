#include<stdio.h>

void Nhap(char name[]){

    printf("\nNhap Ho Ten: ");
    fgets(name, 20, stdin);
}

void Xuat(char name1[]){
    printf("\nTen: ");
    puts(name1);
}
int main(){

    char name[20];
    Nhap(name);
    Xuat(name);
}