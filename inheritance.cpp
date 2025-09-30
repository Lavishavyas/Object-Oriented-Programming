#include<iostream>
#include<string>
using namespace std;

class Person {
    public:
    string name;
    int age;

    // Person(string name, int age) {
    //     this->name = name;
    //     this->age = age;
    // }

    // Person() {
    //     cout<<"Parent constructor .\n";
    // }
};

class Student : public Person {
    public:
    //name, age, rollno
    int rollno;

    // Student(string name, int age, int rollno) : Person(name, age) {
    //     this->rollno = rollno;
    // }

    // void getInfo() {
    //     cout<<"name : "<<name<<endl;
    //     cout<<"age : "<<age<<endl;
    //     cout<<"rollno : "<<rollno<<endl;
    // }

};

class GradStudent : public Student {
    public:
        string researchArea;
};

int main () {
    GradStudent s1;
    s1.name = "tony stark";
    s1.researchArea= "quantum physics";
    
    cout<<s1.name<<endl;
    cout<<s1.researchArea<<endl;
    return 0;

}




//single and multi level inheritance