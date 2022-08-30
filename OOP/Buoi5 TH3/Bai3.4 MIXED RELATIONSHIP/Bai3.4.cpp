#include <bits/stdc++.h>

using namespace std;

class PHONGMAY;
class QUANLY
{
    char maql[10];
    char hoten[30];
public:
    void nhap();
    void xuat();
};
void QUANLY::nhap()
{
    cout<<"Ma quan ly:  ";  fflush(stdin);  gets(maql);
    cout<<"Nguoi quan ly: ";  fflush(stdin);  gets(hoten);
}
void QUANLY::xuat()
{
    cout<<"\t"<<setw(20)<<"Ma quan ly : "<<maql<<endl;
    cout<<"\t"<<setw(20)<<"Nguoi quan ly: "<<hoten<<endl;
}

class MAY
{
    char mamay[10];
    char kieu[20];
    char tt[15];
public:
    void nhap();
    void xuat();
    friend void bonus1(PHONGMAY k);
    friend void bonus2(PHONGMAY &k);
};
void MAY::nhap()
{
    cout<<"Ma may:   ";    fflush(stdin);  gets(mamay);
    cout<<"Kieu may: ";    fflush(stdin);  gets(kieu);
    cout<<"Tinh trang: ";  fflush(stdin);  gets(tt);
}
void MAY::xuat()
{
    cout<<left<<setw(15)<<mamay<<setw(20)<<kieu<<setw(15)<<tt<<endl;
}

class PHONGMAY
{
    char maph[15];
    char tenph[30];
    float dientich;
    QUANLY x;
    MAY *y;
    int n;
public:
    void nhap();
    void xuat();
    friend void bonus1(PHONGMAY k);
    friend void bonus2(PHONGMAY &k);
};
void PHONGMAY::nhap()
{
    cout<<"Ma phong:  ";  fflush(stdin);  gets(maph);
    cout<<"Ten phong: ";  fflush(stdin);  gets(tenph);
    cout<<"Dien tich: "; cin>>dientich;

    x.nhap();

    cout<<"So may: "; cin>>n;
    y = new MAY[n];
    for(int i=0; i<n; i++)
        y[i].nhap();
    cout<<endl;
}
void PHONGMAY::xuat()
{
    cout<<setw(40)<<"THONG TIN PHONG \n"<<endl;
    cout<<"\t"<<setw(20)<<"Ma phong: "<<maph<<endl;
    cout<<"\t"<<setw(20)<<"Ten phong: "<<tenph<<endl;
    cout<<"\t"<<setw(20)<<"Dien tich: "<<dientich<<endl;
    x.xuat();

    cout<<left<<setw(15)<<"Ma may"<<setw(20)<<"Kieu may"<<setw(10)<<"Tinh trang"<<endl;
    for(int i=0; i<n; i++)
        y[i].xuat();
    cout<<endl;
}

void bonus1(PHONGMAY k)
{
    for(int i=0; i<k.n; i++)
        if(strcmp(k.y[i].mamay, "MS001" ) == 0)
            strcpy(k.y[i].tt, "Tot");
}
void bonus2(PHONGMAY &k)
{
    k.dientich = 50;
}
int main()
{
    PHONGMAY k;
    k.nhap();
    k.xuat();

    bonus1(k);
    cout<<"Sua lan 1: "<<endl;
    k.xuat();
    bonus2(k);
    cout<<"Sua lan 1: "<<endl;
    k.xuat();

    return 0;
}
