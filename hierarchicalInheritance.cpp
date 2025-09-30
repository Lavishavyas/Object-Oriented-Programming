#include<iostream>
#include<string>
using namespace std;

class Person {
    public:
    string name;
    int age;

};

class Student : public Person{
    public: 
    string name;
    int rollno;
};

class Teacher : public Person {
    public:
    string subject;
};

class TA : public Student, public Teacher {
    public:
        string researchArea;
};

int main () {

    // TA t1;
    // t1.name = "tony stark";
    // t1.subject = "engineering";

    // cout<<t1.name<<endl;
    // cout<<t1.subject<<endl;

    return 0;

}