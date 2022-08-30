#include<bits/stdc++.h>

using namespace std;

class GIAOVIEN
{
    char HOTEN[32];
    int TUOI;
    char KHOA[32];
public:
    void NHAP();
    void XUAT();
};
void GIAOVIEN::NHAP()
{
    cout<<"Ho ten: "; fflush(stdin);  cin.getline(HOTEN, 32);
    cout<<"Tuoi: ";   cin>>TUOI;
    cout<<"Khoa: ";   fflush(stdin);  cin.getline(KHOA, 32);
}
void GIAOVIEN::XUAT()
{
    cout<<"Ho ten: "<<HOTEN<<endl;
    cout<<"Tuoi  : "<<TUOI<<endl;
    cout<<"Khoa  : "<<KHOA<<endl;
}
class LOPHOC
{
    char MALOP[32];
    char TENLOP[32];
    char PHONG[30];
    GIAOVIEN x;
public:
    void NHAP();
    void XUAT();
};

void LOPHOC::NHAP()
{
    cout<<"Ma Lop : ";   fflush(stdin);  gets(MALOP);
    cout<<"Ten lop: ";   fflush(stdin);  gets(TENLOP);
    cout<<"Phong  : ";   fflush(stdin);  gets(PHONG);
    x.NHAP();

    /*x.HOTEN
    x.TUOI
    x.KHOA
    x.NHAP();
    x.XUAT(); */
}
void LOPHOC::XUAT()
{
    cout<<"Ma lop : "<<MALOP<<endl;
    cout<<"Ten lop: "<<TENLOP<<endl;
    cout<<"Phong  : "<<PHONG<<endl;
    x.XUAT();
}
int main()
{
    LOPHOC k;
    k.NHAP();
    k.XUAT();

    return 0;
}
