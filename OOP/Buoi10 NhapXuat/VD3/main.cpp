#include <bits/stdc++.h>

using namespace std;
class MANG
{
    int *a;
    int n;
public:
    friend istream& operator>>(istream& x, MANG& y);
    friend ostream& operator<<(ostream& x, MANG y);
};
istream& operator>>(istream& x, MANG& y)
{
    x>>y.n;
    y.a = new MANG[y.n];
    for(int i=0; i<y.n; i++)
        x>>y.a[i];
    return x;
}
ostream& operator<<(ostream& x, MANG y)
{
    x<<y.n<<endl;
    for(int i=0; i<y.n; i++)
        x<<y.a[i]<<" ";
    x<<endl;
    return x;
}
int main()
{
    MANG k;
    cin>>k;
    cout<<k;

    ifstream f1("E:/MANG.txt", ios::in);
    f1>>k;
    f1.close();

    ofstream f("E:/MANG.txt", ios::out);
    f<<k;
    f.close();

    return 0;
}
