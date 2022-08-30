#include <bits/stdc++.h>

using namespace std;
class PHIEU;

class NHANVIEN
{
    char HOTEN[30];
    char CHUCVU[30];
public:
    void nhap();
    void xuat();

};
void NHANVIEN::nhap()
{
    cout<<"Ho ten nhan vien: "; fflush(stdin);  gets(HOTEN);
    cout<<"Chuc vu         : "; fflush(stdin);  gets(CHUCVU);
}
void NHANVIEN::xuat()
{
    cout<<"Nhan vien kiem ke: "<<HOTEN;
    cout<<".   Chuc vu: "<<CHUCVU<<endl;
}

class PHONG
{
    char MAP[30];
    char tenp[30];
    char tentp[30];
public:
    void nhap();
    void xuat();
};
void PHONG::nhap()
{
    cout<<"Ma phong    : "; fflush(stdin);  gets(MAP);
    cout<<"Ten phong   :";  fflush(stdin);  gets(tenp);
    cout<<"Truong phong:";  fflush(stdin);  gets(tentp);
}
void PHONG::xuat()
{
    cout<<"Kiem ke tai phong: "<<tenp;
    cout<<".   Ma phong: "<<MAP<<endl;
    cout<<"Truong phong: "<<tentp<<endl;
}

class TAISAN
{
    char tents[25];
    int sl;
    char tinhtrang[25];
public:
    void nhap();
    void xuat();
    friend class PHIEU;
    friend void TIMKIEM (PHIEU k);
    friend void SXEP (PHIEU k);
};
void TAISAN::nhap()
{
    cout<<"Ten tai san: "; fflush(stdin);  gets(tents);
    cout<<"So luong   :";  cin>>sl;
    cout<<"Tinh trang :";  fflush(stdin);  gets(tinhtrang);
}
void TAISAN::xuat()
{
    cout<<setw(25)<<tents<<setw(10)<<sl<<setw(25)<<tinhtrang<<endl;
}

class PHIEU
{
    char maph[30];
    char ngay[30];
    NHANVIEN X;
    PHONG Y;
    TAISAN*Z;
    int n;
public:
    void nhap();
    void xuat();
    friend void TIMKIEM (PHIEU k);
    void SXEP (PHIEU k);
};
void PHIEU::nhap()
{
    cout<<"Ma phieu : ";  fflush(stdin);  gets(maph);
    cout<<"Ngay     : ";  fflush(stdin);  gets(ngay);

    X.nhap();
    Y.nhap();
    cout<<"n = "; cin>>n;
    Z = new TAISAN[n];
    for(int i=0; i<n; i++)
        Z[i].nhap();


}
void PHIEU::xuat()
{
    cout<<setw(40)<<"PHIEU KIEM KE TAI SAN"<<endl;
    cout<<"Ma phieu:  "<<maph<<".   Ngay kiem ke: "<<ngay<<endl;
    X.xuat();
    Y.xuat();

    cout<<setw(25)<<"Ten tai san"<<setw(10)<<"So luong"<<setw(25)<<"Tinh trang"<<endl;
    for(int i=0; i<n; i++)
        Z[i].xuat();

    int t=0;
    for(int i=0; i<n; i++)
        t = t + Z[i].sl;
    cout<<"So tai khoan da kiem ke: "<<n;
    cout<<".           Tong so luong: "<<t<<endl;
}
void TIMKIEM (PHIEU k)
{
    int d = 0;
    for(int i=0; i<k.n; i++)
        if(strcmp(k.Z[i].tents, "MAY TINH") ==0)
        d++;
    if(d ==0)
        cout<<"KHONG CO MAY TINH"<<endl;
    else
        cout<<"CO MAY TINH"<<endl;
}
void SXEP(PHIEU k) //co &k trong (PHIEU &k) khi thuoc tinh cua PHIEU k thay doi
{
    for(int i=0; i<k.n; i++)
        for(int j=i+1; j<k.n; j++)
            if(k.Z[i].sl > k.Z[i].sl)
                swap ( k.Z[i], k.Z[j] );

}
/*- Neu ham đo KHONG thay doi cua cac thuoc tinh: khong can &k
- Neu ham đo CO thay đoi gia tri cua thuoc tinh:
    +TH1: Thay đoi vao thuoc tinh binh thuong: int, float, double,..__> co &k
    +TH2: Thay doi vao bien con tro: Khong can & (vi phep & : lay dia chi), phep con tro la truyen đia chi roi.

*/
void CHEN(PHIEU &k) - XOA (PHIEU &k)
{
    z thay doi
    n tang len
}
void SUA(PHIEU &k)
{
    neu co thay doi ve thuoc tinh binh thuong --> &k;
}
int main()
{
    PHIEU k;
    k.nhap();
    k.xuat();

    TIMKIEM(k);
    SXEP(k);
    k.xuat();

    return 0;
}
