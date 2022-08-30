#include <bits/stdc++.h>

using namespace std;

class ptb2
{
    float a, b, c;
public:
    void nhap();
    void xuat ();
    void giai();

};
void ptb2::nhap()
{
    cout<<"Nhap cac he so cua phuong trinh: "<<endl;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;
}
void ptb2::xuat()
{
    cout<<"Phuong trinh: "<<a<<"x"<< (char) 253<<" + "<<b<<"x + "<<c<<" = 0"<<endl;
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
    ptb2 x;
    x.nhap();
    x.xuat();
    x.giai();
    return 0;
}
