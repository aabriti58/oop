/*#include <iostream>
using namespace std;
class Count{
private:
    int value;
public:
    //Constructor to initialize count to 5
    Count():value(5){} //count() {value=5};
    
    //Overload ++ when used as prefix
    void operator ++ (){
        ++value;
    }
    void display(){
        cout<<"Count: "<<value<<endl;
    }
};
int main(){
    Count count1;
    
    //Call the "void operator ++ ()" function
    ++count1;
    count1.display();
    return 0;
}*/


/*#include <iostream>
using namespace std;
class Count{
private:
    int value;
public:
    //Constructor to initialize count to 5
    Count():value(5){} //count() {value=5};
    
    //Overload ++ when used as prefix
    void operator ++ (int){
        ++value;
    }
    void display(){
        cout<<"Count: "<<value<<endl;
    }
};
int main(){
    Count count1;
    
    //Call the "void operator ++ ()" function
    count1++;
    count1.display();
    return 0;
}*/




#include <iostream>

using namespace std;

class Count{
private:
    int value;
public:
    // constructor to initialize count to 5
    Count(): value(5){}
    
    // constructor ++ when used as prefix
    Count operator ++ (){
        Count b;
        b.value=++value;
        return b;
        
    }
    
    Count operator ++ (int){
        Count a;
        a.value=value++;
        return a;
    }
    void display(){
        cout<<"Count:"<<value<<endl;
    }
};

int main(){
    Count count1;
    
    // Call the "void operator ++ {}"function
    ++count1;
    count1++;
    Count result;
    result = count1++;
    result.display();
    return 0;
}