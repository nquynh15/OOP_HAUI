#include <bits/stdc++.h>

using namespace std;
class CHUYENBAY;
class KHACH
{
protected:
    char makh[20], hoten[33], diachi[30];
public:
    void nhap();
    void xuat();
    friend void bonus1(CHUYENBAY k);
};
void KHACH::nhap()
{
    cout<<"Ma khach hang: ";    fflush(stdin);  gets(makh);
    cout<<"Ho ten : ";    fflush(stdin);  gets(hoten);
    cout<<"Dia chi: ";    fflush(stdin);  gets(diachi);
}
void KHACH ::xuat()
{
    cout<<left<<setw(20)<<makh<<setw(33)<<hoten<<setw(30)<<diachi;
}
class KHACHBAY : public KHACH
{
    char mave[20], soghe[10];
    float giave;
public:
    void nhap();
    void xuat();
    friend void bonus1(CHUYENBAY k);
    friend void bonus2( CHUYENBAY k);
    friend void bonus3(CHUYENBAY k);
};
void KHACHBAY::nhap()
{
    KHACH::nhap();
    cout<<"Ma ve: ";    fflush(stdin);  gets(mave);
    cout<<"So ghe: ";   fflush(stdin);  gets(soghe);
    cout<<"Gia ve: ";   cin>>giave;
}
void KHACHBAY::xuat()
{
    KHACH::xuat();
    cout<<setw(20)<<mave<<setw(7)<<soghe<<setw(10)<<giave<<endl;
}
class CHUYENBAY
{
    char sohieu[10], ngay[10], gio[10], tu[20], den[20];
    KHACHBAY *x;
    int n;
public:
    void nhap();
    void xuat();
    friend void bonus1(CHUYENBAY k);
    friend void bonus2(CHUYENBAY k);
    friend void bonus3(CHUYENBAY k);
};
void CHUYENBAY::nhap()
{
    cout<<"So hieu: ";  fflush(stdin);  gets(sohieu);
    cout<<"Ngay: "; fflush(stdin);  gets(ngay);
    cout<<"Gio : "; fflush(stdin);  gets(gio);
    cout<<"Tu  : "; fflush(stdin);  gets(tu);
    cout<<"Den : "; fflush(stdin);  gets(den);

    cout<<"So luong khach bay: ";   cin>>n;
    x = new KHACHBAY[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Khach thu "<<i+1<<": "<<endl;
        x[i].nhap();
    }
}
void CHUYENBAY::xuat()
{
    cout<<"\n==========INFORMATION=========="<<endl;
    cout<<"So hieu: "<<sohieu<<endl;
    cout<<"Ngay: "<<ngay<<endl;
    cout<<"Gio : "<<gio<<endl;
    cout<<"Tu  : "<<tu<<endl;
    cout<<"Den : "<<den<<endl;

    cout<<"Dah sach khach bay: "<<endl;
    cout<<left<<setw(20)<<"Ma khach hang"<<setw(33)<<"Ho ten"<<setw(30)<<"Dia chi"<<setw(20)<<"Ma ve"<<setw(7)<<"So ghe"<<setw(10)<<"Gia ve"<<endl;
    for(int i=0; i<n; i++)
        x[i].xuat();
}
void bonus1( CHUYENBAY k)
{
    for(int i=0; i<k.n; i++)
    {
        if(strcmp(k.x[i].makh, "KH005")==0)
            strcpy(k.x[i].soghe, "M6");
    }
}
void bonus2( CHUYENBAY k)
{
    for(int i=0; i<k.n; i++)
        for(int j=i+1; j<k.n; j++)
        {
            if( k.x[i].giave>k.x[j].giave)
                swap(k.x[i], k.x[j]);
        }
}
void bonus3(CHUYENBAY k)
{
    int d=0;
    for(int i=0; i<k.n; i++)
    {
        if(strcmp(k.x[i].soghe, "M8")==0 || strcmp(k.x[i].soghe, "G8")==0)
            d++;
    }
    cout<<"So luong khach bay mua ve voi so ghe la M8 hay G8 la: "<<d<<endl;
}
int main()
{
    CHUYENBAY k;
    k.nhap();
    k.xuat();
    bonus1(k);
    bonus2(k);
    k.xuat();
    bonus3(k);

    return 0;
}
