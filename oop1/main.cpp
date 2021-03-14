/*#include <iostream>
int main(){
    int guess_num;
    std::cout <<"Please guess a number between 1 and 10: ";
    std::cin>> guess_num;
    std::cout<<"The number is"<<guess_num<<std::endl;
    return 0;
}


// Keywords and operators used in above program
// # ---> Pound sign, It is used for only to make code pretty.
// include ---> Its a way of including a standard or user-defined file in a program.
// <iostream> --> Defines the standard input/output stream of objects. eg: cout, cin, cerr
// main() ---> It is the function which is called when program is executed. The execution of .cpp file begins from here.
// standard(std) ---> std is a namespace in which cout is defined.
// cout ---> Standard output stream.
// Prompt ---> Message that is shown to the user.
// cin ---> Standard input stream.
// << ---> Insertion operator (helps to insert values in the program)
// >> ---> Extraction operator (grabs the input provided by the user)
// guess_num ---> Variable
// int ---> Data type
// return ---> Since main is a function it have to return some value.
// endl ---> Takes cursor to next line.
// "..." ---> for string literal
// '...' ---> for single character


// Compiler Error:
// Two type of error, Semantic error(meaning wrong), Syntax error.
// Assignment : 2 examples of semantic error and syntax error.

//syntax error
//#include <iostream>
// 
//int add(int x, int y)
//{
//    return x - y; // function is supposed to add, but it doesn't
//}

//syntax error
//#include <iostream>
// 
//int main()
//{
//    return 0; // function returns here
// 
//    std::cout << "Hello, world!"; // so this never executes
//}

//semantic error
//#include<stdio.h>
//
//main() {
//   int x, y, z;
//   x = 10;
//   y = 20;
//   x + y = z; // value required as left operand of assignment
//}

//semantic error
if(relative)
    if(my friend)
        cout << “both”;
    else
        cout << “neither”;

// Compiler warning: (should not be ignore !!! )
//#include <iostream>
//int main(){
//    int guess_num;
//    guess_num = 10;
//    std::cout << "Nothing to print";
//    return 0;
//}
//Variable is initialized but not used

// Linker Error:
//#include <iostream>
//extern int A;
//int main()
//{
//    std::cout << A;
//    return 0;
//}
    


// Run-Time Error:
// Error that occurs during the execution of the program
// Type of run time error: Divide by zero, File not found, Out of memory
// Exceptional handling can help deal with this type of errors.


// Logic Error:
// Logic error are msitakes made by programmer during coding.
// Suppose we have a person where a person who is 18 years or above can get the checks whether he/she can get a license.
// Exceptional handling can help deal with this type of errors.
//#include <iostream>
//int main(){
//    int age;
//    std::cout<<"Please enter yor age: ";
//    std::cin>>age;
//    if(age>=18){
//        std::cout<<"Yes, You are old enough to get a license !!!"<<std::endl;
//    }
//}


//Keywords ... Reserved
//Identifiers ---> Something that is named by programmers which is meaningful in the program. There are rules to follow.
//Operators ---> + * / non-standard: >>Extraction operator, :: scope resolution operator
//Punctuations ---> ; "" ()
//Comments
//Syntax*/

#include <iostream>
using namespace std;
class String{
  private:
  string s1;
  string s2;
  public:
  String(string s1,string s2){}
    void getString(){
        cout<<"\nEnter s1: "; cin>>s1;
        cout<<"\nEnter s2: "; cin>>s2;
    }
  void showString() 
  {
    cout<<s1<<s2;
  }
  string operator + (String s2){
    s1 = s1+ s2.s1;
  }
  void display(){
    cout<<"conc is: "<<s1<<endl;
  }

};
int main()
{
  String st1;
  st1.getString();
  String st2;
  st2.getString();
  String conc;
  conc = st1 + st2;
  cout<<"st1:"; st1.showString(); cout<<endl;
  cout<<"st2:"; st2.showString(); cout<<endl;
  cout<<"conc:"; conc.showString(); cout<<endl;

}