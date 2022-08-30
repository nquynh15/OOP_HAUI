#include <bits/stdc++.h>

using namespace std;

class HANG
{
    char mah[20], tenh[30];
    float dg;
public:
    friend istream& operator>>( istream& x, HANG &y);
    friend ostream& operator<< (ostream &x, HANG y);
};
istream& operator>>( istream& x, HANG &y)
{
    fflush(stdin);  x.getline(y.mah, 20);
    fflush(stdin);  x.getline(y.tenh, 30);
    x>>y.dg;
    x.ignore();
    return x;
}
ostream& operator<< (ostream &x, HANG y)
{
    x<<setw(20)<<y.mah<<setw(33)<<y.tenh<<setw(10)<<y.dg<<endl;
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

    ofstream f("E:/TESTTHU2.txt", ios::app);

    f<<setw(20)<<"Ma hang"<<setw(33)<<"Ten hang"<<setw(10)<<"Don gia"<<endl;
    for(int i=0; i<n; i++)
        f<<a[i];
    f.close();




    return 0;
}
