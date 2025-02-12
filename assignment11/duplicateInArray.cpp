#include<iostream>
using namespace std;
int main(){

    int arr[6]={1,15,2,15,4,6};
    bool flag = false;

    for(int i=0;i<=5;i++){
        for(int j=i+1;j<=5;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }  
        }
        if(flag==true) break;
    }

    if(flag==true)  cout<<"Duplicates";
    else cout<<"No duplicates";

}