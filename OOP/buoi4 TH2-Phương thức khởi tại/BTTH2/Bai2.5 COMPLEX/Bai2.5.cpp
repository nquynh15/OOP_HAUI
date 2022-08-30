#include <bits/stdc++.h>

using namespace std;

class OTO
{
    char ma[30];
    double giamua;
    int namsd;
    float khauhao;
public:
    void nhap();
    void xuat();
};
void OTO::nhap()
{
    cout<<"Nhap ma o to: "; fflush(stdin);  gets(ma);
    cout<<"Gia mua: "; cin>>giamua;
    cout<<"Nam su dung: "; cin>>namsd;
    cout<<"Ty le khau hao/nam: "; cin>>khauhao;
}
void OTO::xuat()
{
    cout<<"\nMa o to: "<<ma<<endl;
    cout<<"Gia mua: "<<giamua<<" USD"<<endl;
    cout<<"Nam su dung: "<<namsd<<endl;
    cout<<"Ty le khau hao/nam: "<<khauhao<<"%/nam"<<endl;

    double gt = pow (1 - khauhao/100, namsd) * giamua;
    cout<<"Gia tri hien tai: "<<gt<<" USD"<<endl;
}
int main()
{
    OTO *a;
    int n;
    cout<<"n = ";  cin>>n;
    a = new OTO[n];

    for(int i=0; i<n; i++)
        a[i].nhap();

    cout<<"\nThong tin cac xe vua nhap: "<<endl;
    for(int i=0; i<n; i++)
        a[i].xuat();

    return 0;
}
