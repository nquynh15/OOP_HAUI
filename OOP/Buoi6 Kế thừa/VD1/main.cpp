#include <bits/stdc++.h>

using namespace std;
class TAMGIAC
{
    float a, b,c;
public:
    void xuat();
    float dientich();
    TAMGIAC();
    TAMGIAC( float x, float y, float z);
};
TAMGIAC::TAMGIAC()
{
    a = b = c = 0;
}
TAMGIAC::TAMGIAC( float x, float y, float z)
{
    a = x;
    b = y;
    c = z;
}
void TAMGIAC::xuat()
{
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
}
float TAMGIAC::dientich()
{
    float p = ( a+b+c )/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main()
{
    TAMGIAC k(3, 5, 7); //k: doi tuong thuoc lop TAMGIAC;
    TAMGIAC q(2, 4, 5);

    k.xuat();
    q.xuat();

    /*TAMGIAC *p = &k; // p: la 1 con tro doi tuong thuoc lop TAMGIAC;
                //-p: co the tro toi cac dtg thuoc lop TAMGIAC;
                // p = &k : p chua dia chi cua k; --> k.xuat() = p->xuat();
                //p=&q;
                //p->xuat();   xuat q
    cout<<"Dien tich: "<<p->dientich()<<endl;
    */

    /*TAMGIAC *p; //tao ra 1 dtg ko ten, cho con tro tro toi dtg doi do.
    p = new TAMGIAC; // cap phat nhieu o nho;
    p ->xuat();
    cout<<"Dien tich: "<<p->dientich()<<endl;
    */
    /*
     p = new TAMGIAC[10]; // con tro + cap phat bo nho = mang;
     for(int i=0; i<10; i++)
        p[i].xuat();
        */

    return 0;
}
