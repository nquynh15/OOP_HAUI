#include <bits/stdc++.h>

using namespace std;

class MANG
{
    int *a;
    int n;
public:
    void nhap();
    void sapxep();
    void xuat();
};
void MANG::nhap()
{
    cout<<"So phan tu cua mang n = ";  cin>>n;
    a = new int[n];
    for(int i=0; i<n; i++)
    {
       cout<<"a["<<i<<"] = ";
       cin>>a[i];
    }


}
void MANG::sapxep()
{
    for(int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
                swap (a[i], a[j]);
        }

}
void MANG::xuat()
{
    for(int i=0; i<n; i++)
        cout<<"  "<<a[i];
    cout<<endl;

}

int main()
{
    MANG k;
    k.nhap();
    k.sapxep();
    cout<<"Mang da duoc sap xep: ";
    k.xuat();

    return 0;
}
