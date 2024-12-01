#include<iostream>
using namespace std;
class Person{
    public:
    string name;
};
class Student:public Person{
    public:
    int rollno;

};
class Teacher: public Person{
    public:
    int salary;

};
class Gradstudent:public Student{
    public:
    string reserchrea;

};
class TA: public Student,public Teacher{
    public:
    

};
int main(){
    
    // Person p;
    // p.name="sujeet";
    // Student s;
    // s.name="nikhil";
    // Teacher t;
    // t.name="anjali mam";
    // t.salary=35000;
    // Gradstudent g;
    // g.name="vivek";
    // g.reserchrea="quantam mania";
    // g.rollno=1;
    // TA ta;
    // ta.name="harsh";
    // ta.rollno=99;
    // ta.salary=12000;
    Person p;
    p.name="sujeet";
    Student s;
    s.name="aman";
    s.rollno=01;
    // cout<<"\n                   PERSON CLASS INFORMATION                   \n"<<endl;
    // cout<<"                1.Person name :"<<p.name<<endl;
    // cout<<"\n                   STUDENT CLASS INFORMATION                   \n"<<endl;
    // cout<<"                1.Student name :"<<s.name<<endl;
    // cout<<"                2.Student Rollno. :"<<s.rollno<<endl;
    // cout<<"\n                   TEACHER CLASS INFORMATION                   \n"<<endl;
    // cout<<"                1.Teacher name :"<<t.name<<endl;
    // cout<<"                2.Teacher Salary :"<<t.salary<<endl;
    // cout<<"\n                   GRADSTUDENT CLASS INFORMATION                   \n"<<endl;
    // cout<<"                1.Gradstudent name :"<<g.name<<endl;
    // cout<<"                2.Gradstudent RollNo. :"<<g.rollno<<endl;
    // cout<<"                .Gradstudent Resercharea :"<<g.reserchrea<<endl;
    // cout<<"\n                   TA CLASS INFORMATION                   \n"<<endl;
    // cout<<"                1.TA name :"<<ta.name<<endl;
    // cout<<"                2.TA RollNo. :"<<ta.rollno<<endl;
    // cout<<"                .TA Salary :"<<ta.salary<<endl;
    // cout<<"\n                   THANKS FOR USE BY BY                   \n"<<endl;
    cout<<p.name<<endl;
    cout<<s.name<<endl;
    cout<<s.rollno<<endl;
    Teacher t;
    t.name="Anjali";
    t.salary=30000;
    cout<<t.name<<endl;
    cout<<t.salary<<endl;
    Gradstudent g;
    g.name="vivek";
    g.rollno=02;
    g.reserchrea="quantum time";
    cout<<g.name<<endl;
    cout<<g.rollno<<endl;
    cout<<g.reserchrea<<endl;
    TA ta;
    //ta.name="principal";

    ta.rollno=9999;
    ta.salary=9000;
    //cout<<name<<endl;
    cout<<ta.rollno<<endl;
    cout<<ta.salary<<endl;
    



    
}