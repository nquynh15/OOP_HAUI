#include <bits/stdc++.h>

using namespace std;

class ARRAYY
{
    float *value;
    int n;
public:
    ARRAYY operator++();
    ARRAYY operator--();
    friend istream& operator>>(istream& x, ARRAYY& y);
    friend ostream& operator<<(ostream& x, ARRAYY y);
};
istream& operator>>(istream& x, ARRAYY& y)
{
    cout<<"n = ";   x>>y.n;
    y.value = new float[y.n];
    for(int i=0; i<y.n; i++)
    {
        cout<<"value["<<i<<"] = ";
        x>>y.value[i];
    }
    return x;
}
ostream& operator<<(ostream& x, ARRAYY y)
{
    for(int i=0; i<y.n; i++)
        x<<setw(6)<<y.value[i];
    x<<endl;
    return x;
}
ARRAYY ARRAYY::operator++()
{
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if( value[i]>value[j])
                swap(value[i], value[j]);
    return *this;
}
ARRAYY ARRAYY::operator--()
{
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if( value[i]<value[j])
                swap(value[i], value[j]);
    return *this;
}
int main()
{
    ARRAYY a;
    cout<<"Nhap mang: "<<endl;
    cin>>a;
    cout<<"Mang vua nhap: "<<a;

    cout<<"Sap xep mang tang dan: "<<++a;
    cout<<"Sap xep mang giam dan: "<<--a;

    return 0;
}
