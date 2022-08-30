#include <bits/stdc++.h>

using namespace std;

class SOPHUC
{
    float a, b;
public:
    SOPHUC ();
    SOPHUC (float x, float y);
    friend ostream& operator<<(ostream& z, SOPHUC t);
    SOPHUC operator+ (SOPHUC SP2);
    SOPHUC operator- (SOPHUC SP2);
};
SOPHUC::SOPHUC()
{
    a= b = 0;
}
SOPHUC::SOPHUC (float x, float y)
{
    a = x;
    b = y;
}
ostream& operator<<(ostream& z, SOPHUC t)
{
    z<<t.a<<"+i*"<<t.b;
    return z;
}
SOPHUC SOPHUC::operator+ (SOPHUC SP2)
{
    SOPHUC SP3;
    SP3.a = a + SP2.a;
    SP3.b = b + SP2.b;

    return SP3;
}
SOPHUC SOPHUC::operator- (SOPHUC SP2)
{
    SOPHUC SP4;
    SP4.a = a - SP2.a;
    SP4.b = b - SP2.b;

    return SP4;
}
int main()
{
    SOPHUC SP1(2,3);
    cout<<"So phuc thu nhat: "<<SP1<<endl;
    SOPHUC SP2(1,2);
    cout<<"So phuc thu nhat: "<<SP2<<endl;

    SOPHUC SP3;
    SP3 = SP1+SP2;
    SOPHUC SP4;
    SP4 = SP1-SP2;


    cout<<SP1<<" + "<<SP2<<" = "<<SP3<<endl;
    cout<<SP1<<" - "<<SP2<<" = "<<SP4<<endl;

    ofstream tep("E:/SOPHUC.txt", ios::out);
    tep<<SP1<<endl;
    tep<<SP2<<endl;
    tep<<SP1<<" + "<<SP2<<" = "<<SP3<<endl;
    tep<<SP1<<" - "<<SP2<<" = "<<SP4<<endl;
    tep.close();


    return 0;
}
