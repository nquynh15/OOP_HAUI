#include <bits/stdc++.h>

using namespace std;

class DN
{
   char ten[32];
   char diachi[32];
   float snv;
   double dthu;
public:
    void nhap();
    void xuat();
};
void DN::nhap()
{
    cout<<"Ten doanh nghiep: "; fflush(stdin);  gets(ten);
    cout<<"Dia chi         : "; fflush(stdin);  gets(diachi);
    cout<<"So nhan vien    : "; cin>>snv;
    cout<<"Doanh thu       : "; cin>>dthu;
}
void DN::xuat()
{

    cout<<left<<setw(32)<<ten<<setw(32)<<diachi<<setw(15)<<snv<<setw(15)<<dthu<<endl;
    
}
int main()
{
    int n;
    DN *a;
    cout<<"n = "; cin>>n;

    a = new DN[n];
    for(int i=0; i<n; i++)
        a[i].nhap();

    cout<<"\nDanh sach "<<n<<" doanh nghiep vua nhap la: \n"<<endl;
    cout<<left<<setw(32)<<"Ten doanh nghiep"<<setw(32)<<"Dia chi"<<setw(15)<<"So nhan vien"<<setw(15)<<"Doanh thu"<<endl;
    for(int i=0; i<n; i++)
        a[i].xuat();

    return 0;
}
