#include <bits/stdc++.h>

using namespace std;

class NGUOI
{
protected:
    char hoten[30];
    int tuoi;
public:
    void nhap();
    void xuat();
};
void NGUOI::nhap()
{
    cout<<"Ho va ten: ";    fflush(stdin);  gets(hoten);
    cout<<"Tuoi: ";     cin>>tuoi;
}
void NGUOI::xuat()
{
    cout<<left<<setw(30)<<hoten<<setw(7)<<tuoi;
}
class BENHVIEN
{
    char tenbv[30], diachi[20], giamdoc[30];
    friend class BENHNHAN;
};
class BENHNHAN : public NGUOI
{
    char ma[10], tieusu[30], chandoan[20];
    BENHVIEN x;
public:
    void nhap();
    void xuat();
    friend class BENHVIEN;
    friend void DEM( BENHNHAN *k, int n);
    friend void SUA(BENHNHAN *k, int n);
};
void BENHNHAN::nhap()
{
    NGUOI::nhap();
    cout<<"Ma: ";           fflush(stdin);  gets(ma);
    cout<<"Tieu su: ";      fflush(stdin);  gets(tieusu);
    cout<<"Chan doan: ";    fflush(stdin);  gets(chandoan);
    cout<<"Ten benh vien: ";        fflush(stdin);  gets(x.tenbv);
    cout<<"Dia chi benh vien: ";    fflush(stdin);  gets(x.diachi);
    cout<<"Giam doc benh vien: ";   fflush(stdin);  gets(x.giamdoc);
}
void BENHNHAN::xuat()
{
    NGUOI::xuat();
    cout<<left<<setw(10)<<ma<<setw(30)<<tieusu<<setw(20)<<chandoan<<setw(30)<<x.tenbv<<setw(20)<<x.diachi<<setw(30)<<x.giamdoc<<endl;
}
void DEM( BENHNHAN *k, int n)
{
    int d=0;
    for(int i=0; i<n; i++)
    {
        if (k[i].tuoi > 30 )
            d++;
    }
    cout<<"So benh nhan lon hon 30 tuoi la: "<<d<<endl;
}
void SUA(BENHNHAN *k, int n)
{
    for(int i=0; i<n; i++)
    {
        if (strcmp(k[i].ma, "BN01") )
            k[i].tuoi = 20;
    }
}
int main()
{
    int n;
    cout<<"So luong benh nhan: ";       cin>>n;
    BENHNHAN *k;
    k = new BENHNHAN[n];
    for(int i=0; i<n; i++)
    {
        cout<<"\tBenh nhan thu "<<i+1<<": "<<endl;
        k[i].nhap();
    }
    cout<<"\n----XUAT THONG TIN----"<<endl;
    cout<<left<<setw(30)<<"Ho va ten"<<setw(7)<<"Tuoi"<<setw(10)<<"Ma"<<setw(30)<<"Tieu su"<<setw(20)<<"Chan doan"<<setw(30)<<"Benh vien"<<setw(20)<<"Dia chi"<<setw(30)<<"Giam doc BV"<<endl;
    for(int i=0; i<n; i++)
        k[i].xuat();

    DEM(k, n);
    SUA(k, n);
    cout<<"\nThong tin sau khi sua: "<<endl;
    cout<<left<<setw(30)<<"Ho va ten"<<setw(7)<<"Tuoi"<<setw(10)<<"Ma"<<setw(30)<<"Tieu su"<<setw(20)<<"Chan doan"<<setw(30)<<"Benh vien"<<setw(20)<<"Dia chi"<<setw(30)<<"Giam doc BV"<<endl;
    for(int i=0; i<n; i++)
        k[i].xuat();

    return 0;
}
