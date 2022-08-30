#include <bits/stdc++.h>

using namespace std;

class ptb2
{
    float a, b, c;
public:
    void nhap();
    void xuat();
    void giai();
    ptb2();
    ptb2(float x, float y, float z);
};
ptb2::ptb2()
{
    a = b = c = 0;
}
ptb2::ptb2(float x, float y, float z)
{
    a = x;
    b = y;
    c = z;
}

void ptb2::nhap()
{
    cout<<"a = ";   cin>>a;
    cout<<"b = ";   cin>>b;
    cout<<"c = ";   cin>>c;
}
void ptb2::xuat()
{
    cout<<a<<"x"<<(char)253<<" + "<<b<<"x + "<<c<<" = 0"<<endl;
}
void ptb2::giai()
{
    if( a==0)
        cout<<"Khong phai phuong tirnh bac hai!"<<endl;
    else
    {
        float delta = b*b - 4*a*c;

        if(delta<0)
            cout<<"Phuong trinh vo nghiem!"<<endl;
        else if ( delta ==0 )
            cout<<"Phuong tirnh co nghiem duy nhat: "<<-b/(2*a)<<endl;
        else
        {
            cout<<"Phuong trinh co hai nghiem phan biet la: "<<endl;
            cout<<"x1 = "<<(-b + sqrt(delta) )/ (2*a)<<endl;
            cout<<"x1 = "<<(-b - sqrt(delta) )/ (2*a)<<endl;
        }
    }
}
int main()
{
    ptb2 p(1, 2, 1);
    cout<<"Phuong trinh P:"<<endl;
    p.xuat();
    p.giai();

    ptb2 q;
    cout<<"Phuong trinh Q:"<<endl;
    q.nhap();
    q.xuat();
    q.giai();

    return 0;
}

