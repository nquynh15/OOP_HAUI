#include <bits/stdc++.h>

using namespace std;

class NSX
{
    char mansx[10];
    char tennsx[30];
    char diachi[30];
public:
    void nhap();
    void xuat();
};
void NSX::nhap()
{
    cout<<"Ma nha san xuat:  ";   fflush(stdin);  gets(mansx);
    cout<<"Ten nha san xuat:  ";  fflush(stdin);  gets(tennsx);
    cout<<"Dia chi nah san xuat:  ";  fflush(stdin);  gets(diachi);
}
void NSX::xuat()
{
    cout<<"\t"<<"Ma nha san xuat :     "<<mansx<<endl;
    cout<<"\t"<<"Ten nha san xuat:     "<<tennsx<<endl;
    cout<<"\t"<<"Dia chi nha san xuat: "<<diachi<<endl;
}

class HANG
{
    char mah[15];
    char tenh[30];
    NSX x;
public:
    void nhap();
    void xuat();
};
void HANG::nhap()
{
    cout<<"Ma hang:  ";  fflush(stdin);  gets(mah);
    cout<<"Ten hang: ";  fflush(stdin);  gets(tenh);

    x.nhap();
}
void HANG::xuat()
{
    cout<<"\nThong tin vua nhap: "<<endl;
    cout<<"\t"<<"Ma hang:  "<<mah<<endl;
    cout<<"\t"<<"Ten hang: "<<tenh<<endl;
    x.xuat();
}
int main()
{
    HANG k;
    k.nhap();
    k.xuat();

    return 0;
}
