#include <bits/stdc++.h>

using namespace std;

class HANG;
class DATE
{
    int d, m, y;
    friend class HANG;
    friend void in(HANG *k, int n);
};
class HANG
{
    char mah[10];
    char tenh[30];
    DATE Ngaysx;
public:
    void nhap();
    void xuat();
    friend void in(HANG *k, int n);
};
void HANG::nhap()
{
    cout<<"Ma hang:  ";  fflush(stdin);  gets(mah);
    cout<<"Ten hang: ";  fflush(stdin);  gets(tenh);
    cout<<"Ngay san xuat: ";     cin>>Ngaysx.d;
    cout<<"Thang san xuat: ";    cin>>Ngaysx.m;
    cout<<"Nam san xuat: ";      cin>>Ngaysx.y;
}
void HANG::xuat()
{
    cout<<left<<setw(15)<<mah<<setw(30)<<tenh<<Ngaysx.d<<"/"<<Ngaysx.m<<"/"<<Ngaysx.y<<endl;
}
void in(HANG *k, int n)
{
    int d=0;
    for(int i=0; i<n; i++)
        if( k[i].Ngaysx.y == 2017)
            d++;
    if(d == 0)
        cout<<"Khong co mat hang nao san xuat nam 2017"<<endl;
    else
    {
        cout<<"\nDanh sach cac mat hang san xuat nam 2017: "<<endl;
        cout<<left<<setw(15)<<"Ma Hang"<<setw(30)<<"Ten hang"<<setw(15)<<"Ngay san xuat"<<endl;
        for(int i=0; i<n; i++)
            if( k[i].Ngaysx.y == 2017)
                k[i].xuat();
    }

}
int main()
{
    HANG *k;
    int n;
    cout<<"So hang: "; cin>>n;

    k=new HANG[n];
    for(int i=0; i<n; i++)
        k[i].nhap();
    cout<<endl;

    in(k,n);

    return 0;
}
