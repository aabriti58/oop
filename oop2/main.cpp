//C++ preprocessor
//C++ preprocessor directive
//comments---> Single line comment
///*comment*/--->Multi line comment
/************
 * Dependency:
 * Tensorflow:
 * Keras:
 * Numpy:
 * *********************/
 //Namespace ---> Helps removing the naming conflicts.
//Space resolution operator(::) --> space means boundary, resolution means solution 
//Method 1:
// #include<iostream>
// using namespace std;
//
// int main(){
//     int guess_num;
//     cout<<"Please enter the number to guess:";
//     cin>>guess_num;
//     cout<<"your number is"<<guess_num;
//     return 0;
// }
//
 //Method 2:
// #include<iostream>
// using std:cout;
// using std::cin;
// using std:endl;
// int main(){
//     int guess_num;
//     cout<<"Please enter the number to guess:";
//     cin>>guess_num;
//     cout<<"your num is"<<guess_num;
//     return 0;
// }
 //Method 3:
// #include<iostream>
// int main(){
//     int guess_num;
//     std::cout<<"Please enter a num:";
//     std::cin>>guess_num;
//     std::cout<<"Your num is"<<guess_num;
//     return 0;
// }

//Cout and Cin
#include <iostream>
using namespace std;
int main(){
    cout<<"Hello world"<<endl;
    cout<<"Hello";
    cout<<"Hello"<<endl;
    cout<<"Hello"<<"World"<<endl;
    cout<<"Hello"<<"World\n";
    cout<<"Hello\n Out \n There\n";
    
    int num1;
    int num2;
    double num3;
    
    cout<<"Enter num1: ";
    cin>>num1;
//    cout<<"Enter num2: ";
//    cin>>num2;
//    cout<<"You Entered" <<num1<<" and "<<num2<<endl;
    
    cout<<"Enter num3: ";
    cin>>num3;
    cout<<"You Entered " <<num1 << " and " << num2 << endl;
    return 0;
}
