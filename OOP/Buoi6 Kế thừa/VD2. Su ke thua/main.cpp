#include <bits/stdc++.h>

using namespace std;

class PERSON
{
protected:
    char hoten[30];
    int tuoi;
    char diachi[30];
public:
    void nhap();
    void xuat();
};
void PERSON::nhap()
{
    cout<<"Ho va ten: "; fflush(stdin);  gets(hoten);
    cout<<"Tuoi : ";     cin >> tuoi;
    cout<<"Dia chi: "; fflush(stdin);  gets(diachi);
}
void PERSON::xuat()
{
    cout<<setw(30)<<hoten<<setw(10)<<tuoi<<setw(30)<<diachi<<endl;
}
class STUDENT : public PERSON
{
    char lop[30];
    char nganh[30];
    char truong[30];
public:
    void nhap();
    void xuat();
};
void STUDENT::nhap()
{
    PERSON::nhap();
    cout<<"Lop : ";     fflush(stdin);  gets(lop);
    cout<<"Nganh: ";    fflush(stdin);  gets(nganh);
    cout<<"Truong: ";   fflush(stdin);  gets(truong);
}
void STUDENT::xuat()
{

    cout<<"\nLop : "<<lop<<endl;
    cout<<"Nganh: "<<nganh<<endl;
    cout<<"Truong: "<<truong<<endl;
    PERSON::xuat();

}
int main()
{

    STUDENT k;
    k.nhap();
    k.xuat();
    return 0;
}
