#include <bits/stdc++.h>

using namespace std;

class MANG
{
    int *a;
    int n;
public:
    void nhap();
    void xuat();
    MANG operator+ (MANG B);
    MANG operator- ();
    int operator++();
};
void MANG::nhap()
{
    cout<<"Do dai mang: ";      cin>>n;
    a = new int[n];
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
}
void MANG::xuat()
{

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
MANG MANG::operator+ (MANG B)
{
    MANG C;
    if ( n == B.n )
    {
        C.n = n;
        C.a = new int[n];
        for(int i=0; i<n; i++)
            C.a[i] = a[i] + B.a[i];
    }
    else
    {
        C.n = 0;
        C.a = NULL;
    }

    return C;
}
MANG MANG::operator- ()
{
    for(int i=0; i<n; i++)
        a[i] = -a[i];
    return *this;
}
int MANG::operator++()
{
    int ma = a[0];
    for(int i=1; i<n; i++)
    {
        if( ma< a[i])
            ma = a[i];
    }
    return ma;
}
int main()
{
    MANG A, B;
    A.nhap();
    B.nhap();
    cout<<"Mang A: "; A.xuat();
    cout<<"Mang B: "; B.xuat();

    MANG C;
    C = A+B;
    cout<<"Tong hai mang tren la: ";
    C.xuat();

    A = -A;
    cout<<"Doi dau mang A: ";A.xuat();

    cout<<"Phan tu lon nhat cua mang A: "<<++A<<endl;


    return 0;
}
