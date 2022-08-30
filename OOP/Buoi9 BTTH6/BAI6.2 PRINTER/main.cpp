#include <bits/stdc++.h>

using namespace std;

class PRINTER
{
protected:
    float trl;
    char hangsx[20];
    int namsx;
    int tocdo;
};
class DOTPRINTER: public PRINTER
{
    int matdokim;
public:
    void nhap();
    void xuat();
    friend void bonus(DOTPRINTER &X);
};
void DOTPRINTER::nhap()
{
    cout<<"Trong luong  : ";    cin>>trl;
    cout<<"Hang san xuat: ";    fflush(stdin);      gets(hangsx);
    cout<<"Nam san xuat : ";    cin>>namsx;
    cout<<"Toc do: ";           cin>>tocdo;
    cout<<"Mat do kim : ";      cin>>matdokim;
}
void DOTPRINTER::xuat()
{
    cout<<"Trong luong  : "<<trl<<endl;
    cout<<"Hang san xuat: "<<hangsx<<endl;
    cout<<"Nam san xuat : "<<namsx<<endl;
    cout<<"Toc do: "<<tocdo<<" trang/phut"<<endl;
    cout<<"Mat do kim : "<<matdokim<<endl;
}
class LASERPRINTER: public PRINTER
{
    int dophangiai;
public:
    void nhap();
    void xuat();
    friend void bonus(LASERPRINTER &Y);
};
void LASERPRINTER::nhap()
{
    cout<<"Trong luong  : ";    cin>>trl;
    cout<<"Hang san xuat: ";    fflush(stdin);      gets(hangsx);
    cout<<"Nam san xuat : ";    cin>>namsx;
    cout<<"Toc do: ";           cin>>tocdo;
    cout<<"Do phan giai : ";    cin>>dophangiai;
}
void LASERPRINTER::xuat()
{
    cout<<"Trong luong  : "<<trl<<endl;
    cout<<"Hang san xuat: "<<hangsx<<endl;
    cout<<"Nam san xuat : "<<namsx<<endl;
    cout<<"Toc do: "<<tocdo<<" trang/phut"<<endl;
    cout<<"Do phan giai : "<<dophangiai<<endl;
}
void bonus(DOTPRINTER &X)
{
    X.namsx = 2021;
}
void bonus(LASERPRINTER &Y)
{
    Y.namsx = 2021;
}
int main()
{
    DOTPRINTER X;
    LASERPRINTER Y;
    cout<<"May in Laser: "<<endl;
    Y.nhap();
    cout<<"May in kim: "<<endl;
    X.nhap();

    cout<<"\nThong tin vua nhap:"<<endl;
    cout<<"=======May in Laser========"<<endl;
    Y.xuat();
    cout<<"=======May in kim==========="<<endl;
    X.xuat();
    cout<<"Sua: "<<endl;
    bonus(X);
    bonus(Y);
    cout<<"=======May in kim==========="<<endl;
    X.xuat();
    cout<<"=======May in Laser========"<<endl;
    Y.xuat();

    return 0;
}
