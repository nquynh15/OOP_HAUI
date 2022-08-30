#include <bits/stdc++.h>

using namespace std;

class HANG
{
    char mah[10];
    char tenh[30];
    float dg;
public:
    void nhap();
    void xuat();
};
void HANG::nhap()
{
    cout<<"Ma hang:  ";  fflush(stdin);  gets(mah);
    cout<<"Ten hang: ";  fflush(stdin);  gets(tenh);
    cout<<"Don gia:  ";  cin>>dg;
}
void HANG::xuat()
{
    cout<<left<<setw(15)<<mah<<setw(30)<<tenh<<setw(10)<<dg<<endl;
}

class PHIEU
{
    char maphi[10];
    HANG *x;
    int n;
public:
    void nhap();
    void xuat();
};
void PHIEU::nhap()
{
    cout<<"Ma phieu: ";  fflush(stdin);  gets(maphi);
    cout<<"So mat hang: "; cin >>n;

    x=new HANG[n];
    for(int i=0; i<n; i++)
        x[i].nhap();
    cout<<endl;
}
void PHIEU::xuat()
{
    cout<<setw(10)<<"Ma phieu: "<<setw(10)<<maphi<<endl;
    cout<<left<<setw(15)<<"Ma hang"<<setw(30)<<"Ten hang"<<setw(10)<<"Don gia"<<endl;
    for(int i=0; i<n; i++)
        x[i].xuat();
    cout<<endl;
}
int main()
{
    PHIEU k;
    k.nhap();
    k.xuat();

    return 0;
}
