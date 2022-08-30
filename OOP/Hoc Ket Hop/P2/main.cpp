#include <bits/stdc++.h>

using namespace std;


class PHONG
{
    char maph[10];
    char tenph[30];
    char tentp[30];
public:
    void nhap();
    void xuat();

};
void PHONG::nhap()
{
    cout<<"Ma phong:     "; fflush(stdin);   cin.getline(maph, 10);
    cout<<"Ten phong:    "; fflush(stdin);   cin.getline(tenph, 10);
    cout<<"Truong phong: "; fflush(stdin);   cin.getline(tentp, 10);
}

void PHONG::xuat()
{
    cout<<setw(15)<<"Ten phong: "<<setw(30)<<tenph<<setw(15)<<"Ma phong: "<<setw(15)<<maph<<endl;
    cout<<setw(15)<<"Truong phong: "<<setw(30)<<tentp<<endl;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
