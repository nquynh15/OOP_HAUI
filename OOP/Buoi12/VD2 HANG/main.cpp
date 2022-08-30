#include <bits/stdc++.h>

using namespace std;

class HANG
{
protected:
    char mah[20];
    float dg;
    int sl;
public:
    void nhap();
    void xuat();
    friend void bonus(HANG &k, float newprice);
};
void HANG::nhap()
{
    cout<<"Ma hang: ";      fflush(stdin);  gets(mah);
    cout<<"Don gia: ";      cin>>dg;
    cout<<"So luong: ";     cin>>sl;
}void HANG::xuat()
{
    cout<<"Ma hang: "<<mah<<endl;
    cout<<"Don gia: "<<dg<<endl;
    cout<<"So luong: "<<sl<<endl;
}
class HANGMAYMAC : public HANG
{
    char chatlieu[15];
    char Sizee[5];
public:
    void nhap();
    void xuat();
    friend void bonus1 ( HANGMAYMAC &b);
};
void HANGMAYMAC::nhap()
{
    HANG::nhap();
    cout<<"Chat lieu: ";      fflush(stdin);  gets(chatlieu);
    cout<<"Size: ";           fflush(stdin);  gets(Sizee);
}
void HANGMAYMAC::xuat()
{
    cout<<"\n--THONG TIN HANG MAY MAC--"<<endl;
    HANG::xuat();
    cout<<"Chat lieu: "<<chatlieu<<endl;
    cout<<"Size: "<<Sizee<<endl;
}
class HANGDIENTU : public HANG
{
    float dienap, congsuat;
public:
    void nhap();
    void xuat();
    friend void bonus2 ( HANGDIENTU &c);
};
void HANGDIENTU::nhap()
{
    HANG::nhap();
    cout<<"Dien ap : ";      cin>>dienap;
    cout<<"Cong suat: ";     cin>>congsuat;
}void HANGDIENTU::xuat()
{
    cout<<"\n--THONG TIN HANG DIEN TU--"<<endl;
    HANG::xuat();
    cout<<"Dien ap: "<<dienap<<endl;
    cout<<"Cong suat: "<<congsuat<<endl;
}
/*
void bonus1 ( HANGMAYMAC &b)
{
    b.dg = 40;
}
void bonus2 ( HANGDIENTU &c)
{
    c.dg = 80;
}*/
void bonus(HANG &k, float newprice)
{
    k.dg = newprice;
}
int main()
{
    HANGMAYMAC b;
    HANGDIENTU c;

    b.nhap();
    c.nhap();
    b.xuat();
    c.xuat();

    /*bonus1(b);  b.xuat();
    bonus2(c);  c.xuat();*/
    bonus(b, 40);   b.xuat();
    bonus(c, 80);   c.xuat();

    return 0;
}
