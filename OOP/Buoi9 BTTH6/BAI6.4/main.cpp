#include <bits/stdc++.h>

using namespace std;

class ELECTONIC
{
protected:
    float congsuat;
    int dienap;
public:
    ELECTONIC (float a, int b);
};
ELECTONIC::ELECTONIC(float a, int b)
{
    congsuat = a;
    dienap = b;
}
class MAYGIAT: public ELECTONIC
{
    float dungtich;
    char loai[10];
public:
    MAYGIAT(float a, int b, float c, char *d);
    void xuat();
};
MAYGIAT::MAYGIAT(float a, int b, float c, char *d): ELECTONIC(a, b)
{
    dungtich = c;
    strcpy (loai, d);
}
void MAYGIAT::xuat()
{
    cout<<"Cong suat : "<<congsuat<<endl;
    cout<<"Dien ap   : "<<dienap<<endl;
    cout<<"Dung tich : "<<dungtich<<endl;
    cout<<"Loai: "<<loai<<endl;
}
class TULANH: public ELECTONIC
{
    float dungtich;
    int songan;
public:
    TULANH(float a, int b, float x, int y);
    void xuat();
};
TULANH::TULANH(float a, int b, float x, int y): ELECTONIC(a, b)
{
    dungtich = x;
    songan = y;
}
void TULANH::xuat()
{
    cout<<"Cong suat : "<<congsuat<<endl;
    cout<<"Dien ap   : "<<dienap<<endl;
    cout<<"Dung tich : "<<dungtich<<endl;
    cout<<"So ngan: "<<songan<<endl;
}
int main()
{
    MAYGIAT X(1100, 220, 9, "cua truoc");
    TULANH Y(1000, 220, 20, 4);

    cout<<"=====May giat===="<<endl;
    X.xuat();
    cout<<"=====Tu lanh===="<<endl;
    Y.xuat();

    return 0;
}
