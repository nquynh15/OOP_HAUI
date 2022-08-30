#include <bits/stdc++.h>

using namespace std;

class PERSON
{
protected:
    char Name[10], birth[10], addr[20];
public:
    void input();
    void output();
    PERSON();
};
void PERSON::input()
{
    cout<<"Name: ";         fflush(stdin);      gets(Name);
    cout<<"Birthday: ";     fflush(stdin);      gets(birth);
    cout<<"Address : ";     fflush(stdin);      gets(addr);
}
void PERSON::output()
{
    cout<<"Name: "<<Name<<endl;
    cout<<"Birthday: "<<birth<<endl;
    cout<<"Address : "<<addr<<endl;
}
PERSON::PERSON()
{
    strcpy(Name, "");
    strcpy(birth, "");
    strcpy(addr, "");
}
class SCHOOL
{
    char name[20], date[10];
public:
    friend class FACULTY;
    friend class STUDENT;
};
class FACULTY
{
    char name[20], date[10];
    SCHOOL x;
public:
    void input();
    void output();
    friend class STUDENT;
};
void FACULTY::input()
{
    cout<<"Faculty's name: ";            fflush(stdin);      gets(name);
    cout<<"Faculty founding date: ";     fflush(stdin);      gets(date);
    cout<<"School's name: ";             fflush(stdin);      gets(x.name);
    cout<<"School founding date: ";      fflush(stdin);      gets(x.date);
}
void FACULTY::output()
{
    cout<<"Faculty's name: "<<name<<endl;
    cout<<"Faculty founding date: "<<date<<endl;
    cout<<"School's name: "<<x.name<<endl;
    cout<<"School founding date: "<<x.date<<endl;
}
class STUDENT : public PERSON
{
    FACULTY y;
    char clas[10];
    float score;
public:
    void input();
    void output();
    STUDENT();
};
void STUDENT::input()
{
    y.input();
    PERSON::input();
    cout<<"Class: ";    fflush(stdin);  gets(clas);
    cout<<"Score: ";    cin>>score;
}
void STUDENT::output()
{
    y.output();
    PERSON::output();
    cout<<"Class: "<<clas<<endl;
    cout<<"Score: "<<score<<endl;
}
STUDENT::STUDENT()
{
    strcpy(y.name, "");
    strcpy(y.date, "");
    strcpy(y.x.name, "");
    strcpy(y.x.date, "");
    strcpy(clas, "");
    score = 0;
}
int main()
{
    STUDENT k;
    k.input();
    cout<<setw(60)<<"\n-----INFORMATION----"<<endl;
    k.output();

    return 0;
}
