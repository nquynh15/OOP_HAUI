#include <bits/stdc++.h>

using namespace std;

class PHIEU;
class NCC
{
    char mancc[20];
    char tenncc[30];
    char diachi[30];
    char sdt[15];
public:
    void nhap();
    void xuat();
};
void NCC::nhap()
{
    cout<<"Ma nha cung cap : ";   fflush(stdin);   gets(mancc);
    cout<<"Ten nha cung cap: ";   fflush(stdin);   gets(tenncc);
    cout<<"Dia chi         : ";   fflush(stdin);   gets(diachi);
    cout<<"So dien thoai   : ";   fflush(stdin);   gets(sdt);
}
void NCC::xuat()
{
    cout<<left<<setw(17)<<"Ma nha cung cap: "<<setw(23)<<mancc<<setw(18)<<"Ten nha cung cap: "<<setw(30)<<tenncc<<endl;
    cout<<left<<setw(10)<<"Dia chi: "<<setw(30)<<diachi<<setw(5)<<"SDT: "<<setw(15)<<sdt<<endl;
}

class SANPHAM
{
    char masp[10];
    char tensp[25];
    int sl;
    int dongia;
public:
    void nhap();
    void xuat();
    friend class PHIEU;
    friend void dem(PHIEU K);
    friend void sx(PHIEU K);
};
void SANPHAM::nhap()
{
    cout<<"Ma san pham : ";   fflush(stdin);   gets(masp);
    cout<<"Ten san pham: ";   fflush(stdin);   gets(tensp);
    cout<<"So luong    : ";   cin>>sl;
    cout<<"Don gia     : ";   cin>>dongia;
}
void SANPHAM::xuat()
{
    cout<<left<<setw(10)<<masp<<setw(25)<<tensp<<setw(10)<<sl<<setw(15)<<dongia<<setw(20)<<sl*dongia<<endl;
}
class PHIEU
{
    char maphieu[20];
    char ngay[10];
    NCC X;
    SANPHAM *Y;
    int n;
public:
    void nhap();
    void xuat();
    friend void dem(PHIEU K);
    friend void sx(PHIEU K);

};
void PHIEU::nhap()
{
    cout<<"Ma phieu: "; fflush(stdin);  gets(maphieu);
    cout<<"Ngay lap: "; fflush(stdin);  gets(ngay);

    X.nhap();
    cout<<"n = "; cin>>n;
    Y = new SANPHAM[n];

    for(int i=0; i<n; i++)
        Y[i].nhap();
}
void PHIEU::xuat()
{
	cout<<"\n-----------------------------------------------------"<<endl;
	cout<<"Dai hoc Victory"<<endl;
	cout<<setw(50)<<"PHIEU NHAP VAN PHONG PHAM"<<endl;

    cout<<left<<"Ma phieu: "<<setw(30)<<maphieu<<setw(10)<<"Ngay lap: "<<ngay<<endl;
    X.xuat();

    cout<<left<<setw(10)<<"Ma SP"<<setw(25)<<"Ten san pham"<<setw(10)<<"So luong"<<setw(15)<<"Don gia"<<setw(20)<<"Thanh tien"<<endl;
    for(int i=0; i<n; i++)
        Y[i].xuat();

    float tien = 0;
    for(int i=0; i<n; i++)
        tien = tien + Y[i].sl * Y[i].dongia;
    cout<<setw(70)<<"Tong"<<setw(15)<<tien<<endl;
    cout<<"\n"<<endl;
    cout<<setw(30)<<"Hieu truong"<<setw(30)<<"Phong tai chinh"<<setw(30)<<"Nguoi lap"<<endl;
}
void dem(PHIEU K)
{
	int d=0;
	for(int i=0; i<K.n; i++)
        if( K.Y[i].sl < 80 )
        	d++;
    if( d==0 )
    	cout<<"\nKhong co san pham nao co so luong nhap nho hon 80 trong phieu"<<endl;
    else
    	cout<<"\nCo "<<d<<" san pham co so luong nhap nho hon 80\n"<<endl;

}
void sx(PHIEU K)
{
	for(int i=0; i<K.n; i++)
        for(int j=i+1; j<K.n; j++)
        	if(K.Y[i].dongia > K.Y[j].dongia )
        		swap( K.Y[i], K.Y[j]);
}

int main()
{
    PHIEU K;
    K.nhap();
    K.xuat();
    dem(K);

    sx(K);
    cout<<"Phieu sau khi sap xep lai danh sach san pham: "<<endl;
    K.xuat();

    return 0;
}
