#include <bits/stdc++.h>

using namespace std;

class NCC
{
    char mancc[10], tenncc[30], diachi[30];
public:
    void nhap();
    void xuat();
    friend class PHIEU;
};
void NCC::nhap()
{
    cout<<"\nNhap ma nha cung cap : ";       fflush(stdin);      gets(mancc);
    cout<<"Nhap ten nha cung cap: ";         fflush(stdin);      gets(tenncc);
    cout<<"Nhap dia chi nha cung cap: ";     fflush(stdin);      gets(diachi);
}
void NCC::xuat()
{
    cout<<left<<setw(7)<<"Ma NCC: "<<setw(20)<<mancc<<setw(7)<<"Ten NCC:"<<setw(30)<<tenncc<<endl;
    cout<<left<<setw(8)<<"Dia chi:"<<setw(30)<<diachi<<endl;
}
class HANG
{
    char tenhang[10];
    float dg;
    int sl;
public:
    void nhap();
    void xuat();
    friend class PHIEU;
};
void HANG::nhap()
{
    cout<<"\nNhap ten hang : ";         fflush(stdin);      gets(tenhang);
    cout<<"Don gia: ";      cin>>dg;
    cout<<"So luong: ";     cin>>sl;

}
void HANG::xuat()
{
    cout<<left<<setw(15)<<tenhang<<setw(15)<<dg<<setw(15)<<sl<<setw(15)<<dg * sl<<endl;
}
class PHIEU
{
    char maph[10];
    char ngay[15];
    NCC x;
    HANG *a;
    int n;
public:
    void nhap();
    void xuat();
};
void PHIEU::nhap()
{
    cout<<"\nNhap ma phieu: ";         fflush(stdin);      gets(maph);
    cout<<"Nhap ngay lap  : ";         fflush(stdin);      gets(ngay);
    x.nhap();

    cout<<"So luong hang: ";        cin>>n;
    a = new HANG[n];
    for (int i=0; i<n; i++)
        a[i].nhap();

}
void PHIEU::xuat()
{
    cout<<setw(40)<<"PHIEU NHAP HANG"<<endl;
    cout<<left<<setw(10)<<"Ma phieu: "<<setw(18)<<maph<<setw(10)<<"Ngay lap: "<<setw(30)<<ngay<<endl;
    x.xuat();
    float tong =0;
    cout<<setw(15)<<"Ten hang"<<setw(15)<<"Don gia"<<setw(150)<<"So luong"<<setw(15)<<"Thanh tien"<<endl;
    for (int i=0; i<n; i++)
    {
        tong = tong + a[i].dg * a[i].sl;
        a[i].xuat();
    }
    cout<<setw(50)<<"Cong thanh tien"<<setw(15)<<tong<<endl;
}

int main()
{
    PHIEU k;
    k.nhap();
    k.xuat();

    return 0;
}
