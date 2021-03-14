//Array: They are the compound datatypes
//Suppose, ct1_marks_001 {0};
//         ct1_marks_002 {0};
//Properties:
// -Fixed size
// -All elements are of same datatypes
// -Stored contiguously in memory (memory will be allocated as one chunk)
// -First element is at index 0 and last at n-1 (Suppose we have n sized array) (if size of my array is 5 then n-1=4)
// -Out of bounds
//#include<iostream>
//using namespace std;
//int main(){
    //	char greet[]={'h','e','l','l','o'};
    //	cout<<"the first letter is "<<greet[0]<<endl;
   //	cout<<"the second letter is "<<greet[5]<<endl;
//	int marks[]={1,2,3,4,5};
//	cout<<"the highest mark is: "<<marks[4]<<endl;
//	marks[4]=100;
//	cout<<"the highest mark updated is "<<marks[4]<<endl;
//    int marks[5];
//  cout<<"marks:"<<marks[0]<<endl;
//  return 0;
//}

//Multi-Dimensional Array
//[1,2,3,4,5,6] series of numbers 1Dimensional
//[[1,2,3][4,5,6]] 2Dimensional Matrix
//3Dimensional Matrix Image (Width, Height, Color(Red, Green, Blue))
//int bank_details[10 no.of rows][3 no. of cols.];

//Scenario:
//We use array to keep the data of the students.
//But the size of array is fixed.
//So we have two options:
//1.Make the array so big that it will fit all the records.
//2.Use dynamic array such as vector.

//Vector:
//It is the part of c++ Standard Template Library.
//Can grow and shrink at execution time.
//Provides similar semantics and syntax as arrays.
//Very efficient
//Also can provide the bounds check.
//Uses various cool functions like sort, reverse.

//#include <vector>
//Declaring vector: vector<int> marks(20);
//Initializing vector: vector<int> marks{100,200,300,400,500};


//Assignment 1:
//Assignment operator
//Arithmetic operator
//Increment and decrement operator
//Relational operator
//Logical operator