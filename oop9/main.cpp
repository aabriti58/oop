#include<iostream>
using namespace std;
/*class A{
    int a,b;
public:
    int sum(int a, int b)
    {
        return a+b;
    }
    };
class B{
    };
class C{
    };
int main()
{
    B objb;
    C objc;
    cout<<objb.sum(2,3)<<endl;
    cout<<objc.sum(2,3)<<endl;//error for accessing privately

}*/
    
/*class Base{
    int x;
public:
    //default constructor
    Base(){
        cout<<"Base default constructor"<<endl;
    }
};
class Derived:public Base{
    int y;
public:
    //default constructor
    Derived(){
        cout<<"Derived default constructor"<<endl;
    }
    //parameterized constructor
    Derived(int a){
        cout<<"Derived Parameterized constructor"<<endl;
    }
};
int main(){
    Base b;
    Derived d1;
    Derived d2(10);
    return 0;
}*/

// Analyse this program and use " Virtual " Keyword to avoid diamond problem.
class Person
{
    //data members of person
public:
    Person(int x)
    {
        cout << "Person" << x << "Called" << endl;
    }
};
class Faculty : virtual public Person
{
    //data members of faculty
public:
    Faculty(int x) : Person(x)
    {
        cout << "Faculty" << x << "Called" << endl;
    }
};
class Student : virtual public Person
{
    //data member of faculty
public:
    Student(int x) : Person(x)
    {
        cout << "Student" << x << "Called" << endl;
    }
};
class TA : public Faculty, public Student
{
public:
    TA(int x) : Person(x), Faculty(x), Student(x)
    {
        cout << "TA" << x << "Called" << endl;
    }
};
int main()
{
    TA ta1(30);
    return 0;
}

