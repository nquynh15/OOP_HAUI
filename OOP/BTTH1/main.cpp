#include<bits/stdc++.h>

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
	cout<<"Mat Hang: ";   fflush(stdin);  cin.getline(MaH, 30);
	cout<<"Ten Hang: ";   fflush(stdin);   cin.getline(TenH, 30);
	cout<<"Don Gia=  ";   cin >> DG;
}

void HANG::XUAT()
{
	cout<<left<<setw(20)<<MaH<<setw(20)<<TenH<<setw(15)<<DG<<endl;
	/*cout<<"Mat Hang: "<<MaH<<endl;
	cout<<"Ten Hang: "<<TenH<<endl;
	cout<<"Don Gia:  "<<DG<<endl;*/
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

	cout<<left<<setw(20)<<"Mat Hang"<<setw(20)<<"Ten Mat Hang"<<setw(15)<<"Don gia"<<endl;
	for(int i=0; i<n; i++){
		a[i].XUAT();
	}
    return 0;
}



