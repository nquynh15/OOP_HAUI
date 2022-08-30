#include <bits/stdc++.h>

using namespace std;

class HANG
{
    char mah[20], tenh[20];
    float dg;
    int sl, nam;
public:
    HANG();
    HANG(char *b, char *c, float z, int t, int r);
    friend istream& operator>>(istream& x, HANG &y);
    friend ostream& operator<<(ostream& x, HANG y);
    friend void TIM(int n, HANG *a);
    friend void SX(int n, HANG *a);
    friend void XOA1(int &n, HANG *&a);
    friend void XOA2(int &n, HANG *&a);
};
HANG::HANG()
{
    strcpy(mah, "");
    strcpy(tenh, "");
    dg = 0;
    sl = 0;
    nam = 0;
}
HANG::HANG(char *b, char *c, float z, int t, int r)
{
    strcpy(mah, b);
    strcpy(tenh, c);
    dg = z;
    sl = t;
    nam = r;
}
istream& operator>>(istream& x, HANG &y)
{
    cout<<"Ma hang: ";  fflush(stdin);   x.getline(y.mah, 20);
    cout<<"Ten hang: "; fflush(stdin);   x.getline(y.tenh, 20);
    cout<<"Don gia : ";  x>>y.dg;
    cout<<"So luong: "; x>>y.sl;
    cout<<"Nam : ";     x>>y.nam;
    return x;
}
ostream& operator<<(ostream& x, HANG y)
{
    x<<left<<setw(20)<<y.mah<<setw(20)<<y.tenh<<setw(10)<<y.dg<<setw(10)<<y.sl<<setw(7)<<y.nam<<endl;
    return x;
}
void TIM(int n, HANG *a)
{
    int d=0;
    for(int i=0; i<n; i++)
    {
        if( strcmp(a[i].mah, "IPHONE 12")==0)
            d++;
    }
    if(d!=0)
        cout<<"Co mat hang 'IPHONE 12' trong danh sach"<<endl;
    else
        cout<<"Khong co mat hang 'IPHONE 12' trong danh sach"<<endl;
}
void SX(int n, HANG *a)
{
    float tien;
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
        {
            if(a[i].dg*a[i].sl<a[j].dg*a[j].sl)
                swap(a[i], a[j]);
        }
}
void XOA1(int &n, HANG *&a)
{
    for(int i=0; i<n; i++)
    {
        if( strcmp(a[i].mah, "H005")==0)
            for(int j=i; j<n-1; j++)
                a[j]=a[j+1];
            n--;
    }

}
void XOA2(int &n, HANG *&a)
{
    for(int i=0; i<n; i++)
    {
        while ( a[i].dg<20 && i<n )
            for(int j=i; j<n-1; j++)
                a[j]=a[j+1];
            n--;
    }
    a = (HANG*) realloc(a, n*sizeof(HANG));
}
int main()
{
    int n;
    cout<<"So luong hang la: ";     cin>>n;
    HANG *a;
    a = new HANG[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<left<<setw(20)<<"Ma hang"<<setw(20)<<"Ten hang"<<setw(10)<<"Don gia"<<setw(10)<<"So luong"<<setw(7)<<"Nam"<<endl;
    for(int i=0; i<n; i++)
        cout<<a[i];
    ofstream tep;
    tep.open("E:/HANGNHAP.DAT", ios::out);
    for(int i=0; i<n; i++)
        tep<<a[i];
    tep.close();
    TIM(n, a);


    SX(n, a);
    ofstream tep2;
    tep2.open("E:/HANGSORT.TXT", ios::out);
    for(int i=0; i<n; i++)
        tep2<<a[i];
    tep2.close();
    ifstream f;
    f.open("E:/HANGSORT.TXT", ios::in);
    for(int i=0; i<n; i++)
        cout<<a[i];
    XOA1(n, a);
    XOA2(n, a);
    return 0;
}
