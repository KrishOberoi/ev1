#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v){    //note (vector<int>) is a datatype 
    for (int i=0;i<v.size();i++){
        cout<<v[i];
    }
}
int main(){
    vector<int> v1;
    vector<int> v2(5,3);
    int size,element;
    cout<<"enter size of arry";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"vector"<<i+1;
        cin>>element;
        v1.push_back(element);
    }
    vector<int> :: iterator iter=v1.begin();
    display(v1);
    cout<<" "<<endl;
    display(v2);
    return 0;
}
