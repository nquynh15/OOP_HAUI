#include <bits/stdc++.h>

using namespace std;

class LOPHOC;
class NGUOI
{
protected:
    char hoten[30], ngaysinh[15], que[30];
public:
    void nhap();
    void xuat();
};
void NGUOI::nhap()
{
    cout<<"Ho va ten: ";        fflush(stdin);      gets(hoten);
    cout<<"Ngay sinh: ";        fflush(stdin);      gets(ngaysinh);
    cout<<"Que quan : ";        fflush(stdin);      gets(que);
}
void NGUOI::xuat()
{
    cout<<left<<setw(30)<<hoten<<setw(15)<<ngaysinh<<setw(30)<<que;
}
class SINHVIEN : public NGUOI
{
    char masv[20], nganh[20];
    int khoa;
public:
    void nhap();
    void xuat();
    friend class LOPHOC;
    friend void DEM( LOPHOC K);
    friend void SAPXEP( LOPHOC K);
};
void SINHVIEN::nhap()
{
    NGUOI::nhap();
    cout<<"Ma sinh vien: ";        fflush(stdin);      gets(masv);
    cout<<"Nganh : ";              fflush(stdin);      gets(nganh);
    cout<<"Khoa  : ";              cin>>khoa;
}
void SINHVIEN::xuat()
{
    NGUOI::xuat();
    cout<<left<<setw(20)<<masv<<setw(20)<<nganh<<setw(30)<<khoa<<endl;
}
class LOPHOC
{
    char mal[20], tenl[20], ngaymo[15];
    SINHVIEN *x;
    int n;
    char gv[30];
public:
    void nhap();
    void xuat();
    friend void DEM( LOPHOC K);
    friend void SAPXEP( LOPHOC K);
};
void LOPHOC::nhap()
{
    cout<<"Ma lop hoc : ";        fflush(stdin);      gets(mal);
    cout<<"Ten lop hoc: ";        fflush(stdin);      gets(tenl);
    cout<<"Ngay mo : ";           fflush(stdin);      gets(ngaymo);

    cout<<"So sinh vien: ";       cin>>n;
    x = new SINHVIEN[n];

    for(int i=0; i<n; i++)
        x[i].nhap();
    cout<<endl;
}
void LOPHOC::xuat()
{
    cout<<"Ma lop hoc : "<<mal<<endl;
    cout<<"Ten lop hoc: "<<tenl<<endl;
    cout<<"Ngay mo : "<<ngaymo<<endl;
    cout<<"Danh sach sinh vien trong lop:"<<endl;
    cout<<left<<setw(30)<<"Ho va ten"<<setw(15)<<"Ngay sinh"<<setw(30)<<"Que quan"<<setw(20)<<"Ma sinh vien"<<setw(20)<<"Nganh"<<setw(30)<<"Khoa"<<endl;

    for(int i=0; i<n; i++)
        x[i].xuat();
}
void DEM( LOPHOC K)
{
    int d = 0;
    for(int i=0; i<K.n; i++)
     {
         if( K.x[i].khoa == 11)
            d++;
     }
     cout<<"So sinh vien khoa 11 trong lop la: "<<d<<endl;
}
void SAPXEP( LOPHOC K)
{
    for(int i=0; i<K.n; i++)
        for(int j=i+1; j<K.n; j++)
        {
            if( K.x[i].khoa > K.x[j].khoa)
                swap(K.x[i], K.x[j]);
        }
}
int main()
{
    LOPHOC K;

    K.nhap();
    K.xuat();

    DEM(K);
    SAPXEP(K);
    cout<<"Sap xep lai: "<<endl;
    K.xuat();

    return 0;
}
