#include <bits/stdc++.h>

using namespace std;

class SINHVIEN
{
    char masv[20], hoten[30];
    int tuoi;
public:
    friend istream& operator>>( istream& x, SINHVIEN &y);
    friend ostream& operator<< (ostream &x, SINHVIEN y);
};
istream& operator>>( istream& x, SINHVIEN &y)
{
    /*cout<<"Ma sinh vien: ";*/     fflush(stdin);       x.getline(y.masv, 20);
    /*cout<<"Ho ten: ";   */        fflush(stdin);        x.getline(y.hoten, 30);
    /*cout<<"Tuoi: ";*/             x>>y.tuoi;      x.ignore();
    return x;
}
ostream& operator<< (ostream &x, SINHVIEN y)
{
    x<<setw(20)<<y.masv<<setw(33)<<y.hoten<<setw(10)<<y.tuoi<<endl;
    return x;

}
int main()
{
    SINHVIEN k;
    cin>>k;
    cout<<k;

    //nhap xuat voi tep
    ofstream tep;
    tep.open("E:/TESTTHU.txt", ios::out);
    tep<<k;
    tep.close();

    //doc tep, sau khi viet them 1 doi tuong nua vao tep
    SINHVIEN Q;
    ifstream f;
    f.open("E:/TESTTHU.txt", ios::in);
    f>>k;
    f>>Q;
    f.close();
    cout<<k<<endl;
    cout<<Q<<endl;

    return 0;
}
