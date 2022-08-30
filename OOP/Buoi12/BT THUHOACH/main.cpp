#include <bits/stdc++.h>

using namespace std;
template <class T> class MATRIX;
template <class T> istream& operator>>(istream&x, MATRIX<T>&y);
template <class T> ostream& operator<<(ostream&x, MATRIX<T>&y);

template <class T> class MATRIX
{
    T **a;
    int n, m;
public:
    friend istream& operator>> <>(istream&x, MATRIX&y);
    friend ostream& operator<< <>(ostream&x, MATRIX&y);
    T operator! ();
};
template <class T> istream& operator>>(istream&x, MATRIX<T>&y)
{
    cout<<"n = ";   x>>y.n;
    cout<<"m = ";   x>>y.m;
    y.a = new T *[y.n];
    for(int i=0; i<y.n; i++)
        y.a[i] = new T [y.m];
    for(int i=0; i<y.n; i++)
    {
        for(int j=0; j<y.m; j++)
            cin>>y.a[i][j];
        cout<<endl;
    }
    return x;
}
template <class T> ostream& operator<<(ostream&x, MATRIX<T>&y)
{
    for(int i=0; i<y.n; i++)
    {
        for(int j=0; j<y.m; j++)
            x<<setw(5)<<y.a[i][j];
        x<<endl;
    }
    return x;
}
template <class T>T MATRIX <T>::operator! ()
{
    T m = a[0][0];
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<m; j++)
            if(m<a[i][j])
                m = a[i][j];
    }
    return m;
}
int main()
{
    MATRIX<int> a;
    MATRIX<double> b;
    cout<"Nhap ma tran a: "<<endl;
    cin>> a;
    cout<<"Nhap ma tran b: "<<endl;
    cin>>b;

    cout<<"Ma tran a: "<<endl;
    cout<<a<<endl;
    cout<<"Max a = "<<!a<<endl;
    cout<<"Ma tran b: "<<endl;
    cout<<b<<endl;
    cout<<"Max b = "<<!b<<endl;

    ofstream f("E:/BTT MATRIX.txt" ios::out);


    return 0;
}
