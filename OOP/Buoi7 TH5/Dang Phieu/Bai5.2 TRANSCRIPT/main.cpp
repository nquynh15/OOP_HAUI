#include <bits/stdc++.h>

using namespace std;

class SINHVIEN
{
    char masv[10], tensv[30], lop[10];
    int khoa;
public:
    void nhap();
    void xuat();
    friend class PHIEU;
};
void SINHVIEN::nhap()
{
    cout<<"Nhap ma sinh vien: ";       fflush(stdin);      gets(masv);
    cout<<"Ten sinh vien  : ";         fflush(stdin);      gets(tensv);
    cout<<"Lop : ";                    fflush(stdin);      gets(lop);
    cout<<"Khoa: ";                    cin>>khoa;
}
void SINHVIEN::xuat()
{
    cout<<left<<setw(7)<<"Ma sinh vien: "<<setw(24)<<masv<<setw(15)<<"Ten sinh vien: "<<setw(30)<<tensv<<endl;
    cout<<left<<setw(8)<<"Lop:"<<setw(30)<<lop<<setw(7)<<"Khoa: "<<setw(5)<<khoa<<endl;
}
class MON
{
    char tenmon[30];
    int sotrinh;
    float diem;
public:
    void nhap();
    void xuat();
    friend class PHIEU;
};
void MON::nhap()
{
    cout<<"\nNhap ten mon : ";         fflush(stdin);      gets(tenmon);
    cout<<"So trinh: ";      cin>>sotrinh;
    cout<<"Diem: ";          cin>>diem;
}
void MON::xuat()
{
    cout<<left<<setw(30)<<tenmon<<setw(15)<<sotrinh<<setw(15)<<diem<<endl;
}
class PHIEU
{
    SINHVIEN x;
    MON *a;
    int n;
public:
    void nhap();
    void xuat();
};
void PHIEU::nhap()
{
    x.nhap();

    cout<<"So mon: ";       cin>>n;
    a = new MON[n];
    for(int i=0; i<n; i++)
        a[i].nhap();

}
void PHIEU::xuat()
{
    cout<<setw(40)<<"PHIEU BAO DIEM"<<endl;
    x.xuat();

    int trinh =0;
    float tongd =0;
    cout<<"Bang diem:"<<endl;
    cout<<left<<setw(30)<<"Ten mon"<<setw(15)<<"So trinh"<<setw(15)<<"Diem"<<endl;
    for(int i=0; i<n; i++)
    {
        a[i].xuat();
        trinh = trinh + a[i].sotrinh;
        tongd = tongd + a[i].sotrinh*a[i].diem;
    }
    cout<<right<<setw(45)<<"Diem trung binh "<<setprecision(3)<<tongd/trinh<<endl;
}

int main()
{
    PHIEU k;
    k.nhap();
    cout<<"\n---------------------------------------------------------------"<<endl;
    k.xuat();

    return 0;
}
