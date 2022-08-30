#include <bits/stdc++.h>

using namespace std;

class MATRIX
{
    double **a;
    int n, m;
public:
    friend istream& operator>>(istream& x, MATRIX& y);
    friend ostream& operator<<(ostream& x, MATRIX y);
    MATRIX operator-- ();
    MATRIX operator+ (MATRIX b);
    MATRIX operator- (MATRIX b);
};
istream& operator>>(istream& x, MATRIX& y)
{
    cout<<"So hang n= ";    x>>y.n;
    cout<<"So cot m = ";    x>>y.m;
    y.a = new double *[y.n];
    for(int i=0; i<y.n; i++)
        y.a[i] = new double[y.m];

    for(int i=0; i<y.n; i++)
        for(int j=0; j<y.m; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]= ";
            x>>y.a[i][j];
        }
    return x;
}
ostream& operator<<(ostream& x, MATRIX y)
{
    for(int i=0; i<y.n; i++)
    {
        for(int j=0; j<y.m; j++)
            x<<setw(4)<<y.a[i][j];
        x<<endl;
    }
    return x;
}
MATRIX MATRIX::operator--()
{
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            a[i][j] = -a[i][j];
    return *this;
}
MATRIX MATRIX::operator+ (MATRIX y)
{

    MATRIX c;
    if (n == y.n && m == y.m)
    {
        c.n = n;
        c.m = m;
        c.a = new double *[c.n];
        for(int i=0; i<c.n; i++)
            c.a[i] = new double[c.m];
        for(int i=0; i<c.n; i++)
            for(int j=0; j<c.m; j++)
                c.a[i][j] = a[i][j] + y.a[i][j];
    }
    else
    {
        cout<<"Hai ma tran khong cung kich thuoc!"<<endl;
        c.n = c.m = 0;
    }
    return c;
}
MATRIX MATRIX::operator- (MATRIX y)
{
    MATRIX c;
    if (n == y.n && m ==y.m)
    {
        c.n = n;
        c.m = m;
        c.a = new double *[c.n];
        for(int i=0; i<c.n; i++)
            c.a[i] = new double[c.m];
        for(int i=0; i<c.n; i++)
            for(int j=0; j<c.m; j++)
                c.a[i][j] = a[i][j] - y.a[i][j];
    }
    else
    {
        cout<<"Hai ma tran khong cung kich thuoc!"<<endl;
        c.n = c.m = 0;
    }
    return c;
}
int main()
{
    MATRIX A, B;
    cout<<"Nhap ma tran A: "<<endl;
    cin>>A;
    cout<<"Nhap ma tran B: "<<endl;
    cin>>B;
    cout<<"Ma tran A: "<<endl;
    cout<<A;
    cout<<"Ma tran B: "<<endl;
    cout<<B;
    A = --A;    B = --B;
    cout<<" Doi dau A: "<<endl;
    cout<<A;
    cout<<" Doi dau B: "<<endl;
    cout<<B;

    MATRIX C, D;
    C=A+B;
    cout<<"Ma tran thu  tong: "<<endl;
    cout<<C;
    D=A-B;
    cout<<"Ma tran thu  hieu: "<<endl;
    cout<<D;

    return 0;
}
