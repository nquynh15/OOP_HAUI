#include <bits/stdc++.h>

using namespace std;

class PHANSO
{
    float ts, ms;
public:
    void nhap();
    void xuat();
    PHANSO operator+ (PHANSO b);
    PHANSO operator- ();
    float operator --();
};
void PHANSO::nhap()
{
    cout<<"Nhap tu so: ";       cin>>ts;
    cout<<"Nhap mau so: ";      cin>>ms;
}
void PHANSO::xuat()
{
    cout<<ts<<"/"<<ms<<endl;
}
PHANSO PHANSO:: operator+ (PHANSO b)
{
    PHANSO c;
    c.ts = ts* b.ms + ms* b.ts;
    c.ms = ms* b.ms;

    return c;
}
PHANSO PHANSO:: operator- ()
{
    ts = -ts;
    return *this;
}
float PHANSO::operator--()
{
    return (float)ts/ms;
}
int main()
{
    PHANSO a, b;
    a.nhap();
    b.nhap();
    cout<<"Nhap phan so thu nhat: ";
    a.xuat();
    cout<<"Nhap phan so thu nhat: ";
    b.xuat();

    PHANSO c;
    c = a+b;
    cout<<"Phan so tong: ";
    c.xuat();

    c =-c;
    cout<<"Doi dau : ";
    c.xuat();

    cout<<"Gia tri cua phan so tren: "<<--c<<endl;

    return 0;
}
