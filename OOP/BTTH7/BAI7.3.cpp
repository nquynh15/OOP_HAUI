#include <bits/stdc++.h>

using namespace std;

class BAN
{
    char maban[10], tenban[20], ngaylap[10];
public:
    friend class TRUONGDH;
};
class KHOA
{
    char makhoa[10], tenk[20], truongk[30];
public:
    friend class TRUONGDH;
};
class TRUONG
{
protected:
    char matr[10], tentr[30], diachi[30];
public:
    void nhap();
    void xuat();
};
void TRUONG::nhap()
{
    cout<<"Ma truong: ";     fflush(stdin);  gets(matr);
    cout<<"Ten truong: ";    fflush(stdin);  gets(tentr);
    cout<<"Dia chi : ";      fflush(stdin);  gets(diachi);
}
void TRUONG::xuat()
{
    cout<<"Ma truong: "<<matr<<endl;
    cout<<"Ten truong: "<<tentr<<endl;
    cout<<"Dia chi : "<<diachi<<endl;
}
class TRUONGDH: public TRUONG
{
    KHOA *x;
    int n;
    BAN *y;
    int m;
public:
    void nhap();
    void xuat();
};
void TRUONGDH::nhap()
{
    TRUONG::nhap();
    cout<<"So khoa: "; cin>>n;
    x = new KHOA[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Ma khoa: ";      fflush(stdin);  gets(x[i].makhoa);
        cout<<"Ten khoa: ";     fflush(stdin);  gets(x[i].tenk);
        cout<<"Truong khoa: ";  fflush(stdin);  gets(x[i].truongk);
    }
    cout<<"So ban: ";   cin>>m;
    y = new BAN[m];
    for(int i=0; i<m; i++)
    {
        cout<<"Ma ban: ";      fflush(stdin);  gets(y[i].maban);
        cout<<"Ten ban: ";     fflush(stdin);  gets(y[i].tenban);
        cout<<"Ngay thanh lap: ";  fflush(stdin);  gets(y[i].ngaylap);
    }
}
void TRUONGDH::xuat()
{
    TRUONG::xuat();
    cout<<"Ma truong: "<<matr<<endl;
    cout<<"Ten truong: "<<tentr<<endl;
    cout<<"Dia chi : "<<diachi<<endl;

    cout<<"Thong tin "<<n<<" khoa: "<<endl;
    cout<<setw(10)<<"Ma khoa"<<setw(20)<<"Ten khoa"<<setw(30)<<"Truong khoa"<<endl;
    for(int i=0; i<n; i++)
        cout<<setw(10)<<x[i].makhoa<<setw(20)<<x[i].tenk<<setw(30)<<x[i].truongk<<endl;

    cout<<"Thong tin "<<m<<" ban: "<<endl;
    cout<<setw(10)<<"Ma ban"<<setw(20)<<"Ten ban"<<setw(30)<<"Ngay thanh lap"<<endl;
    for(int i=0; i<m; i++)
        cout<<setw(10)<<y[i].maban<<setw(20)<<y[i].tenban<<setw(30)<<y[i].ngaylap<<endl;

}

int main()
{
    TRUONGDH k;
    k.nhap();
    cout<<"\n--------INFORMATION-------"<<endl;
    k.xuat();

    return 0;
}
