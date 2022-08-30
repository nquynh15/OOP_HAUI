#include <bits/stdc++.h>

using namespace std;

class MANG
{
    int *a;
    int n;
public:
    void nhap();
    void xuat();
    MANG();
    MANG(int y);
    ~MANG();
};
void MANG::nhap()
{
    cout<<"n = "; cin>>n;
    a = new int[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
}
void MANG::xuat()
{
    for(int i=0; i<n; i++)
        cout<<setw(3)<<a[i];
    cout<<endl;
}

MANG::MANG()
{
    //thong thuong:
    n = 0;
    a = NULL;
}
MANG::MANG(int y)
{
    n = y;
    a = new int[n];
    for(int i=0; i<n; i++)
        a[i] = 1;
}
MANG::~MANG()
{
    //giai phong bo nho cho a

    delete[] a;
}
int main()
{
    MANG k;
    k.xuat();

    MANG q(10);
    q.xuat();

    return 0;
}
