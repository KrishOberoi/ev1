#include <iostream>
#include <ctime>
using namespace std;
class amount{
    protected:
    int amt;
    public:
    void getamt(){
        cout<<"enter how much"<<endl;   
        cin>>amt;
    }
};
class odds
{
    public:
    int hilow;
    void getodds(){
    cout<<"enter higher or lower than which number (1-10)"<<endl;
    cin>>hilow;
}
};
class results: public amount, public odds 
{   
    public:
    int num;
    void number(){
        srand(time(NULL)); //The srand() function sets the starting point for producing a series of pseudo-random integers
        int num = (rand()%10)+1;
        cout<<num;
    }

    void finalres(){
        if (num<hilow){
            cout<<"final amount is "<<amt*2;
        }
        else
        cout<<"final amount is 0";
    }
};
int main()
{
    results r;
    r.getamt();
    r.getodds();
    r.number();
    r.finalres();
    cout<<"thank you for playing";
return 0;
}