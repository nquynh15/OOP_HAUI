#include <bits/stdc++.h>

using namespace std;

class A
{
protected:
    int a;
public:
    virtual void xuat();
};
class B : public A
{
protected:
    int b;
public:
    void xuat();
};
class C : public B
{
protected:
    int c;
public:
    void xuat();
};
void A::xuat()
{
    cout<<"PHUONG THUC XUAT CUA LOP A "<<endl;
}
void B::xuat()
{
    cout<<"PHUONG THUC XUAT CUA LOP B "<<endl;
}
void C::xuat()
{
    cout<<"PHUONG THUC XUAT CUA LOP C "<<endl;
}

int main()
{
    A x;
    B y;
    C z;

    /*x.xuat();
    y.xuat();
    z.xuat();*/

    A *p; //p la 1 con tro thuoc lop cao nhat.
    //nguyen tac: con tro thuoc lop nao, tro duoc toi doi tuong thuoc lop do

    p = &x; //cho p tro toi x

    p->xuat(); /* <-->x.xuat(); */
    //p co tro toi y ko???? -> YES: con tro thuoc lop cha (ong) co the tro toi cac doi tuong thuoc lop con (chau)
    p = &y;     p ->xuat();
    p = &z;     p ->xuat();
    /* Neu: su dung 1 con tro doi tuong thuoc lop cha
    - con tro co the tro toi doi tuong thuoc lop con
    - khong the su dung con tro do de truy xuat cac phuong thuc binh thuong cua lop con
    Neu: muon su dung ocn tro thuoc lop cha, truy xuat toi cac phuong thuc cua cac doi tuong thuoc lop con
    Thi: cac phuong thuc do phai la phuong thuc ao;
    */

    /*
    Neu khong duoc them "virtual" vao class: su dung lop co so truu tuong

    */



    return 0;
}
