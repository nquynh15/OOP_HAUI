#include <bits/stdc++.h>

using namespace std;

class HANG
{
    char maha[30];
    char tenha[30];
    float dg;
    int sl;
public:
    void nhap();
    void xuat();
};

void HANG::nhap()
{
    cout<<"Ma hang    : "; fflush(stdin);   gets(maha);
    cout<<"Ten hang   : "; fflush(stdin);   gets(tenha);
    cout<<"Don gia    : "; cin>>dg;
    cout<<"So luong   : "; cin>>sl;
    cout<<endl;
}
void HANG::xuat()
{
    cout<<left<<setw(30)<<maha<<setw(30)<<tenha<<setw(15)<<dg<<setw(15)<<sl<<setw(20)<<dg*sl<<endl;
}

int main()
{
    int n;
    cout<<"n = ";   cin>>n;
    HANG *x;
    x = new HANG[n];

    for(int i=0; i<n; i++)
        x[i].nhap();

    cout<<left<<setw(30)<<"Ma hang"<<setw(30)<<"Ten hang"<<setw(15)<<"Don gia"<<setw(15)<<"So luong"<<setw(20)<<"Tong tien"<<endl;
    for (int i=0; i<n; i++)
        x[i].xuat();

    return 0;
}
