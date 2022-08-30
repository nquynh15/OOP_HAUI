#include <bits/stdc++.h>

using namespace std;

class VE
{
protected:
    float giagoc;
    char ngay[30];
public:
    void nhap();
    void xuat();
};
void VE::nhap()
{
    cout<<"Gia goc: ";  cin>>giagoc;
    cout<<"Ngay : ";    fflush(stdin);  gets(ngay);
}
void VE::xuat()
{
    cout<<"Gia goc: "<<giagoc<<endl;
    cout<<"Ngay : "<<ngay<<endl;
}
class TRE : public VE
{
    float giam;
    float giave;
public:
    void nhap();
    void xuat();
};
void TRE::nhap()
{
    cout<<"Ve tre em: "<<endl;
    VE::nhap();
    cout<<"Giam: ";  cin>>giam;
    cout<<"Gia: ";   cin>>giave;
}
void TRE::xuat()
{
    VE::xuat();
    cout<<"Giam: "<<giam<<"%"<<endl;
    cout<<"Gia : "<<giave<<endl;
}
class NGUOILON : public VE
{
    float giam;
    float giave;
public:
    void nhap();
    void xuat();
};
void NGUOILON::nhap()
{
    cout<<"Ve nguoi lon: "<<endl;
    VE::nhap();
    cout<<"Giam: ";  cin>>giam;
    cout<<"Gia: ";   cin>>giave;
}
void NGUOILON::xuat()
{
    VE::xuat();
    cout<<"Giam: "<<giam<<"%"<<endl;
    cout<<"Gia : "<<giave<<endl;
}
int main()
{
    TRE k;
    NGUOILON q;

    k.nhap();
    q.nhap();

    cout<<" ---Ve Tre Em ----"<<endl;
    k.xuat();

    cout<<" ---Ve Nguoi lon ----"<<endl;
    q.xuat();

    return 0;
}
