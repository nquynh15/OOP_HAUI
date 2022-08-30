#include <bits/stdc++.h>

using namespace std;

class hcn
{
    float d, r;
public:
    void nhap();
    void ve();
    float dientich();
    float chuvi();
    hcn();// khoi tao khong co doi
    hcn(float x, float y); //khoi tao co doi
    ~hcn();//phuong thuc huy
};
hcn::hcn()
{
    d = 1; r = 2;
}
hcn::hcn(float x, float y)
{
    d =x; r = y;
}
void hcn::nhap()
{
    cout<<"d =  : "; cin >>d;
    cout<<"r =  "; cin>>r;
    cout<<endl;
}
void hcn::ve()
{
    for (int i=0; i<d; i++)
    {
        for (int j=0; j<r; j++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;
}
float hcn::dientich()
{
    return d*r;
}


int main()
{
    hcn k;

    k.ve();
    cout<<"Dien tich HCN la: "<<k.dientich()<<endl;

    hcn q(2, 3);
    q.ve();
    cout<<"Dien tich HCN la: "<<q.dientich()<<endl;


    return 0;
}
