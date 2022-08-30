#include <bits/stdc++.h>

using namespace std;

class HCN
{
    float d, r;
public:
    void nhap();
    void ve();
    float dientich();
    float chuvi();
};

void HCN::nhap()
{
    cout<<"Nhap chieu dai: ";  cin >>d;
    cout<<"Nhap chieu rong: ";  cin>>r;
}
void HCN::ve()
{
    for( int i=0; i<r; i++)
    {
        cout<<"\t";
        for(int j=0; j<d; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
float HCN::dientich()
{
    return d*r;
}
float HCN::chuvi()
{
    return 2 * (d+r);
}

int main()
{
    HCN x;
    x.nhap();
    x.ve();
    cout<<"Dien tich: "<<x.dientich()<<endl;
    cout<<"Chu vi   : "<<x.chuvi();

    return 0;
}



