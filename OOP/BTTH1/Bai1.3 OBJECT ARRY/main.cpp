#include <bits/stdc++.h>

using namespace std;

class HANG
{
    char mahang[32];
    char tenhang[32];
    float dongia;
    int soluong;
public:
    void nhap();
    void xuat();
};

void HANG::nhap()
{
    cout<<"Ma hang : ";  fflush(stdin);  cin.getline(mahang, 32);
    cout<<"Ten hang: ";  fflush(stdin);  cin.getline(tenhang, 32);
    cout<<"Don gia : ";  cin>>dongia;
    cout<<"soluong : ";  cin>>soluong;
}
void HANG::xuat()
{
    cout<<setw(32)<<mahang<<setw(32)<<tenhang<<setw(10)<<dongia<<setw(10)<<soluong<<endl;
}

int main()
{
    int n;
    HANG *a;
    a = new HANG[n];
    cout<<"n = "; cin>>n;
    for(int i=0; i<n; i++)
    {
        a[i].nhap();
    }
    cout<<setw(32)<<"Ma hang"<<setw(32)<<"Ten hang"<<setw(10)<<"Don gia"<<setw(10)<<"So luong"<<endl;
    for(int i=0; i<n; i++)
    {
        a[i].xuat();
    }

    return 0;
}
