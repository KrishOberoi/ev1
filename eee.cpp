#include <iostream>
using namespace std;

int maxi (int arra[10],int n){
    int i,max;
    max = arra[0];
    for (i=0;i<n;i++){
        if (arra[i]>max){
            max = arra[i];
        }
    }
    return max;
}
int mini (int arra[10],int n){
    int i,min;
    min = arra[0];
    for (i=0;i<n;i++){
        if (arra[i]<min){
            min=arra[i];
        }
    }
    return min;
}
int main(){
    int n,i;
    int arr[10],max,min;
    cout<<"enter how many digits"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    max = maxi(arr,n);
    min = mini(arr,n);
    cout<<"min number is "<<min<<endl;
    cout<<"max number is "<<max;
    return 0;


}