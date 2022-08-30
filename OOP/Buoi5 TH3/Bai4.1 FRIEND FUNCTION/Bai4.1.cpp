#include <bits/stdc++.h>

using namespace std;



class SINHVIEN
{
    char masv[15];
    char hoten[30];
    float toan, ly, hoa;
public:
    void nhap();
    void xuat();
    friend void sapxep(SINHVIEN *x);
};

void SINHVIEN::nhap()
{
    cout<<"Ma sinh vien: "; fflush(stdin);  gets(masv);
    cout<<"Ho va ten  :  "; fflush(stdin);  gets(hoten);
    cout<<"Diem toan: ";  cin>>toan;
    cout<<"Diem ly : ";   cin>>ly;
    cout<<"Diem hoa: ";   cin>>hoa;
}
void SINHVIEN::xuat()
{
    cout<<left<<setw(15)<<masv<<setw(32)<<hoten<<setw(10)<<toan<<setw(10)<<ly<<setw(10)<<hoa<<setw(10)<<toan+ly+hoa<<endl;
}

void sapxep(SINHVIEN *x,int n)
{
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if( x[i].toan+ x[i].ly+ x[i].hoa > x[j].toan+ x[j].ly+ x[j].hoa)
               swap(x[i], x[j]);
}
int main()
{
    int n;
    cout<<"So sinh vien: "; cin>>n;

    SINHVIEN *x;
    x=new SINHVIEN[n];

    for(int i=0; i<n; i++)
    {
       cout<<"Sinh vien thu "<<i+1<<" : "<<endl;
        x[i].nhap();
    }
    cout<<endl;

    cout<<"Danh sach sinh vien vua nhap: "<<endl;
    cout<<left<<setw(15)<<"Ma sinh vien"<<setw(30)<<"Ho va ten"<<setw(10)<<"Diem toan"<<setw(10)<<"Diem ly"<<setw(10)<<"Diem hoa"<<setw(10)<<"Tong diem"<<endl;
    for(int i=0; i<n; i++)
        x[i].xuat();
    cout<<endl;

    sapxep(x);
    cout<<"Danh sach sau khi sap xep la: "<<endl;
    cout<<left<<setw(15)<<"Ma sinh vien"<<setw(30)<<"Ho va ten"<<setw(10)<<"Diem toan"<<setw(10)<<"Diem ly"<<setw(10)<<"Diem hoa"<<setw(10)<<"Tong diem"<<endl;
    for(int i=0; i<n; i++)
        x[i].xuat();
    cout<<endl;

    return 0;
}
