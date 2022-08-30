#include <bits/stdc++.h>

using namespace std;

class VEHICLE
{
protected:
    char nhanhieu[10];
    int namsx;
    char hang[20];
public:
    void nhap();
    void xuat();
};
void VEHICLE::nhap()
{
    cout<<"Nhan hieu : ";       fflush(stdin);      gets(nhanhieu);
    cout<<"Nam san xuat : ";    cin>>namsx;
    cout<<"Hang san xuat: ";    fflush(stdin);      gets(hang);
}
void VEHICLE::xuat()
{
    cout<<"Nhan hieu : "<<nhanhieu<<endl;
    cout<<"Nam san xuat : "<<namsx<<endl;
    cout<<"Hang san xuat: "<<hang<<endl;
}
class OTO: public VEHICLE
{
    int sochongoi;
    float dungtich;
public:
    void nhap();
    void xuat();
    friend void bonus(OTO &X);
};
void OTO::nhap()
{
    VEHICLE::nhap();
    cout<<"So cho ngoi: ";      cin>>sochongoi;
    cout<<"Dung tich : ";       cin>>dungtich;
}
void OTO::xuat()
{
    VEHICLE::xuat();
    cout<<"So cho ngoi: "<<sochongoi<<endl;
    cout<<"Dung tich : "<<dungtich<<endl;
}
class MOTO: public VEHICLE
{
    float phankhoi;
public:
    void nhap();
    void xuat();
};
void MOTO::nhap()
{
    VEHICLE::nhap();
    cout<<"Phan khoi : ";       cin>>phankhoi;
}
void MOTO::xuat()
{
    VEHICLE::xuat();
    cout<<"Phan khoi : "<<phankhoi<<endl;
}
void bonus(OTO &X)
{
    X.dungtich = 3.0;
}
int main()
{
    OTO X;
    MOTO Y;
    cout<<"Thong tin Oto: "<<endl;
    X.nhap();
    cout<<"Thong tin Moto: "<<endl;
    Y.nhap();

    cout<<"\nThong tin vua nhap:"<<endl;
    cout<<"========OTO========"<<endl;
    X.xuat();
    cout<<"========MOTO========"<<endl;
    Y.xuat();

    bonus(X);
    cout<<"Sua: "<<endl;
    cout<<"========OTO========"<<endl;
    X.xuat();

    return 0;
}
