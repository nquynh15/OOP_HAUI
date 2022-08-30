#include <bits/stdc++.h>

using namespace std;

class NSX
{
    char mansx[10];
    char tennsx[30];
    char diachi[30];
    friend class HANG;
};

class HANG
{
    char mah[15];
    char tenh[30];
    float dg, trogl;
    NSX x;
public:
    void nhap();
    void xuat();
};
void HANG::nhap()
{
    cout<<"Ma hang : ";  fflush(stdin);  gets(mah);
    cout<<"Ten hang: ";  fflush(stdin);  gets(tenh);
    cout<<"Don gia : ";     cin>>dg;
    cout<<"Trong luong: ";  cin>>trogl;
    cout<<"Ma nha san xuat:  ";         fflush(stdin);  gets(x.mansx);
    cout<<"Ten nha san xuat:  ";        fflush(stdin);  gets(x.tennsx);
    cout<<"Dia chi nah san xuat: ";     fflush(stdin);  gets(x.diachi);

}
void HANG::xuat()
{
    cout<<"\t"<<"Ma hang:  "<<mah<<endl;
    cout<<"\t"<<"Ten hang: "<<tenh<<endl;
    cout<<"\t"<<"Don gia : "<<dg<<endl;
    cout<<"\t"<<"Trong luong: "<<trogl<<endl;
    cout<<"\t"<<"Ma nha san xuat : "<<x.mansx<<endl;
    cout<<"\t"<<"Ten nha san xuat: "<<x.tennsx<<endl;
    cout<<"\t"<<"Dia chi nha san xuat: "<<x.diachi<<endl;
}
int main()
{
    HANG k;
    k.nhap();
    cout<<"\nThong tin vua nhap: "<<endl;
    k.xuat();

    return 0;
}
