#include <bits/stdc++.h>

using namespace std;

class TAMTHUC
{
    float a, b,c;
public:
    void nhap();
    void xuat();
    TAMTHUC operator+ (TAMTHUC Q);
    TAMTHUC operator- ();
};
TAMTHUC TAMTHUC::operator+ (TAMTHUC Q)
{
    TAMTHUC K;
    K.a = /*this ->*/a + Q.a;
    K.b = b + Q.b;
    K.c = c + Q.c;

    return K;
}
TAMTHUC TAMTHUC::operator- ()
{
    TAMTHUC K;
    K.a = -a;
    K.b = -b;
    K.c = -c;

    return *this;
}
void TAMTHUC::nhap()
{
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;
}
void TAMTHUC::xuat()
{
    cout<<a<<"x"<<(char)253<<" + "<<b<<"x"<<" + "<<c<<endl;
}
int main()
{
    TAMTHUC P, Q;
    P.nhap();
    Q.nhap();
    P.xuat();
    Q.xuat();

    TAMTHUC K;
    K = P+Q;
    K.xuat();

    K = -K;
    K.xuat();


    return 0;
}
