#include <bits/stdc++.h>

using namespace std;

class SACH
{
    char masach[30];
    char tensach[30];
    char nxb[30];
    float sotrang;
    float giatien;
public:
    void nhap();
    void xuat();
};
void SACH::nhap()
{
    cout<<"\nMa sach    : ";   fflush(stdin);  cin.getline(masach, 30);
    cout<<"Ten sach     : ";   fflush(stdin);  cin.getline(tensach, 30);
    cout<<"Nha xuat ban : ";   fflush(stdin);  cin.getline(nxb, 30);
    cout<<"So trang : ";       cin>>sotrang;
    cout<<"Gia tien : ";       cin>>giatien;
}
void SACH::xuat()
{
    cout<<left<<setw(30)<<masach<<setw(30)<<tensach<<setw(30)<<nxb<<setw(15)<<sotrang<<setw(10)<<giatien<<endl;
}
int main()
{
    SACH *x;
    int n;
    cout<<"n = ";  cin>>n;

    x = new SACH[n];

    for(int i=0; i<n; i++)
    {
        x[i].nhap();
    }

    cout<<left<<setw(30)<<"Ma sach"<<setw(30)<<"Ten sach"<<setw(30)<<"Nha xuat ban"<<setw(15)<<"So trang"<<setw(10)<<"Gia tien"<<endl;
    for(int i=0; i<n; i++)
    {
        x[i].xuat();
    }

    return 0;
}

/*
class Sach{
private:
	char maS[20];
	char tenS[30];
	char nxb[30];
	int soTrang;
	int giaTien;
public:
	void nhap();
	void xuat();
};
void Sach::nhap(){
	cout<<"\nNhap ma sach     : "; fflush(stdin); gets(maS);
	cout<<"Nhap ten sach    : "; fflush(stdin); gets(tenS);
	cout<<"Nhap nha xuat ban: "; fflush(stdin); gets(nxb);
	cout<<"Nhap so trang    : "; cin>>soTrang;
	cout<<"Nhap gia tien    : "; cin>>giaTien;
}
void Sach::xuat(){
	cout<<left<<setw(20)<<maS<<setw(30)<<tenS<<setw(30)<<nxb<<setw(12)<<soTrang<<setw(12)<<giaTien<<endl;
}
int main(){
	Sach *a;
	int n;
	cin>>n;
	a = new Sach[n];
	for(int i= 0;i<n;i++){
		a[i].nhap();
	}
	cout<<left<<setw(20)<<"Ma Sach"<<setw(30)<<"Ten Sach"<<setw(30)<<"Nha xuat ban"<<setw(12)<<"So Trang"<<setw(12)<<"Gia Tien"<<endl;
	for(int i= 0;i<n;i++){
		a[i].xuat();
	}
	return 0;
}*/

