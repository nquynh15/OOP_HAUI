#include <bits/stdc++.h>

using namespace std;

class SINHVIEN
{
    int Masv;
    char Hoten[32];
    int tuoi;
    float diem;
public:
    void NHAP();
    void XUAT();
};

void SINHVIEN::NHAP()
{
    cout<<"Ma Sinh vien: "; cin>>Masv;
    cout<<"Ho va ten: ";    fflush(stdin); cin.getline(Hoten,32);
    cout<<"Tuoi: ";         cin>>tuoi;
    cout<<"Diem: ";         cin>>diem;
}
void SINHVIEN::XUAT()
{
    cout<<setw(15)<<Masv<<setw(32)<<Hoten<<setw(10)<<tuoi<<setw(10)<<diem<<endl;
}
int main()
{
    SINHVIEN *a;
    int n;

    cout<<"n = "; cin>>n;
    a = new SINHVIEN[n];

    for(int i=0; i<n; i++)
    {
        a[i].NHAP();
    }

    cout<<setw(15)<<"Ma Sinh vien"<<setw(32)<<"Ho va ten"<<setw(10)<<"Tuoi"<<setw(10)<<"Diem"<<endl;
    for(int i=0; i<n; i++)
    {
        a[i].XUAT();
    }

    return 0;
}
