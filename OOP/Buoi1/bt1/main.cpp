#include <bits/stdc++.h>

using namespace std;

class HANG
{
	char MaH[30];
	char TenH[30];
	int DG;
public:
	void NHAP();
	void XUAT();
};

void HANG::NHAP()
{
	cout<<"Mat Hang: ";   fflush(stdin);  gets(MaH);
	cout<<"Ten Hang: ";   fflush(stdin);   gets(TenH);
	cout<<"Don Gia=  ";   cin >> DG;
}

void HANG::XUAT()
{
	cout<<"Mat Hang: "<<MaH;
	cout<<"Ten Hang: "<<TenH;
	cout<<"Don Gia:  "<<DG;
}


int main()
{
    HANG *a;
	int  n;
	cout<<"n = "; cin>>n;
	a = new HANG[n];
	for(int i=0; i<n; i++){
		a[i].NHAP();
	}
	for(int i=0; i<n; i++){
		a[i].XUAT();
	}
    return 0;
}




