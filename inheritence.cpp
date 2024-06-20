
#include <iostream>
using namespace std;
 
class A {
protected:
int a=10,b=12;
public:
    A()
    {   
        int c = a+b;
        cout<<c;
        cout<<endl;
    }
};
class B: public A
{
    public:
    B()
    {
        int d = a-b;
        cout<<d;    
        
    }
};
 
int main()
{   
   B c;
   c.A();
   c.B();


}