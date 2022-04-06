#include<stdio.h>
#include<string.h>


struct nhanvien 

{
    char name[30];
    char addr[30];
    int age;
};
typedef struct nhanvien NhanVien;
//NhanVien Nhap(NhanVien &n);
//void Xuat(NhanVien &n);

NhanVien Nhap(NhanVien *n){
    printf("\nNhap Ho Ten: ");
    fgets(n->name, 20, stdin);
    //printf("\nTen: ");
    //puts(n.name);
    return *n;
}
void Xuat(NhanVien n){
    printf("\nTen: %s \n", n.name);
}

int main(){
    NhanVien n;
    Nhap(&n);
    Xuat(n);
    return 0;
}