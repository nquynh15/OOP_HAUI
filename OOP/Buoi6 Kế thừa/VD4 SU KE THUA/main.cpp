#include <bits/stdc++.h>

using namespace std;
class MAY
{
protected:
    char
};
class MAYTINH : public MAY
{
    float CPU, RAM, HDD;
public:
    void NHAP();
    void xuat();
};
void MAYTINH::nhap()
{
    cout<<"Ma may:  ";      fflush(stdin);  gets(mamay);
    cout<<"Loai may:  ";    fflush(stdin);  gets(mamay);
    cout<<"Nhan hieu:  ";   fflush(stdin);  gets(mamay);
    cout<<"Gia : ";         cin>>gia;
    cout<<"CPU : ";         cin>>CPU;
    cout<<"RAM : ";         cin>>RAM;
    cout<<"HDD : ";         cin>>HDD;
}
void MAYTINH::xuat()
{
    cout<<"Ma may:  "<<mamay<<endl;
    cout<<"Loai may:  "<<mamay<<endl;
    cout<<"Nhan hieu:  "<<mamay<<endl;
    cout<<"Gia : "<<gia<<endl;
    cout<<"CPU : "<<CPU<<endl;
    cout<<"RAM : "<<RAM<<endl;
    cout<<"HDD : "<<HDD<<endl;
}
int main()
{
    MAYTINH K;
    K.nhap();
    K.xuat();

    return 0;
}
