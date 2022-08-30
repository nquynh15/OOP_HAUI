#include <iostream>

using namespace std;

class HANG
{
    char MAH[32];
    char TEN[32];
    float DG;
    int SL;
public:
    void nhap();
    void xuat();
};
void HANG::nhap()
{
    cout<<"Ma hang : "; fflush(stdin);  gets(MAH);
    cout<<"Ten     : "; fflush(stdin);  gets(TEN);
    cout<<"Don gia : "; cin>>DG;
    cout<<"So luong ";  cin>>SL;

}
void HANG::xuat()
{
    cout<<setw(32)<<MAH<<setw(32)<<TEN<<setw(15)<<DG<<setw(10)<<SL<<endl;
}
class HOADON
{
    char MAHD[32];
    char NGAY[32];
    HANG *x;
    int n;
public:
    void NHAP();
    void XUAT();
};
void HOADON::NHAP()
{
    cout<<"Ma hoa don : " fflush(stdin);  gets(MAHD);
    cout<<"Ngay lap   : " fflush(stdin);  gets(NGAY);
    cout<<"n = "; cin>>n;

    x = new HANG[n];
    for(int i=0; i<n; i++))
        x[i].nhap();
}
void HOADON::XUAT()
{
    cout<<"\nMa hoa don : "<<MAHD<<endl;
    cout<<"Ngay       : "<<MAHD<<endl;

    cout<<setw(10)<<"Ma hang"<<setw(20)<<"Ten hang"<<setw(15)<<"Don gia"<<setw(10<<"So luong"<<endl;

    for(int i=0; i<n; i++)
        x[i].xuat();
}
int main()
{
    int n;

    HOADON k;
    k.nhap();
    k.xuat();

    return 0;
}
