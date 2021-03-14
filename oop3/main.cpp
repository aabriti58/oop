//Variable: Allows the programmer to use meaningful names instead of memory address.
//Variable have: Type (int, string, person, Account)
//               Value (10, 3.14, "Hari")
//Variable must be declared before it is used. 
//Declaring and initializing variables
//int a = 1;
//int b = 2;
//Rules for naming the variables(declare)
//-can contain letters, numbers and underscores
//-must begin with a letter to underscore
//-cannot begin with a number
//-cannot use c++ reserved keywords
//-cannot redeclare a name in same scope
//-c++ is case sensitive

//examples:
//Legal: Age, age, _Age, My_age, INIT
//Illegal: int. $age, 2014_age, my age, return

//initializing variables
//int age; //uninitialized
//int age = 21; //C-like initialization
//int age (21); //Constructor initiaization
//int age {21}; //C++11 initialization syntax

//#include <iostream>
//using namespace std;
//int main(){
//    int width{0};
//    int height{0};
//    
//    cout<<"Enter the width ";
//    cin>>width;
//    cout<<"Enter the height";
//    cin>>height;
//    cout<<"The area of the room is: "<<width*height<<endl;
//}
//
//#include<iostream>
//int main(){
//    int s;
//    std::cout<<s;
//    return 0;
//}
//C++ Primitive data types (Fundamental data types )
//-Character type: This is used for representing the single character. 'A','X','@', (Eg:- Char, char16_t)
//-Integer type: used to represent whole number (short, int, long, longlong)
//             -->Signed: Negative numbers (This is by default) int a = -10
//             -->Unsigned: 0 or Positive number (Must be specified) unsigned long a = 10
//-Floating-point type: used to represent non-integer numbers (float(7 decimal), double(15 deci), long double(19 deci))
//float length = 1.23456 (less than 7)
//double length = 1.3242534553 (should be more than 7)

//-Boolean type: used to represent True or False. (Zero is false. Non-zero is True)

//Constant: like variables, also have names, also occupies space.
//        ---> This doesnot needed to be changed throughout the program.
//        ---> Unlike variables, the value of the constant is always same.

//Types of constant
//-Literal Constant: eg:- x = 12, y = 1.5, name = "Hari"
//-Declared Constant: const Keyword (eg:- const int month_in_year {12} )
//-Constant Expression: const expr Keyword
//-Enumerated Constant: enum keyword
//-Defined Constant: #define (eg:- #define pi 3.1415 ) (replaces the word 'pi' in the program with the given value)


