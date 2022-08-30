#include <bits/stdc++.h>

using namespace std;

class SINHVIEN
{
    char masv[32];
    char tensv[32];
    int tuoi;
public:
    void nhap();
    void xuat();
};
void SINHVIEN::nhap()
{
    cout <<" Ma sinh vien  : "; fflush(stdin);  gets(masv);
    cout <<" Ten sinh vien : "; fflush(stdin);  gets(tensv);
    cout <<" Tuoi          : "; cin>>tuoi;
}
void SINHVIEN::xuat()
{
    cout <<setw(32)<<masv<<setw(32)<<tensv<<setw(10)<<tuoi<<endl;
}
class LOPHOC
{
    char malh[32];
    char phong[32];
    SINHVIEN *x;
    int n;
public:
    void nhap();
    void xuat();
};
void LOPHOC::nhap()
{
    cout <<"\nMa lop hoc   : "; fflush(stdin);  gets(malh);
    cout <<" Phong         : "; fflush(stdin);  gets(phong);

    cout<<"n = "; cin>>n;

    x = new SINHVIEN[n];
    for(int i=0; i<n; i++)
        x[i].nhap();

}
void LOPHOC::xuat()
{
    cout <<" Ma lop hoc   : "<<malh<<endl;
    cout <<" Phong        : "<<phong<<endl;

    cout <<left<<setw(32)<<"Ma sinh vien"<<setw(32)<<"Ten sinh vien"<<setw(10)<<"Tuoi"<<endl;

    x = new SINHVIEN[n];
    for(int i=0; i<n; i++)
        x[i].xuat();

}
int main()
{

    LOPHOC k;
    k.nhap();
    k.xuat();

    return 0;
}
