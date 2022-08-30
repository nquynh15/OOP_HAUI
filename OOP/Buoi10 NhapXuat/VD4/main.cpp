#include <bits/stdc++.h>

using namespace std;
class HANG
{
    char mah[20], tenh[20];
    float dg, tl;
    char mausac[20];
public:
    friend istream& operator>>(istream& x, HANG& y);
    friend ostream& operator<<(ostream& x, HANG y);
};
istream& operator>>( istream& x, HANG &y)
{
    cout<<"Ma hang: ";      fflush(stdin);  x.getline(y.mah, 20);
    cout<<"Ten hang: ";     fflush(stdin);  x.getline(y.tenh, 30);
    cout<<"Don gia:  ";     x>>y.dg;
    cout<<"Trong luong: ";  x>>y.tl;
    x.ignore();
    cout<<"Mau sac : ";     fflush(stdin);  x.getline(y.mausac, 20);
    return x;
}
ostream& operator<< (ostream &x, HANG y)
{
    x<<y.mah<<endl;
    x<<y.tenh<<endl;
    x<<y.dg<<endl;
    x<<y.tl<<endl;
    x<<y.mausac<<endl;
    return x;

}
int main()
{
    int n;
    cout<<"n = ";   cin>>n;
    HANG *a;
    a = new HANG[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
        cout<<a[i];

    ofstream f("E:/VD4HANG.txt", ios::out);
    for(int i=0; i<n; i++)
        f<<a[i];
    f.close();

    cout<<"Doc du lieu tu file: "<<endl;
    ifstream f1("E:/VD4HANG.txt", ios::in);
    char s[200];
    /*while(!f1.eof())
    {
        f1.getline(s, 200);
        cout<<s;
    } chi doc viec vua nhap chu khong luu vao tep*/
    HANG T;
    for(int i=0; i<n; i++)
    {
        f1>>T;
        cout<<T;
    }
    f1.close();

    return 0;
}
