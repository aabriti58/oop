// Inheritance
// What is it and why is it used?
// - Provides a method for creating new classes from existing classes.
// - The new class contains the data and behaviours of the existing class.
// - Allow for reuse of exisiting classes.
// - Allows us for focus on the common attributes among a set of classes.
// - allows new classes to modify behaviours of exisiting classes to make it unique.
// ( without actually modifying the original class)

// Related classes:
// Account, Saving Account, Checking Account, Trust Account etc.
// Person, Employee, Student, Faculty, Administrator etc.

// Account
// - Account (balance, deposit, withdraw)
// - Saving account ( balance, deposit, withdraw, interest rate,...)
// - Checking Account (balance, deposit, withdraw, minimum balance, per check fee,...)
// - Trust Account (balance, deposit, withdraw, interest rate,...)

// If we implement all these classes independently,
//class Account{
// // balance, deposit, withdraw
//};
//class saving_account{
// // balance, deposit, withdraw , intrest rate
//};
//class check_account{
// // balance, deposit, withdraw , minimum balance, per check fee
//};
//class trust_acount{
// // balance, deposit, withdraw , interest rate
//};
//
//// Account class - with inheritance - code reuse
//class Account{
// // balance, deposit, withdraw
//};
//class saving_account:public Account{
// // interest rate, specialized withdraw,...
//};
//class checking_account: public Account{
// //minimum balance, per check fee, specialized withdraw
//}
//class Trust_account:public Account{
// // interest rate, specialized withdraw
//}

// Terminologies
// Inheritance: Process of creating a new classes from exisiting classes ( Reuse mechanism)
// Single-inheritance: A new class is created from another 'single' class.
// Multiple-inheritance: A new class is created from two(or more) other classes.
// Base class( parent class, super class) : The class being extended or inherited from.
// Derived class( child class, sub class): The class being created from the base class.
// will inherit attributes and operations from the base class.
// "Is-A" relationship(saving account is a account)
// - Public inheritance
// - Derived classes are sub-types of their base classes.
// - Can use a derived class object whenever we use a base class object.

// Generalization: Combining similar classes into a single, more general class based on common attributes.
// Specialization: Creating new classes from existing classes proving more specialized attributes or operations.
// Inheritance or Class hierarchies: Organization of our inheritance relationships.

// Deriving classes from existing classes
//class Base{
//base class members
//};
//class Derived: Access_specifier Base{
// Derived class member
//};
// Access_specifier can be: Public, Private(Default), Protected
// - Public:- most common, Establishes "is-A" relationship between derived and base classes.
// - private/protected:- Establishes 'Has-A' relationship but it is not same as composition.


#include<iostream>
using namespace std;

/*class Account{
public:
    double balance;
    string name;
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();
};
Account::Account()
:balance{0.0},name{"An Account"}{
    cout<<"Initial Amount "<<balance<<endl;
}
Account::~Account(){}
void Account::deposit(double amount){
    cout<<"Account deposit called with "<<amount<<endl;
}
void Account::withdraw(double amount){
    cout<<"Account withdraw called with "<<amount<<endl;
}

class Saving_account:public Account{
public:
    double int_rate;
    Saving_account();
    ~Saving_account();
//    void deposit(double amount);
//    void withdraw(double amount);
};
Saving_account::Saving_account()
    :int_rate{0.3}{}
Saving_account::~Saving_account(){}
//void Saving_account::deposit(double amount){
//    cout<<"Saving account deposit called with "<<amount<<endl;
//}
//void Saving_account::withdraw(double amount){
//    cout<<"Saving account withdraw called with "<<amount<<endl;
//}
int main(){
    Account acc;
    acc.deposit(2000.0);
    acc.withdraw(500.0);
    
    Saving_account sav;
    sav.deposit(2000.0);
    sav.withdraw(500.0);
}

*/

//Class member access modifier in inheritance
//Protected members
//class Base{
//protected:
//    Protected base class modifier
//};
//-Accessible from the base class itself.
//-Accessible from classes derived from base.
//-Not accessible by objects of derived or base class.
//
//class Base{
//public:
//    int a; Public base class members
//protected:
//    int b; Protected base class members
//private:
//    int c; Private base class members
//}

//Access with public inheritance,
//Base class                     Access in derived class
//Public:a                       Public:a
//Protected:b                    Protected:b
//Private:c                      c:No access

//Access with protected inheritance,
//Base class                     Access in derived class
//Public:a                       Protected:a
//Protected:b                    Protected:b
//Private:c                      c:No access

//Access with private inheritance,
//Base class                     Access in derived class
//Public:a                       Private:a
//Protected:b                    Private:b
//Private:c                      c:No access

class Base{
public:
    int a{0};
    void display(){cout<<a<<" , "<<b<<" , "<<c<<endl;}
protected:
    int b{0};
private:
    int c{0};
};
class Derived:public Base{
public:
    void access_base_member(){
        a=100;
        b=200;
//        c=300;
    }
    
};

int main(){
    cout<<"Base member access from base objects"<<endl;
    Base base;
    base.a=100;
//    base.b=200;
//    base.c=300;
      
      cout<<"Base member access from derived objects"<<endl;
//      Derived d;
//      d.a=100;
//      d.b=200;
//      d.c=300;
}

Inheritance 
-It is probablt most powerful feature of OOP
-It is the process of creating new classes callled derived classes from existing or base classes

//private and public