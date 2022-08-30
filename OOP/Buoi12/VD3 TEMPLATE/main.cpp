#include <bits/stdc++.h>

using namespace std;

template <class T> class VECTO
{
    T *a, n;
public:
    void nhap();
    void xuat();
    T MAX();
};
template <class T> void VECTO<T>::nhap()
{
    cout<<"n = ";   cin>>n;
    a = new T[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
}
template <class T> void VECTO<T> ::xuat()
{
    for(int i=0; i<n; i++)
        cout<<setw(5)<<a[i];
    cout<<endl;
}
template <class T> T VECTO<T>::MAX()
{
    T m=a[0];
    for(int i=1; i<n; i++)
        if(m<a[i])
            m = a[i];
    return m;
}
int main()
{
    VECTO<int>k;
    k.nhap();
    k.xuat();
    cout<<"MAX = "<<k.MAX();

    return 0;
}
