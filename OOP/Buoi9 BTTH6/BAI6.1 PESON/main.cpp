#include <bits/stdc++.h>

using namespace std;

class PERSON
{
protected:
    char hoten[30], ngaysinh[15], que[30];
};
class KYSU: public PERSON
{
    char nganh[20];
    int namtn;
public:
    void nhap();
    void xuat();
    friend void bonus(KYSU *a, int n);
};
void KYSU::nhap()
{
    cout<<"Ho va ten: ";        fflush(stdin);     gets(hoten);
    cout<<"Ngay sinh: ";        fflush(stdin);     gets(ngaysinh);
    cout<<"Que quan : ";        fflush(stdin);     gets(que);
    cout<<"Nganh    : ";        fflush(stdin);     gets(nganh);
    cout<<"Nam tot nghiep: ";   cin>>namtn;
}
void KYSU::xuat()
{
    cout<<left<<setw(30)<<hoten<<setw(15)<<ngaysinh<<setw(30)<<que<<setw(20)<<nganh<<setw(10)<<namtn<<endl;
}
void bonus(KYSU *a, int n)
{
    int nam = a[0].namtn;
    for(int i=1; i<n; i++)
    {
        if( nam < a[i].namtn)
            nam = a[i].namtn;
    }
    cout<<"Cac ky su tot nghiep gan day: "<<endl;
    cout<<left<<setw(5)<<"STT"<<setw(30)<<"Ho va ten"<<setw(15)<<"Ngay sinh"<<setw(30)<<"Que quan"<<setw(20)<<"Nganh"<<setw(10)<<"Nam tot nghiep"<<endl;
    for(int i=0; i<n; i++)
    {
        if(a[i].namtn == nam )
        {
            cout<<left<<setw(5)<<i+1;
            a[i].xuat();
        }
    }
}
int main()
{
    int n;
    cout<<"n = "; cin>>n;
    KYSU *a;

    a = new KYSU[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Ky su thu "<<i+1<<": "<<endl;
        a[i].nhap();
    }

    cout<<"\nDanh sach gom "<<n<<" ky su la: \n"<<endl;
    cout<<left<<setw(5)<<"STT"<<setw(30)<<"Ho va ten"<<setw(15)<<"Ngay sinh"<<setw(30)<<"Que quan"<<setw(20)<<"Nganh"<<setw(10)<<"Nam tot nghiep"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<left<<setw(5)<<i+1;
        a[i].xuat();
    }

    bonus(a, n);
    return 0;
}
