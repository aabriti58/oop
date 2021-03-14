/*Four pillars of oop
-Abstraction
-Polymorphism
-Inheritance
-Encapsulation*/

/*Objects and Classes
Classes:
-Blueprint from which objects are created
-A user-defined data-type
-Has attribute (data)
-Has methods (functions)
-Can hide data and methods
-Provides a public interface

Example of classes:
Account
Employee
std::vector

Objects
-Created from a class
-Represents a specific instance of a class
-Can create many many objects
-Each has its own identity
-Each uses the defined class methods

Example of objects
Hari's Account
Ram's Account
Each has their own balance, deposit history and withdrawl history*/

/*Declaring a class
class Class_Name{
    declarations
};

class Player{
    //attributes
    std::string name;
    int health;
    int xp;
    
    //methods
    void talk(std::string text_to_say);
    bool is_dead();
};*/

/*#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player{
    //attributes
    string name={"Player"};
    int health=100;
    int xp=3;
    //methods
    void talk(std::string text_to_say);
    bool is_dead();
};
class Account{
    //attributes
    string name;
    double balance;
    //methods
    bool deposit(double);
    bool withdraw(double);
};
int main(){
    Account ram_acc;
    Account hari_acc;
    
    Player ram;
    Player hari;
    
    Player player[]{ram,hari};
    
    vector<Player>player_vec{ram};
    player_vec.push_back(hari);
    
Player *enemy={nullptr};
enemy = new Player;

delete enemy;

return 0;
}*/


/*We can access class attribute and class methods.
Some of the class members are no accessible.
We need an object to access instance variables.

If we have a pointer to an object (member of pointer operator)
dereference the pointer then use the dot operator.
  Account *frank_account = new Account();
  (*frank_account).balance;
Or use the member pointer operator (arrow operator)
  frank_account -> balance;*/
  
/*#include<iostream>
#include<string>
using namespace std;
class Player{
public:
    //attributes
    string name;
    int health;
    int xp;
    //methods
    void talk(string text_to_say){cout<<name<<"says"<<text_to_say<<endl;}
    bool is_dead();
  
};
class Account{
public:
    //attributes
    string name;
    double balance;
    //methods
    bool deposit(double bal){balance +=bal; cout<<"deposited"<<endl;}
    bool withdraw(double bal){balance -=bal; cout<<"withdrawn"<<endl;}
    
};
int main(){
    Player frank;
    frank.name="Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there!!!");
    
    Player bob;
    bob.name = "Bob";
    bob.health = 200;
    bob.xp = 15;
    bob.talk("Hello There");
    
    Account frank_acc;
    frank_acc.name="Frank";
    frank_acc.balance=5000;
    
    frank_acc.deposit(1000.0);
    frank_acc.withdraw(500.0);
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy -> xp = 15;
    enemy -> talk("I will destroy you");
}*/ 

/*Class member access modifiers
-public: Accessible everywhere
-private: Accessible only by the members or friends of the class
-protected: used with inheritance (will discussduring inheritance chapter)

public
class Class_Name{
public:
    declarations;
};

private
class Class_Name{
private:
    declarations;
};

protected
class Class_Name{
protected:
    declarations;
};*/

/*#include<iostream>
#include<string>
using namespace std;
class Player{
private:
    //attributes
    string name;
    int health;
    int xp;
public:
    //methods
    void talk(string text_to_say){cout<<name<<"says"<text_to_say<<endl;}
    bool is_dead();
};
int main(){
    Player frank;
    frank.name = "Frank";
    cout<<frank.health<<endl;
    frank.talk("Hello there!!!");
    return 0;
}*/

/*Implementing member methods
Very similar to how we implemented function
member method has access to member attributes
-so you don't need to pass them arguments.
Can be implemented inside the class declaration(implicity inline)
Can be implemented outside the class declaration.
-Need to use Class_name::method_name
Can separate specification and implementation
-.h file for the class declaration
-.cpp file for the class implementation*/

/*class Account{
private:
    double balance;
public:
    void set_balance)(double bal){
        balance = bal;
    }
    void get_balance(){
        return balance;
    }
};*/

/*class Account{
private:
    double balance;
public:
    void set_balance)(double bal);
    void get_balance();
};
void Account::set_balance(double bal){
    balance = bal;
}
double Account::get_balance(){
    return balance;
}*/

/*#include<iostream>
#include<string>
using namespace std;
class Account{
private:
    string name;
    double balance;
public:
    void set_balance(double bal){balance=bal;}
    double get_balance(){return balance;}
    
    void set_name(string n);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
};
void Account::set_name(string n){
    name=n;
}
string Account::get_name(){
    return name;
}
bool Account::deposit(double amount){
    balance += amount;
    return true;
}
bool Account::withdraw(double amount){
    if(balance-amount >= 0){
        balance -= amount;
        return true;
    }
    else{
        return false;
    }
}
int main(){
    Account frank_acc;
    frank_acc.set_name("Frank");
    frank_acc.set_balance(10000.0);
    
    if(frank_acc.deposit(200.0))
        cout<<"Deposited"<<endl;
    else
        cout<<"Not Deposited"<<endl;
        
    if(frank_acc.withdraw(5000.0))
        cout<<"Withdrawn"<<endl;
    else
        cout<<"Not sufficient balance"<<endl;
    if(frank_acc.withdraw(7000.0))
        cout<<"Withdrawn"<<endl;
    else
        cout<<"Not sufficient"<<endl;
    return 0;
}*/

