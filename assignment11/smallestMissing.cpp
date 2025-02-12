#include<iostream>
using namespace std;
int main(){
    
    int arr[]={3,4,5,7};
    int size=sizeof(arr)/sizeof(int);
    cout<<"size is : "<<size<<endl;

    int x=arr[0];

    for(int i=0;i<=size-1;i++){
        if(arr[i]==x)  x++;
        else {
            cout<<x;
            break;
        }

    }
    
    
 
}