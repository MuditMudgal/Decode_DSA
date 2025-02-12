#include<iostream>
using namespace std;
int main(){
	//min=1

	int arr[7]={3,6,4,1,5,2,7};
	int min=arr[0];

	for(int i=1;i<=6;i++){
		if(min>arr[i])  min = arr[i];
	}
	cout<<min;
}