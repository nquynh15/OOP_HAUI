#include <bits/stdc++.h>

using namespace std;

class ARRAYY
{
    int *x;
    int n;
public:
    ARRAYY();
    ARRAYY(int y);
    ~ARRAYY();
    void nhap();
    void xuat();
};
ARRAYY::ARRAYY()
{
    n = 0;
    x = NULL;
}
ARRAYY::ARRAYY(int y)
{
    n = y;
    x = new int[n];
    for(int i=0; i<n; i++)
        x[i] = 0;
}
ARRAYY::~ARRAYY()
{
    n = 0;
    delete[] x;
}
void ARRAYY::nhap()
{
    cout<<"n = ";   cin>>n;
    x = new int[n];
    for(int i=0; i<n; i++)
    {
        cout<<"x["<<i<<"] = ";
        cin>>x[i];
    }
    cout<<endl;
}
void ARRAYY::xuat()
{
    cout<<"Mang vua nhap: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    ARRAYY a(2);
    a.xuat();

    ARRAYY b;
    b.nhap();
    b.xuat();

    return 0;
}
