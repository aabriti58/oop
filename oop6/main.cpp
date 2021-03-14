//Pointer
//Pointer is a variable whose value is an address
//The address can contain another variable or a function.
//If x is an integer variable and its value is 10.Then we can declare a pointer that points to it.
//To use the data that the pointer is pointing to you must know the type.

 
//Why can't we use variable or function itself?
//Inside functions,pointers can be used to access data that are defined outside the functions.
//Since those variables may not be in the scope so you can access them by their names.

//Pointers can be used to operate on array very efficiently.
//We can allocate memory dynamically on the heap or free storage during runtime.

//Declaring pointer variables:
//Variable_type*Pointer_name;
//int*int_ptr;
//double*double_ptr;
//char*char_ptr;
//string*string_ptr;
//It is very important to initialize a pointer.

//Initializing a pointer:
//variable_type*pointer_name{nullptr};
//int *intptr=={nullptr};
//double *double_ptr={nullptr};
//char *char_ptr={nullptr};
//string *string_ptr={nullptr};

//always initialize the pointer
//uninitialized pointer contains garbage data and cannot point anywhere
//initialize to zero or nullptr.

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int num = {10};
    cout<<"Value of num is"<<num<<endl;
    cout<<"Size of num is"<<sizeof num<<endl;
    cout<<"Address of num is"<<&num<<endl;
    
    int *p;
    cout<<"\nValue of p is"<<p<<endl;
    cout<<"Address of p is"<<&p<<endl;
    cout<<"Size of p is"<<sizeof p<<endl;
    
    int *r={nullptr};
    cout<<"\n Value of p is"<<r<<endl;
    
    int *p1={nullptr};
    double *p2={nullptr};
    vector<string> *p3={nullptr};
    string *p5={nullptr};
    
    cout<<"\n Size of p1"<<sizeof p1<<endl;
    cout<<"Size of p2"<<sizeof p2<<endl;
    cout<<"Size of p3"<<sizeof p3<<endl;
    cout<<"Size of p5"<<sizeof p5<<endl;
    
    int score={10};
    double temp={100.7};
    int *score_ptr={nullptr};
    score_ptr= &score;
    cout<<"Value of score is: "<<score<<endl;
    cout<<"Address of score is: "<<&score<<endl;
    cout<<"Value of score_ptr is: "<<score_ptr<<endl;
    score_ptr = &temp;
    cout<<"Value of score_ptr is: "<<score_ptr<<endl;

}

//sma === static memory allocation

#include <iostream>
using namespace std;
int main(){
    int *array;
    array= new int[5];
    
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    cout<<"array[0]"<<array[0]<<endl;
    cout<<"array[1]"<<array[1]<<endl;
    cout<<"array[2]"<<array[2]<<endl;
    cout<<"array[3]"<<array[3]<<endl;
    cout<<"array[4]"<<array[4]<<endl;
    
    delete []array;
    cout<<"array[0]"<<array[0]<<endl;
    cout<<"array[1]"<<array[1]<<endl;
    cout<<"array[2]"<<array[2]<<endl;
    cout<<"array[3]"<<array[3]<<endl;
    cout<<"array[4]"<<array[4]<<endl;

}

//Array Operator

//int a[100];

//90 100 //memory wastage
//100 110 //memory shortage

//dynamic memory allocation
//operator used- new, delete

//new syntax
//int *p;
//p = new int; //int storage- 2 bytes
//p = new int[5]; //2*5= 10 bytes

//#include <iostream>
//using namespace std;
//int main(){
//    int *p; //pointer variable declare
//    p = new int[2]; //memory define
//    p[0] = 10; //1st value to store
//    p[1] = 20; //2nd value to store
//    cout<<"p[0] is: "<<p[0]<<endl;
//    cout<<"p[1] is: "<<p[1]<<endl;
//    return 0;
//
//}

//delete syntax- it only clears value allocated inside the memory

//int jugs = 5;  not the syntax of new so delete won't be applicable to this one
//int p = &jugs;

//#include <iostream>
//using namespace std;
//int main(){
//    int *p;
//    p = new int;
//    *p = 500;
//    cout<<"value of p is: "<<*p<<endl;
//    delete p;
//    cout<<"value of p is: "<<*p<<endl;
//    return 0;
//}

// Passing pointer to a function
// - We can use pointers and the dereference operator to achieve pass-by-reference
// - Function paramters is a pointer.
// - Actual parameter can be a pointer or address of the variable.
//
//#include <iostream>
//void swap(int *a, int *b){
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int main(){
//    int x={100}, y={200};
//    cout<<"x: "<<x<<endl;
//    cout<<"y: "<<y<<endl;
//    
//    swap(&x, &y);
//    cout<<"x: "<<x<<endl;
//    cout<<"y: "<<y<<endl;
//    cout<<endl;
//    return 0;
//}


//Derefencing a pointer- getting value stored in memory location pointed by pointer. The operator (*) asterisk is used to do this and is called derefernecing operator

int *create_array(size_t size, int init_value = 0){//size_t to represent size and count as sizeofoperator
    int *new_storage={nullptr};//null pointer declared so that it doesnot take any garbage value:nullptr is used at all places where NULL is expected...implicitly convertible and comparable to any pointer type
    new_storage = new int [size];//memory allocation in heap using DMA
    for (size_t i{0}; i<size; ++i)//for loop
        *(new_storage + i) = init_value;//each pointer is refering to a specific value and assigning value 0
    return new_storage;//return to main function
}

void display(const int *const array, size_t size){ //function to display result
    for(size_t i{0}; i<size; i++)// for loop to print value stored in array we get
        cout<<array[i]<<" ";
    cout<<endl;
}

int main(){
    int *my_array={nullptr};//pointer declare and initialized to 0
    size_t size;//can hold max possible value and define unsigned integer size
    int init_value={};//declare init_value
    cout<<"\n How many integers would you like to allocate?";
    cin>>size;
    cout<<"What value would you like them initialized to?";
    
    my_array = create_array(size, init_value);//calling function create_array and storing result in my_array
    
    display(my_array, size);//function call
    delete [] my_array;//deleting created heap of memory or array
    return 0;
}