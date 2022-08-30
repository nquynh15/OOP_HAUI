#include <bits/stdc++.h>

using namespace std;

class SINHVIEN
{
    char masv[20];
    char hoten[30];
    int tuoi;
    float diem;
public:
    void nhap();
    void xuat();
};

void SINHVIEN::nhap()
{
    cout<<"Ma sinh vien: ";  fflush(stdin);    cin.getline(masv, 20);
    cout<<"Ho va ten   : ";  fflush(stdin);    cin.getline(hoten, 20);
    cout<<"Tuoi        : ";  cin>>tuoi;
    cout<<"Diem        : ";  cin>>diem;
    cout<<endl;
}
void SINHVIEN::xuat()
{
    cout<<left<<setw(20)<<masv<<setw(30)<<hoten<<setw(15)<<tuoi<<setw(10)<<diem<<endl;
}


int main()
{
    SINHVIEN a;
    a.nhap();

    SINHVIEN b;
    b.nhap();

    cout<<left<<setw(20)<<"Ma sinh vien"<<setw(30)<<"Ho va ten"<<setw(15)<<"Tuoi"<<setw(10)<<"Diem"<<endl;
    a.xuat();
    b.xuat();

    return 0;
}
