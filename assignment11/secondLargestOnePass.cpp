#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,-3,2,5,-2,6,3};
    int n = sizeof(arr)/sizeof(int);
    cout<<"size is : "<<n<<endl;

    int mx=INT_MIN;
    int smx=INT_MIN;

    for(int i=0;i<=n-1;i++){
        if(arr[i]>mx){
            smx=mx;
            mx=arr[i];
        }
    }
    cout<<"largest : "<<mx<<endl;
    cout<<"Second largest : "<<smx<<endl;


 
 
}