/*Binary operator
#include <iostream>
#include<math.h>
using namespace std;

class A{
public:
    float a;
    float b;
    float c;
    
}ft,inch,total;
int main()
{
    int i;
    int d;
    cout<<"enter  ft1:"<<endl;
    cin>>ft.a;
    cout<<"enter  ft2:"<<endl;
    cin>>ft.b;
    cout<<"enter  inch1:"<<endl;
    cin>>inch.a;
    cout<<"enter  inch2:"<<endl;
    cin>>inch.b;
    
    ft.c= ft.a+ ft.b;
    inch.c= inch.a+ inch.b;
    
    d=floor(inch.c/12);
    for(i=0;i>d;i++)
    {
        inch.c=d;
        ft.c=ft.c+d;
    }
    cout<<"total distance: "<<ft.c<<"ft"<<inch.c<<"inch"<<endl;
}*/

/*//same as above but different method
#include<iostream>
using namespace std;
class Distance{
private:
    int feet;
    float inches;
public:
    Distance():feet(0),inches(0.0){}
    Distance(int ft,float in):feet(ft),inches(in){}
    void getdist(){
        cout<<"\nEnter feet: "; cin>>feet;
        cout<<"\nEnter inches: "; cin>>inches;
    }
    void showdist() const{
        cout<<feet<<"\'"<<inches<<"\'";
    }
    Distance operator + (Distance d2) const{
        int f = feet + d2.feet;
        float i = inches + d2.inches;
        if(i>=12.0){
            i -= 12.0;
            f++;
        }
        return Distance(f,i);
    }
};
int main(){
    Distance dist1,dist3;
    dist1.getdist();
    Distance dist2;
    dist2.getdist();
    Distance dist4;
    dist3 = dist1 + dist2;
    dist4 = dist1 + dist2 + dist3;
    cout<<"Dist1="; dist1.showdist(); cout<<endl;
    cout<<"Dist2="; dist2.showdist(); cout<<endl;
    cout<<"Dist3="; dist3.showdist(); cout<<endl;
    cout<<"Dist4="; dist4.showdist(); cout<<endl;
    return 0;

}*/

#include <iostream>
using namespace std;
class concat{
  private:
  string s;
  public:
  concat():s("s"){}
  concat(string n):s(n){}
  void getdata(){
    cout<<"enter s1: "; cin>>s;

  }

  void showdata() const{
    cout<<s<<" ";
  }
  concat operator + (concat c) const{
    string s1 = s + " " + c.s;
    return concat(s1);

  }
   
};
int main(){
  concat a,b,c;
  a.getdata();
  b.getdata();
  c = a+b;
  cout<<"a="; a.showdata(); cout<<endl;
  cout<<"b="; b.showdata(); cout<<endl;
  cout<<"c="; c.showdata(); cout<<endl;



}