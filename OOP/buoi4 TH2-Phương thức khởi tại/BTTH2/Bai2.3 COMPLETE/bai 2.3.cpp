#include <bits/stdc++.h>

using namespace std;

class MANG
{
    float *a;
    int n;
public:
    void nhap();
    void xuat();
    float MIN();
    float MAX();
};
void MANG::nhap()
{
    cout<<"So phan tu cua mang n = ";  cin>>n;
    a = new float[n];
    for(int i=0; i<n; i++)
    {
       cout<<"a["<<i<<"] = ";
       cin>>a[i];
    }
}
void MANG::xuat()
{
    cout<<"Mang vua nhap : ";
    for(int i=0; i<n; i++)
        cout<<a[i]<<"  ";
    cout<<endl;
}
float MANG::MAX()
{
    float MA = a[0];
    for(int i=1; i<n; i++)
    {
       if( MA < a[i])
        MA = a[i];
    }
    return MA;
}
float MANG::MIN()
{
    float MI = a[0];
    for(int i=1; i<n; i++)
    {
       if( MI > a[i])
        MI = a[i];
    }
    return MI;
}

int main()
{
    MANG x;
    x.nhap();
    x.xuat();
    cout<<"\nPhan tu lon nhat la: "<<x.MAX()<<endl;
    cout<<"Phan tu nho nhat la: "<<x.MIN()<<endl;

    return 0;
}
