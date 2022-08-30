#include <bits/stdc++.h>

using namespace std;

class HINHTHANG
{
    float a, b, h;
public:
    HINHTHANG();
    HINHTHANG(float m, float n, float p);
    friend istream& operator>>(istream&x, HINHTHANG &Q);
    friend ostream& operator<<(ostream&x, HINHTHANG Q);
    float operator !();
    HINHTHANG operator+ (HINHTHANG Q);
    bool operator~();
};
HINHTHANG::HINHTHANG()
{
    a = b = h = 0;
}
HINHTHANG::HINHTHANG(float m, float n, float p)
{
    a = m;
    b = n;
    h = p;
}
istream& operator>>(istream&x, HINHTHANG &Q)
{
    cout<<"Day lon a = ";  x>>Q.a;
    cout<<"Day be  b = ";  x>>Q.b;
    cout<<"Chieu cao h = ";  x>>Q.h;

    return x;
}
ostream& operator<<(ostream&x, HINHTHANG Q)
{
    x<<"( "<<Q.a<<"; "<<Q.b<<"; "<<Q.h<<")";
    return x;
}
float HINHTHANG::operator !()
{
	return (a + b)*h/2;
}
HINHTHANG HINHTHANG::operator+(HINHTHANG Q)
{
    HINHTHANG K;
    K.a = a+ Q.a;
    K.b = b+ Q.b;
    K.h = h+ Q.h;

    return K;
}
bool HINHTHANG::operator~()
{
    float d = (a + b)*h/2;
    if( a==b && d>10)
        return true;
    else
        return false;
}
int main()
{
    HINHTHANG P, Q, K;
    cout<<"Nhap thong tin hinh thang P: "<<endl;
    cin>>P;
    cout<<"Nhap thong tin hinh thang Q: "<<endl;
    cin>>Q;
    K = P + Q;
    cout<<"HAI HINH THANG VUA NHAP: "<<endl;
    cout<<"P: "<<P<<setw(20)<<"Dien tich: "<<!P<<endl;
    cout<<"Q: "<<Q<<setw(20)<<"Dien tich: "<<!Q<<endl;

    ofstream tep("E:/HINHTHANG15.txt", ios::out);
    tep<<"HAI HINH THANG VUA NHAP: "<<endl;
    tep<<"P"<<P<<setw(20)<<"Dien tich: "<<!P<<endl;
    tep<<"Q"<<Q<<setw(20)<<"Dien tich: "<<!Q<<endl;
    tep<<"HINH THANG TONG: "<<endl;
    tep<<K<<endl;;
    tep.close();

    if(~P)
        cout<<"Hinh thang P la hinh thoi voi dien tich lon hon 10"<<endl;
    else
        cout<<"Hinh thang P khong phai hinh thoi hoac P khong co dien tich lon hon 10!"<<endl;
    if(~Q)
        cout<<"Hinh thang Q la hinh thoi voi dien tich lon hon 10"<<endl;
    else
        cout<<"Hinh thang Q khong phai hinh thoi hoac P khong co dien tich lon hon 10!"<<endl;


    return 0;
}
