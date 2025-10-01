#include<iostream>
#include<string>
using namespace std;

// class Student {
//     public:
//     string name;

//     Student() {
//         cout<<"no parameterized\n";
//     }

//     Student(string name) {
//         this->name = name;
//         cout<<"parameterized\n";
//     }
// };

// class Print {
//     public:
//         void show(int x) {
//             cout<<"int : "<<x<<endl;
//         }

//          void show(char ch) {
//             cout<<"char : "<<ch<<endl;
//         }

// };

class Parent {
    public:
        void getInfo() {
            cout<<"parent class\n";
        }

        virtual void hello() {
            cout<<"hello from parent class\n";
        }
};

class Child : public Parent {
    public:
        void getInfo() {
            cout<<"child class\n";
        }

        void hello() {
            cout<<"hello from child class\n";
        }
        

};

int main () {
    Child c1;
    c1.getInfo();

    Parent p1;
    p1.getInfo();


    // Student s1("tony stark");

    // Print p1;
    // p1.show(101);

    return 0;
}