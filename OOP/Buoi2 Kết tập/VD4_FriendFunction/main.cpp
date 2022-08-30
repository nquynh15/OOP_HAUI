#include <iostream>

using namespace std;

class TRUONG;
class KHOA
{
    char MAKH[32];
    char TENKH[32];
    int SGV;
public:
    friend class TRUONG;
    /*char* getMAKH()
    {
        return MAKH;
    }
    void setMAKH(char* ma)
    {
        strcpy(MAKH, ma);
    }*/
    friend void TIMKIEM(TRUONG k);
    friend void SAPXEP(TRUONG k);
};
class TRUONG
{
    char MATR[32];
    char TENTR[32];
    KHOA *x;
    int n;
 public:
    void nhap();
    void xuat();
    friend void TIMKIEM(TRUONG k);
    friend void SAPXEP(TRUONG k);
};
void TRUONG::nhap()
{
    cout<<"Ma truong  : "; fflush(stdin); gets(MATR);
    cout<<"Ten truong : "; fflush(stdin); gets(TENTR);
    cout<<"n = "; cin>>n;

    x = new KHOA[n];
    for(int i=0; i<n; i++)
    {
        char ma[32];

        cout<<"Ma Khoa      : "; fflush(stdin); gets(x[i].MAKH);
        cout<<"Ten Khoa     : "; fflush(stdin); gets(x[i].TENKH);
        cout<<"So giao vien : "; cin>>x[i].SGV;
    }
}
void TRUONG::xuat()
{
    cout<<"Ma truong  : "<<MATR<<endl;
    cout<<"Ten truong : "<<MATR<<endl;
    for(int i=0; i<n; i++)
        cout<<setw(32)<<x[i].MAKH<<setw(32)<<x[i].TENKH<<setw(10)<<x[i].SGV<<endl;
}
void TIMKIEM(TRUONG k /* Ham main co cai gi thi khai bao cai ay*/)
{
    int d = 0;
    for(int i=0; i<k.n; i++)
        if(strcmp(k.x[i].TENKH, "CNTT") == 0)
        d++;
    if ( d==0)
        cout<<"Khong co khoa CNTT";
    else
        cout<<"Co khoa CNTT";
}
void SAPXEP(TRUONG k) /*khi sua doi vao bien binh thuong trong mang ( ten truong,..) thi phai dung &k*/
{
    for(int i=0; i<k.n; i++)
        for(int j=i+1; j<k.n; j++) /* nhung khi thay doi thuoc tinh ngoai mang (thay doi n hay chen them khoa) thi phai dung &k*/
        if(k.x[i].SGV > k.x[j].SGV)
        swap(k.x[i], k.x[j]);
}
int main()
{
    TRUONG k;
    k.nhap();
    k.xuat();
    TIMKIEM(k);
    SAPXEP(k);

    return 0;
}
