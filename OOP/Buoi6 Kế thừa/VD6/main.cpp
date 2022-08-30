#include <bits/stdc++.h>

using namespace std;

class HANG
{
protected:
    char mahang[30];
    float dg;
    int sl;
public:
    void nhap();
    void xuat();
};
void HANG::nhap()
{
    cout<<"Ma hang : "; fflush(stdin);  gets(mahang);
    cout<<"Don gia : "; cin>>dg;
    cout<<"So luong: "; cin>>sl;
}
void HANG::xuat()
{
    cout<<"Ma hang : "<<mahang<<endl;
    cout<<"Don gia : "<<dg<<endl;
    cout<<"So luong: "<<sl<<endl;
}
class HANGMAYMAC : public HANG
{
    char chatlieu[30];
    int siz;
public:
    void nhap();
    void xuat();
};
void HANGMAYMAC::nhap()
{
    HANG::nhap();
    cout<<"Chat lieu: "; fflush(stdin);  gets(chatlieu);
    cout<<"Size : "; cin>>siz;
}
void HANGMAYMAC::xuat()
{
    HANG::xuat();
    cout<<"Chat lieu: "<<chatlieu<<endl;
    cout<<"Size : "<<siz<<endl;
}
int main()
{
    HANGMAYMAC k;
    k.nhap();
    k.xuat();

    return 0;
}
