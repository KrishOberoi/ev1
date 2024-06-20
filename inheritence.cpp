
#include <iostream>
using namespace std;
 
class A {
protected:
int a=10,b=12;
public:
    void add()
    {   
        int c = a+b;
        cout<<c;
        cout<<endl;
    }
};
class B: public A
{
    public:
    void sub()
    {
        int d = a-b;
        cout<<d;    
        
    }
};
 
int main()
{   
   B c;
   c.add();
   c.sub();


}