#include <bits/stdc++.h>

using namespace std;

class NSX
{
    char tennsx[30], diachi[20];
public:
    void nhap();
    void xuat();
    friend class HANG;
};
void NSX::nhap()
{
    cout<<"Nhap ten nha san xuat: ";     fflush(stdin);      gets(tennsx);
    cout<<" Dia chi nha san xuat: ";     fflush(stdin);      gets(diachi);
}
void NSX::xuat()
{
    cout<<left<<setw(15)<<"Nha san xuat: "<<setw(30)<<tennsx<<endl;
    cout<<left<<setw(10)<<"Dia chi: "<<setw(20)<<diachi<<endl;
}
class HANG
{
protected:
    char tenhang[20];
    NSX x;
    float dg;
public:
    void nhap();
    void xuat();
    HANG();
};
void HANG::nhap()
{
    cout<<"Ten hang: ";     fflush(stdin);      gets(tenhang);
    x.nhap();
    cout<<"Don gia: ";      cin>>dg;
}
void HANG::xuat()
{
    cout<<left<<setw(15)<<"Ten hang: "<<setw(30)<<tenhang<<endl;
    x.xuat();
    cout<<left<<setw(10)<<"Don gia : "<<setw(10)<<dg<<endl;
}
HANG::HANG()
{
    strcpy(tenhang, "");
    strcpy(x.diachi, "");
    strcpy(x.tennsx, "");
    dg = 0;
}
class DATE
{
    int d, m, y;
public:
    void nhap();
    void xuat();
    friend class TIVI;
};
void DATE::nhap()
{
    cout<<"Thong tin ngay nhap: "<<endl;
    cout<<"Ngay: ";    cin>>d;
    cout<<"Thang: ";   cin>>m;
    cout<<"Nam:  ";    cin>>y;
}
void DATE::xuat()
{
    cout<<"Ngay nhap: "<<d<<"/"<<m<<"/"<<y<<endl;
}
class TIVI:public HANG
{
    float kichthuoc;
    DATE ngaynhap;
public:
    void nhap();
    void xuat();
    TIVI();
};
TIVI::TIVI() //vi cac thuoc tinh cua HANG deu rong va PTKT HANG() la khong doi nen ko can phai khoi tao gia tri cho cac thuoc tinh cua HANG
{
    kichthuoc =0;
    ngaynhap.d =0;
    ngaynhap.m =0;
    ngaynhap.y =0;
}
void TIVI::nhap()
{
    HANG::nhap();
    cout<<"Kich thuoc: ";   cin>>kichthuoc;
    ngaynhap.nhap();

}
void TIVI::xuat()
{
    HANG::xuat();
    cout<<left<<"Kich thuoc: "<<kichthuoc<<endl;
    ngaynhap.xuat();
}
int main()
{
    TIVI k;
    k.nhap();
    cout<<"\n---THONG TIN VUA NHAP---"<<endl;
    k.xuat();

    return 0;
}
