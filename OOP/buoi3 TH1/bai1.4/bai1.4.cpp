#include <bits/stdc++.h>

using namespace std;

class SACH
{
    char mas[20];
    char tens[30];
    char nxb[25];
    float sotr;
    float gia;
public:
    void nhap();
    void xuat();
};

void SACH::nhap()
{
    cout<<"Ma sach     : ";  fflush(stdin);   gets(mas);
    cout<<"Ten sach    : ";  fflush(stdin);   gets(tens);
    cout<<"Nha xuat ban: ";  fflush(stdin);   gets(nxb);
    cout<<"So trang    : ";  cin>>sotr;
    cout<<"Gia         : ";  cin>>gia;
    cout<<endl;
}
void SACH::xuat()
{
    cout<<left<<setw(20)<<mas<<setw(30)<<tens<<setw(25)<<nxb<<setw(20)<<sotr<<setw(15)<<gia<<endl;
}
int main()
{
    int n;
    cout<<"n = ";  cin>>n;

    SACH *x;
    x = new SACH[n];

    for(int i=0; i<n; i++)
        x[i].nhap();

    cout<<left<<setw(20)<<"Ma sach"<<setw(30)<<"Ten sach"<<setw(25)<<"Nha xuat ban"<<setw(20)<<"So trang"<<setw(15)<<"Gia tien"<<endl;
    for(int i=0; i<n; i++)
        x[i].xuat();
    return 0;
}
