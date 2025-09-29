#include<iostream>
#include<string>
using namespace std;

class Teacher {
  private:
    double salary;

  // public:
  //non parameterized
    // Teacher() {
    //   dept = "Computer Science";
    // }

  public:
   //properties / attributes
  string name;
  string dept;
  string subject;


  //parameterized
    Teacher(string name, string dept, string subject, double salary) {
      this->name = name;
      this->dept = dept;
      this->subject = subject;
      this->salary = salary;
    }

    //copy constructor
    Teacher(Teacher &orgObj) {
      cout<<"i am custom sopy constructor....\n"<<endl;
      this->name = orgObj.name;
      this->dept = orgObj.dept;
      this->subject = orgObj.subject;
      this->salary = orgObj.salary;

    }

  //methods / member functions
  void changeDept(string newDept) {
    dept = newDept;
  }

  // //setter
  // void setSalary(double s) {
  //   salary = s;
  // }

  // //getter
  // double getSalary() {
  //   return salary;
  // }

  void getInfo() {
    cout<<"name : "<<name<<endl;
    cout<<"subject : "<<subject<<endl; 
  }
  
};


// class Acount {
//   private:
//   double balance;
//   string password; //data hiding

//   public:
//   string accountId;
//   string username;
// };




int main () {
    Teacher t1("Shradha", "Computer Science", "C++", 25000); //constructor call
    // t1.getInfo();

    Teacher t2(t1); //custom copy constructor - invoke
    t2.getInfo();


    // t1.name = "Shradha";
    // t1.subject = "C++";
    // t1.setSalary(25000);

    // cout<<t1.getSalary()<<endl;
    return 0;
}