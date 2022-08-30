#include <bits/stdc++.h>

using namespace std;

class NCC
{
    char mancc[20];
    char tenncc[30];
    char diachi[30];
    float sdt;
public:
    void nhap();
    void xuat();
};
void NCC::nhap()
{
    cout<<"Ma nha cung cap : ";   fflush(stdin);   cin.getline(mancc, 20);
    cout<<"Ten nha cung cap: ";   fflush(stdin);   cin.getline(tenncc, 20);
    cout<<"Dia chi         : ";   fflush(stdin);   cin.getline(diachi, 20);
    cout<<"So dien thoai   : ";   cin.>>sdt;
}
void NCC::xuat()
{

}

class SANPHAM
{
    char masp[20];
    char tensp[30];
    int sl;
    int dongia;
public:
    void nhap();
    void xuat();

};
void SANPHAM::nhap()
{
    cout<<"Ma san pham : ";   fflush(stdin);   cin.getline(masp, 20);
    cout<<"Ten san pham: ";   fflush(stdin);   cin.getline(tensp, 20);
    cout<<"So luong    : ";   cin.>>sl;
    cout<<"Don gia     : ";   cin.>>sdt;
}

class PHIEU
{
    char maphieu[20];
    ngay;
    NCC X;
    SANPHAM *Y;
    int n;
public:
    void nhap();
    void xuat();

};

int main()
{
    PHIEU K;
    K.nhap();
    K.xuat();

    return 0;
}
