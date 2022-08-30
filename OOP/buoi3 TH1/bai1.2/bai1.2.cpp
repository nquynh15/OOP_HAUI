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
};
void hcn::nhap()
{
    cout<<"Nhap chieu dai : "; cin >>d;
    cout<<"Nhap chieu rong: "; cin>>r;
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
float hcn::chuvi()
{
    return 2*(d+r);
}


int main()
{
    hcn x;
    x.nhap();
    x.ve();
    cout<<"Dien tich HCN la: "<<x.dientich()<<endl;
    cout<<"Chu vi HCN la   : "<<x.chuvi()<<endl;

    return 0;
}