/*Constructor
Special member method that is invoked during object creation.
Useful for initialization.
Same name as the class.
No return type is specified
Can be overloaded.*/

/*class Player{
private:
    string name;
    int health;
    int xp;
public:
    //overloaded constructor
    Player();
    Player(string name);
    Player(string name, int health, int xp);
};*/

/*Destructor
Special Member method
Same name as class proceded with a title(~)
Invoked automatically when an object is destroyed.
No return type and no parameters.
Only one destructor is allowed per class (cannot be overloaded).
Useful to release memory and other resources.*/

/*class Player{
private:
    string name;
    int health;
    int xp;
public:
    //overloaded constructor
    Player();
    Player(string name);
    Player(string name, int health, int xp);
    //Destructor
    ~Player();
};

Player ram();
Player hari("hari");
Player Jordan("Jordan",100,12);*/

#include<iostream>
#include<string>
using namespace std;

/*class Player{
private:
    string name;
    int health;
    int xp;
public:
    void set_name(string name_val){
        name = name_val;
    }
    //overloaded constructor
    Player(){
        cout<<"No argument constructor called"<<endl;
    }
    Player(string name){
        cout<<"Single argument constructor called"<<endl;
    }
    Player(string name, int health, int xp){
        cout<<"Three argument constructor called"<<endl;
    }
    ~Player(){
        cout<<"Destructor called "<<name<<endl;
    }
};
int main(){
    {
        Player slayer;
        slayer.set_name("slayer");
    }
    Player frank;
    frank.set_name("Frank");
    Player hero;
    hero.set_name("Hero");
    Player villan("Villan",100,12);
    villan.set_name("Villan");
    
    Player *enemy= new Player;
    enemy-> set_name("Enemy");
    
    Player *level_boss = new Player("Level Boss",1000,3000);
    level_boss->set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
    
    return 0;
}*/

/*Default constructor (no args constructor)
-Does not accept any argument.
-If you write no constructors at all for a class, C++ will generate a Default constructor that does nothing.
-Called when you instantiate a new object with no arguments.*/

/*class Account{
private:
    string name;
    double balance;
public:
    Account(){
        name = "Name";
        balance = 10.0;
    }
    double get_balance(){
        return balance;
    }
    bool withdraw(double amount);
    bool deposit(double amount);
};*/

/*//non-default constructor
class Account{
private:
    string name;
    double balance;
public:
    Account(string name_val, double bal){
        name = name_val;
        balance = bal;
    }
    double get_balance(){
        return balance;
    }
    bool withdraw(double amount);
    bool deposit(double amount);
}
int main(){
    Account frank_acc("frank",100.00);
    cout<<frank_acc.get_balance()<<endl;
}*/

//Assignment-Types of constructor

/*Copy constructor
When objects are copied C++ must create a new object from an existing object.
When is a copy of an object made?
-Passing objects by value as a parameters.
-Returning an object from a function by value.
-Constructing one object based on another of the same value.
C++ must have a way of accomplishing this so it provides a compiler defined copy constructor if you dont.*/

//1st use case: When we pass an object to a function or method by value(default)
//Function decleration
/*void display_player(Player p){
    //P is a copy of hero in this example
    //Destructor of p will be called
}
//object creation and initialization
Player hero("Hero",100,20);
//Function call(using the object)
display_player(hero);*/

//2nd use case:
//object creation
/*Player enemy;
//function declaration
Player create_super_enemy(){
    Player an_enemy{"Super Enemy",1000,1000};
    return an enemy;//A copy of an_enemy is returned
}
//function call
enemy = create_super_enemy();*/

//3rd use case:
/*object creation and initialization
Player hero("Hero",100,100);
//A copy of hero is made 
Player another_hero{hero};*/

/*Beware if you have a pointer data member
-pointer will be copied
-not what it is pointing to
-Shallow copy
-Deep copy*/

class Player{
private:
    string name;
    int health;
    int xp;
public:
    string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    //Default parameterized constructor
    Player(string name_val = "None",int health_val = 0, int xp_val = 0);
    //Copy constructor
    Player(const Player &source);
    //Destructor
    ~Player(){cout<<"Destructor called for: "<<name<<endl;}
};
Player::Player(string name_val, int health_val, int xp_val)
 :name{name_val}, health{health_val}, xp{xp_val}{
    cout<<"Three args constructor called"<<endl;
}
Player::Player(const Player &source)
 :name{source.name}, health{source.health}, xp{source.xp}{
     cout<<"Copy constructor - made copy of"<<source.name<<endl;
 }
 void display_player(Player p){
     cout<<"Name"<<p.get_name()<<endl;
     cout<<"Health"<<p.get_health()<<endl;
     cout<<"xp:"<<p.get_xp()<<endl;
 }
 
 int main(){
     Player empty; //initialize as "none",0,0
     display_player(empty);
     Player frank("Frank");
     Player hero("Hero",100);
     Player villain("Villain",100,55);
 }
 
// Assignment- structure and classes, static classes, friend of a class
