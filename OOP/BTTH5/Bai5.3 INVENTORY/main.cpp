#include <bits/stdc++.h>

using namespace std;

class PHIEU;
class PHONG
{
    char nv[30], chucvu[30], phong[30], maphong[20], truongp[30];
public:
    void nhap();
    void xuat();
    friend class PHIEU;
};
void PHONG::nhap()
{
    cout<<"\nNhan vien kiem ke : ";     fflush(stdin);      gets(nv);
    cout<<"Chuc vu : ";                 fflush(stdin);      gets(chucvu);
    cout<<"Kiem ke tai phong: ";        fflush(stdin);      gets(phong);
    cout<<"Ma phong: ";                 fflush(stdin);      gets(maphong);
    cout<<"Ten truong phong : ";        fflush(stdin);      gets(truongp);
}
void PHONG::xuat()
{
    cout<<left<<"Nhan vien kiem ke: "<<setw(30)<<nv<<setw(10)<<"Chuc vu:"<<setw(30)<<chucvu<<endl;
    cout<<left<<"Kiem ke tai phong: "<<setw(30)<<phong<<setw(10)<<"Ma phong:"<<setw(30)<<maphong<<endl;
    cout<<left<<"Truong phong: "<<setw(30)<<truongp<<endl;
}
class TAISAN
{
    char tents[20];
    int sl;
    char tinhtrang[30];
public:
    void nhap();
    void xuat();
    friend class PHIEU;
    friend void SUA (PHIEU k);
    friend void SX(PHIEU k);
};
void TAISAN::nhap()
{
    cout<<"Nhap ten tai san : ";         fflush(stdin);      gets(tents);
    cout<<"So luong: ";                    cin>>sl;
    cout<<"Tinh trang : ";               fflush(stdin);      gets(tinhtrang);
}
void TAISAN::xuat()
{
    cout<<left<<setw(20)<<tents<<setw(15)<<sl<<setw(30)<<tinhtrang<<endl;
}
class PHIEU
{
    char maph[10];
    char ngay[15];
    PHONG x;
    TAISAN *a;
    int n;
public:
    void nhap();
    void xuat();
    friend void SUA (PHIEU k);
    friend void SX(PHIEU k);
};
void PHIEU::nhap()
{
    cout<<"\nNhap ma phieu: ";         fflush(stdin);      gets(maph);
    cout<<"Nhap kiem ke   : ";         fflush(stdin);      gets(ngay);
    x.nhap();

    cout<<"\nSo luong hang: ";        cin>>n;
    a = new TAISAN[n];
    for (int i=0; i<n; i++)
        a[i].nhap();

}
void PHIEU::xuat()
{
    cout<<setw(50)<<"PHIEU KIEM KE TAI SAN"<<endl;
    cout<<left<<"Ma phieu: "<<setw(39)<<maph<<setw(10)<<"Ngay lap: "<<setw(30)<<ngay<<endl;
    x.xuat();

    float d=0, tong =0;
    cout<<left<<setw(20)<<"\nTen tai san"<<setw(15)<<"So luong"<<setw(30)<<"Tinh trang"<<endl;
    for (int i=0; i<n; i++)
    {
        d++;
        tong = tong + a[i].sl;
        a[i].xuat();
    }
    cout<<left<<setw(20)<<"\nSo tai san da kiem ke: "<<setw(30)<<d<<setw(15)<<"Tong so luong: "<<tong<<endl;
}
void SUA (PHIEU k)
{
    for (int i=0; i<k.n; i++)
    {
        if ( strcmp(k.a[i].tents, "May vi tinh") == 0)
            k.a[i].sl = 20;
    }
}

void SX(PHIEU k)
{
    for (int i=0; i<k.n; i++)
        for(int j=i+1; j<k.n; j++)
        {
            if (k.a[i].sl > k.a[j].sl)
            swap(k.a[i], k.a[j]);
        }
}
int main()
{
    PHIEU k;
    k.nhap();

    cout<<"\n---------------------------------------------------------------"<<endl;
    k.xuat();

    SUA(k);
    SX(k);
    cout<<"\nPHIEU SAU KHI SUA\n"<<endl;
    k.xuat();

    return 0;
}

