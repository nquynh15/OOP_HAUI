#include <bits/stdc++.h>

using namespace std;
class PS
{
    int tu,  mau;
public:
    PS operator+ (PS b);
    PS operator- (PS b);
    PS operator* (PS b);
    PS operator/ (PS b);
    double operator--();
    friend istream& operator>>(istream& x, PS &y);
    friend ostream& operator<<(ostream& x, PS y);
};
PS PS::operator+ (PS b)
{
    PS c;
    c.tu = tu*b.mau + mau*b.tu;
    c.mau = mau*b.mau;
    return c;
}
PS PS:: operator-(PS b)
{
    PS c;
    c.tu = tu*b.mau-mau*b.tu;
    c.mau = mau*b.mau;
    return c;
}
PS PS::operator*(PS b)
{
    PS c;
    c.tu = tu*b.tu;
    c.mau = mau*b.mau;
    return c;
}
PS PS::operator/(PS b)
{
    PS c;
    c.tu= tu*b.mau;
    c.mau=mau*b.tu;
    return c;
}
double PS::operator--()
{
    return (double) tu/mau;
}
istream& operator>>(istream& x, PS &y)
{
    cout<<"Nhap tu so: ";   x>>y.tu;
    cout<<"Nhap mau so: ";  x>>y.mau;
    return x;
}
ostream& operator<<(ostream& x, PS y)
{
    x<<y.tu<<"/"<<y.mau;
    return x;
}
int main()
{
    PS a, b;
    cout<<"Nhap PS thu nhat: "<<endl;   cin>>a;
    cout<<"Nhap PS thu hai : "<<endl;   cin>>b;
    cout<<"Hai phan so vua nhap: "<<a<<" va "<<b<<endl;

    PS x, y, z, t;
    x = a+b;
    y = a-b;
    z = a*b;
    t = a/b;
    cout<<a<<" + "<<b<<" = "<<x<<endl;
    cout<<a<<" - "<<b<<" = "<<y<<endl;
    cout<<a<<" * "<<b<<" = "<<z<<endl;
    cout<<a<<" : "<<b<<" = "<<t<<endl;
    cout<<"Gia tri phan so "<<a<<" = "<<--a<<endl;

    ofstream tep("E:/PHANSO.txt", ios::out);
    tep<<a<<endl;
    tep<<b<<endl;
    tep<<a<<" + "<<b<<" = "<<x<<endl;
    tep<<a<<" - "<<b<<" = "<<y<<endl;
    tep<<a<<" * "<<b<<" = "<<z<<endl;
    tep<<a<<" : "<<b<<" = "<<t<<endl;
    tep<<"Gia tri phan so "<<a<<" = "<<--a<<endl;
    tep.close();

    return 0;
}
