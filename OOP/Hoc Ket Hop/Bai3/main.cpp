#include <bits/stdc++.h>

using namespace std;

class HCN
{
    float d, r;
public:
    void nhap();
    void ve();
    float dientich();
    ~HCN();
};
HCN::~HCN()
{
    cout<<"Phuong thuc huy dax duoc goi"<<endl;
}
void HCN::nhap()
{
    cout<<"d = "; cin>>d;
    cout<<"r = "; cin>>r;
}
void HCN::ve()
{
    for(int i=0; i<d; i++)
        for(int j=0; j<r; j++)
            cout<<"*";
        cout<<endl;
    cout<<endl;
}
float HCN::dientich()
{
    return d*r;
}
int main()
{
    HCN a;

    // con tro doi tuong:
    //HCN *p; p=&a;//con tro p ctro den doi tuong a

    //p ->nhap();
    //p ->ve();
    //p->dientich();

    //HCN *p = new HCN[10];



    return 0;
}
