#include <bits/stdc++.h>

using namespace std;

class DATE
{
    int ngay;
    int thang;
    int nam;
public:
    void nhap();
    void xuat();
};

void DATE::nhap()
{
    cout<<"Ngay sinh: "; cin>>ngay;
    cout<<"Thang: "; cin>>thang;
    cout<<"Nam: "; cin>>nam;
}
void DATE::xuat()
{
    cout<<"Ngay "<<ngay<<" thang "<<thang<<" nam "<<nam<<endl;
}
class NHANSU
{
    char manhansu[20];
    char hoten[33];
    DATE ns;
public:
    void nhap();
    void xuat();
};
void NHANSU::nhap()
{
    cout<<"Ma nhan su: "; fflush(stdin);  gets(manhansu);
    cout<<"Ho va ten : "; fflush(stdin);  gets(hoten);
    ns.nhap();
}
void NHANSU::xuat()
{
    cout<<"\nThong tin nhan su: "<<endl;
    cout<<"Ma nhan su: "<<manhansu<<endl;
    cout<<"Ho va ten : "<<hoten<<endl;
    cout<<"Sinh nhat: ";
    ns.xuat();
}
int main()
{
    NHANSU x;
    x.nhap();
    x.xuat();

    return 0;
}
