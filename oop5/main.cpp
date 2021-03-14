//Functions:DRY-->Do not repeat yourself
//we can modularize the program using the functions.
//Separate code into logical self-contained units.
//These units are reusable.
//C++ program:
//--C++ Standard Template Library(eg:vector,iostream,cmath)
//--Third party library(cocos2dx,unreal,spring,cry engine)
//--Our own funtions
//(Don't reinvent the wheel)
//Abstraction oop
//Software Engineering
//int main(){
//    //read inputs
//    statement 1;
//    statement 2;
//    statement 3;
//    //process inputs
//    statement 1;
//    statement 2;
//    statement 3;
//    //generate outputs
//    statement 1;
//    statement 2;
//    statement 3;
//    return 0;
//}
//read input();
//int main(){
//    //read inputs
//    read_input();
//    //process inputs
//    process_input();
//    //generate outputs
//    generate_output();
//}
//Standard Library
//Square root
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main(){
//    double num={0};
//    cout<<"Enter the number i.e. double:";
//    cin>>num;
//    cout<<"The square root is:"<<sqrt(num);
//}
//Cube root,ceiling function,floor function,round off
#include<iostream>
#include<cmath>
using namespace std;
//int main(){
//    double x={0};
//    cout<<"Enter the number:";
//    cin>>x;
//    cout<<"Cube root is:"<<cbrt(x)<<endl;
//    cout<<"Ceiling value is:"<<ceil(x)<<endl;
//    cout<<"Floor value is:"<<floor(x)<<endl;
//    cout<<"Round value is:"<<round(x);
//    return 0;
//}


//Function definition(user define function)
//FunctionType FunctionName(Parameters){
    //statements(body of the function)
    //return type
//}
//Name:
//-same rules applies as variables
//-it should be meaningful
//Parameters list
//-the variable passed into the function
//-their type must be specified
//Return type
//-the type of data that is return by the function.
//Body
//-statements that are executed when the function is called.
//-it lies within the curly braces{}.

//#include<iostream>
//using namespace std;
//void say_world(){
//    cout<<" World"<<endl;
//}
//void say_hello(){
//    cout<<"Hello";
//    say_world();
//}
//int addition(int a,int b){
//    double i={2.5};
//    return a+b+i;
//}
//int main(){
//    say_hello();
//    int a={1};
//    int b={2};
//    addition(a,b);
//    return 0;
//}

//#include<iostream>
//using namespace std;
//const double pi{3.14159};
//
////Function prototypes
//double calc_area_circle(double);
//double calc_area_cylinder(double,double); 
//void area_circle();
//void area_cylinder();
//int main(){
//    area_circle();
//    area_cylinder();
//}
//double calc_area_circle(double radius){
//    return pi*radius*radius;
//}
//double calc_area_cylinder(double radius,double height){
//    return pi*radius*radius*height;
//}



//
//void area_circle(){
//    double radius{0};
//    cout<<"Enter the radius of the circle:";
//    cin>>radius;
//    cout<<"The area of the circle is:"<<calc_area_circle(radius)<<endl;
//}
//void area_cylinder(){
//    double radius{0};
//    double height{0};
//    cout<<"Enter the radius of the cylinder:";
//    cin>>radius;
//    cout<<"Enter the height of the cylinder:";
//    cin>>height;
//    cout<<"The area of cylinder is:"<<calc_area_cylinder(radius,height)<<endl;
//}



//Function prototype
//-it tells the compiler about the function before it is used.
//-also called as forward declaration.
//-places at the beginning of the program



//Function parameters
//When we call a function we pass in data to the function.
//In function call they are called actual parameters.(Argument)
//In funtion definition they are called formal parameters.(Parameters)
int add(int,int){//prototype
}
int main(){//main funtion
    int a{0};
    int b{10};
    add(a,b);//funtion call
}
int add(int a,int b){//funtion definition
    return a+b;
}

//Pass_by_value
//-when you pass data into a function,it is called as an pass by value
//A copy of data is passed to the function.
//whatever changes you make to the parameters in the function does not affect the argument that was passed

//#include<iostream>
//using namespace std;
//void param_test(int x){
//    cout<<x<<endl;
//    x=100;
//    cout<<x<<endl;
//}
//int main(){
//    int A{50};
//    cout<<A<<endl;
//    param_test(A);
//    cout<<A<<endl;
//    return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//void pass_by_value1(int num);
//void pass_by_value2(string s);
//void pass_by_value3(vector<string>v);
//void print_vector(vector<string>v);
//int main(){
//    int num={10};
//    int another_num={20};
//    //For integer
//    cout<<"Before: "<<num<<endl;
//    pass_by_value1(num);
//    cout<<"After: "<<num<<endl;
//    cout<<"Before: "<<another_num<<endl;
//    pass_by_value1(another_num);
//    cout<<"After: "<<another_num<<endl;

//    //For string
//    string_name={"Hari"};
//    cout<<"Before: "<<name<<endl;
//    pass_by_value2(name);
//    cout<<"After: "<<name<<endl;
//    //For vector
//    vector <string> AAL{"Tosin", "Javier", "Matt"};
//    cout<<"Before:";
//    print_vector(AAL);
//    pass_by_value3(AAL);
//    cout<<"After:";
//    print_vector(AAL);
//    
//}
//void pass_by_value1(int num){
//    num=1000;
//}
//void pass_by_value2(string s){
//    s="Changed";
//}
//void pass_by_value3(vector<string>v){
//    v.clear();
//}
//void print_vector(vector<string>v){
//    for(auto s:v)
//        cout<<s<<" ";
//        cout<<endl;
//}



//Return statement
//If a function returns a value then it must use a return statement that returns a value.
//If a function does not return a value {void} then the return statement is optional.
//Return statement can occur anywhere in the function body.
//Return statement immediately exists the function.
//multiple return statement is not encouraged.
//The return value is the result of the function call.


//Default parameter value
//This value remains constant throughout.
//The best practice to define the default value is to define in prototype.
//can have multiple default values
//must appaear at the end of the parameter list.

//#include <iostream>
//using namespace std;
//int addition(int,int);
//int main(){
//    addition(2,3);
//}void addition(int a, int b){
//    cout<<a+b<endl;;
//}


//Overloading
//void func1(int), func1(string), func1(double), func1(vector)
//We can have functions that have different parameters lists that have the same name.
//OOP: Abstraction: can be compressed, Polymorphism: Many forms for a single concept.

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//void print(int);
//void print(double);
//void print(string);
//void print(string, string);
//void print(vector<string>);
//void print(int num){
//    cout<<"Printing integer"<<num<<endl;
//}
//void print(double num){
//    cout<<"Printing Double"<<num<<endl;
//}
//void print(string s){
//    cout<<"Printing string: "<<s<<endl;
//}
//void print(string s, string t){
//    cout<<"Printing string2: "<<s<<"And"<<t<<endl;
//}
//void print(vector<string>v){
//    cout<<"Printing the vector";
//    for (auto s:v)
//        cout<<s+" ";
//        cout<<endl;
//}
//int main(){
//    print(100);
//    print("A");
//    print(123.5);
//    print("C_Style string");
//    string s = {"C++style string"};
//    print(s);
//    print("C-style string",s);
//    vector <string> GOT{"Stark", "Lannister", "Bolton"};
//    print(GOT);
//    cout<<endl;
//    return 0;
//}


//Pass_by_reference
//Sometimes we want to be able to change the actual parameters from with the function body.
//In order to achieve this we need the location or address of actual parameters.
//The formal parameters will be an alias for the actual parameters.
/*
Example1:
#include <iostream>
void scale_number(int &num);//prototype
int main(){
    int number={1000};
    cout<<"Before: "<<number<<endl;
    scale_number(number);
    cout<<"After: "<<number<<endl;
    return 0;
}
void scale_number(int &num){
    if (num<100)
        num = 100;
}

 
//swap
void swap(int &a, int &b);
int main(){
    int a={10}, y={20};
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

#include <vector>
#include <iostream>
using namespace std;
void print(vector<int>&v);
int main(){
    vector<int> data{1,2,3,4,5};
    print(data);
    return 0;
}
void print(vector<int>&v){
    int a = 10;
for(auto num:v)
        cout<<num+a<<endl;
}*/


//How functions work?
//Function use the "Function call stack"
//-Analogous to a stack of books
//-LIFO -> Last in First out
//-Push and pop
//Stack Frame or Activation Record (colection of information that represent an active function)
//-Each time a function is called an activation record is created and pushed in the call stack.
//-when the function terminates we pop its activation record odd call stack
//-And, then the top of the stack is the function that called it.
//-Function must return control
//Remember the call stack is finite in size, if we activate too many function in the call stack we run out of stack space.
//This is called stack overflow. This is usually unrecoverable.

#include <iostream>
void func2(int &x, int y, int z){
    x += y+z;
}
int func(int a, int b){
    int result={};
    result = a+b;
    func2(result, a, b);
    return result;
}
int main(){
    int x={10};
    int y={20};
    int z={};
    z=func1(x,y);
    cout<<z<<endl;
    return 0;
}


//Inline function
//Function call have certain amount of overhead.
//Sometimes we can have simple functions.
//In this kind of situation, we suggest compiler to compile them "inline"
//-Avoid function call overhead.
//-Generate inline assembly code.
//-Faster
//-Could cause code bloat.

/*inline int add_numbers(int a, int b){ //Don't need to be decalred as inline because compiler makes it inline automatically.
    return a+b;
}
int main(){
    int result={0};
    result = add_numbers(100,200);
    return 0;
}*/

//Scope
//C++ uses scope rules to determine where an identifier can be used.
//C++ uses static or lexical scoping.
//Local or block scope
//Global scope

//Local scope
//identifiers declared in a block{}.
//Function parameters have block scope.
//Only visible within the block{} where declared.
//Function local variables are only active while the function is executing.
//Local variables are Not preserved between function calls.
//With nested block inner blocks can "SEE" but outer block cannot "SEE" in.

//Global Scope:
//Identifier declared outside any function/class.
//Visible to all part of the program after global identifier has been declarerd.
//Global constants are okay. 
//Best practices - don't use global variable.

//Storage Class
//extern int A=10;



//Assignment 2:
//Coditional statement(if else,nested if...else,case...break
//Looping statement(for loop,while loop,do...while loop,nested loop)

//Assignment 3:
//Global and Local scope example
//Storage class define with an example for all five.