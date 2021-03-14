/*//Normal member function accessed with pointers
//mistake code
#include <iostream>
using namespace std;
class Base{
public:
    void show(){
        cout<<"Base\n";
    }
};
class Derv1:public Base{
public:
    void show(){
        cout<<"Derv1\n";
    }
};
class Derv2:public Base{
public:
    void show(){
        cout<<"Derv2\n";
    }
};
int main(){
    Derv1 dv1;
    Derv2 dv2;
    Base* ptr;
    ptr = &dv1;
    ptr -> show();
    ptr = &dv2;
    ptr -> show();
    return 0 ;
    
}*/

/*//right code using virtual
#include <iostream>
using namespace std;
class Base{
public:
    virtual void show(){
        cout<<"Base\n";
    }
};
class Derv1:public Base{
public:
    void show(){
        cout<<"Derv1\n";
    }
};
class Derv2:public Base{
public:
    void show(){
        cout<<"Derv2\n";
    }
};
int main(){
    Derv1 dv1;
    Derv2 dv2;
    Base* ptr;
    ptr = &dv1;
    ptr -> show();
    ptr = &dv2;
    ptr -> show();
    return 0 ;
    
}*/
/*
//Abstract class and pure virtual class
#include <iostream>
using namespace std;
class Base{
public:
    virtual void show()=0;//pure virtual function
};
class Derv1:public Base{
public:
    void show(){
        cout<<"Derv1\n";
    }
};
class Derv2:public Base{
public:
    void show(){
        cout<<"Derv2\n";
    }
};
int main(){
    Base bad;//cannot make object from base class
    Base* arr[2]; //array pointer to base class
    Derv1 dv1; //objects of derived 1
    Derv2 dv2; //objects of derived 2
    arr[0] = &dv1; //put the address of dv1 in array
    arr[1] = &dv2; //put the address of dv2 in array
    arr[0]->show(); //execute show() in one object
    arr[1]->show(); //execute show() in another object
}*/

/*//Virtual destructor
#include <iostream>
using namespace std;
class Base{
public:
    virtual ~Base(){
        cout<<"Non virtual destroyed\n";
    }
};
class Derv: public Base{
public:
    ~Derv(){
       cout<<"Derv destroyed\n";
    }
};
int main(){
    Base* pBase = new Derv;
    delete pBase;
    return 0;
}*/

//Virtual base classes- already studied in diamond problem(inheritance)

/*
//Friend Function
#include <iostream>
using namespace std;
class beta;
class alpha{
private:
    int data;
public:
    alpha():data(3){}
        friend int frifunc(alpha,beta);
};
class beta{
private:
    int data;
public:
    beta():data(7){}
    friend int frifunc(alpha,beta);
};
int frifunc(alpha a, beta b){
    return(a.data + b.data);
}
int main(){
    alpha aa;
    beta bb;
    cout<<frifunc(aa,bb)<<endl;
    return 0;
}*/

//Friend Classes
#include <iostream>
using namespace std;
class alpha{
private:
    int data1;
public:
    alpha():data1(99){}
    friend class beta;
};
class beta{
public:
    void func1(alpha a){
        cout<<"\ndata1="<<a.data1;
    }
    void func2(alpha a){
        cout<<"\ndata1="<<a.data1;
    }
};
int main(){
    alpha a;
    beta b;
    b.func1(a);
    b.func2(a);
    cout<<endl;
    return 0;
}