#include<iostream>
using namespace std;

// void fun() {
//     static int x = 0; //init statement - 1 run
//     cout<<"x : "<<x<<endl;
//     x++;
// }

// class A {
//     public:
//     int x;

//     void incx() {
//         x = x+1;


//     }
// };


class ABC {
    public:
    ABC() {
        cout<<"constructor\n";
    }

    ~ABC() {
        cout<<"destructor\n";
    }

};

int main () {

    if(true) {
        static ABC obj;
    }
    cout<<"end of main fnx\n";
    // fun();
    // fun();
    // fun();

    // A obj1;
    // A obj2;

    // obj1.x = 100;
    // obj2.x = 200;
    // cout<<obj1.x<<endl;

    // A obj;

    // obj.x = 0;
    // cout<<obj.x<<endl;
    // obj.incx();
    // cout<<obj.x<<endl;

    return 0;
}