#include <bits/stdc++.h>

using namespace std;
class PHANSO
{
    int tu,  mau;
public:
    PHANSO();
    PHANSO(int x, int y);
    PHANSO operator* (PHANSO b);
    double operator--();
    friend istream& operator>>(istream& x, PHANSO &y);
    friend ostream& operator<<(ostream& x, PHANSO y);
};
PHANSO::PHANSO()
{
    tu = mau = 0;
}
PHANSO::PHANSO(int x, int y)
{
    tu = x;
    mau = y;
}
PHANSO PHANSO::operator*(PHANSO b)
{
    PHANSO c;
    c.tu = tu*b.tu;
    c.mau = mau*b.mau;

    return c;
}
double PHANSO::operator--()
{
    return (double) tu/mau;
}
istream& operator>>(istream& x, PHANSO &y)
{
    cout<<"Nhap tu so: ";   x>>y.tu;
    cout<<"Nhap mau so: ";  x>>y.mau;
    return x;
}
ostream& operator<<(ostream& x, PHANSO y)
{
    x<<y.tu<<"/"<<y.mau;
    return x;
}
int main()
{
    PHANSO a, b;
    cout<<"Nhap PS thu nhat: "<<endl;   cin>>a;
    cout<<"Nhap PS thu hai : "<<endl;   cin>>b;
    cout<<"Hai phan so vua nhap: "<<a<<" va "<<b<<endl;

    PHANSO c;
    c = a*b;
    cout<<a<<" * "<<b<<" = "<<c<<endl;
    cout<<"Gia tri phan so "<<a<<" = "<<--a<<endl;

    ofstream tep("E:/PHANSO.txt", ios::out);
    tep<<a<<endl;
    tep<<b<<endl;
    tep<<a<<" * "<<b<<" = "<<c<<endl;
    tep<<"Gia tri phan so "<<a<<" = "<<--a<<endl;
    tep.close();

    return 0;
}
