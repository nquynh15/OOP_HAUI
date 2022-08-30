#include <bits/stdc++.h>

using namespace std;

class TAMTHUC
{
    float a, b,c;
public:
    TAMTHUC();
    TAMTHUC(float x, float y, float z);
    friend ostream& operator<<(ostream& os, TAMTHUC p);
    TAMTHUC operator+ (TAMTHUC Q);
    TAMTHUC operator- (TAMTHUC Q);
    TAMTHUC operator-- ();
};
TAMTHUC::TAMTHUC()
{
    a = b= c= 0;
}
TAMTHUC::TAMTHUC(float x, float y, float z)
{
    a = x;
    b = y;
    c = z;
}
ostream& operator<<(ostream& ou, TAMTHUC p)
{
    ou<<p.a<<"x"<<(char)178<<" + "<<p.b<<"x"<<" + "<<p.c<<endl;
    return ou;
}
TAMTHUC TAMTHUC::operator-- ()
{
    TAMTHUC K;
    K.a = -a;
    K.b = -b;
    K.c = -c;

    return K;
}
TAMTHUC TAMTHUC::operator+ (TAMTHUC Q)
{
    TAMTHUC K;
    K.a = a + Q.a;
    K.b = b + Q.b;
    K.c = c + Q.c;

    return K;
}
TAMTHUC TAMTHUC::operator- (TAMTHUC Q)
{
    TAMTHUC K;
    K.a = a - Q.a;
    K.b = b - Q.b;
    K.c = c - Q.c;

    return K;
}
int main()
{
    TAMTHUC P(1,2,3), Q(3, 8, 4);
    cout<<"P = "<<P<<endl;
    cout<<"Q = "<<Q<<endl;
    P = --P;
    Q = --Q;
    cout<<"Tam thuc sau khi doi dau: "<<endl;
    cout<<"P = "<<P<<endl;
    cout<<"Q = "<<Q<<endl;
    TAMTHUC H, K;
    H = P+Q;
    K = P-Q;
    cout<<"H = P+Q = "<<H<<endl;
    cout<<"K = P-Q = "<<K<<endl;

    ofstream tep("E:/TAMTHUC.txt", ios::out);
    tep<<"P = "<<P<<endl;
    tep<<"Q = "<<Q<<endl;
    tep<<"Tam thuc sau khi doi dau: "<<endl;
    tep<<"P = "<<--P<<endl;
    tep<<"Q = "<<--Q<<endl;
    tep<<"H = P+Q = "<<H<<endl;
    tep<<"K = P-Q = "<<K<<endl;
    tep.close();

    return 0;
}
