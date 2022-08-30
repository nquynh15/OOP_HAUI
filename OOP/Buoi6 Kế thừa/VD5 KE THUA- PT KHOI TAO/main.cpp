#include <bits/stdc++.h>

using namespace std;
class HINH
{
protected:
    int MS;
    int VI;
public:
    void nhap();
    void xuat();
    HINH(int x, int y);
};
void HINH::nhap()
{
    cout<<"Mau sac: ";  cin>>MS;
    cout<<"Vien   : ";  cin>>VI;
}
void HINH::xuat()
{
    cout<<"Mau sac: "<<MS<<endl;
    cout<<"Vien   : "<<VI<<endl;
}
HINH::HINH(int x, int y)
{
    MS = x;
    VI = y;
}
class HCN:public HINH
{
    float d,r;
public:
    void nhap();
    void xuat();
    HCN(int x, int y, float z, float t);
};
HCN::HCN(int x, int y, float z, float t) : HINH(x, y)
{
    MS = x;
    VI = y;
    d = z;
    r = t;
}
void HCN::nhap()
{
    HINH::nhap();
    cout<<"Dai  d = ";  cin>>d;
    cout<<"Rong r = ";  cin>>r;
}
void HCN::xuat()
{
    HINH::xuat();
    cout<<"d = "<<d<<endl;
    cout<<"r = "<<r<<endl;
}

int main()
{
    HCN k(1, 3, 5, 2);
    //sinh ra hai dtg: mot HINH(can co doi cho doi tuong nay) va mot HCN k;

    return 0;
}
