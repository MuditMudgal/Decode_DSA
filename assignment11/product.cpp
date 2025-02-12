#include<iostream>
using namespace std;
int main(){
	//product==>24*210=5040

	int arr[7]={1,2,3,4,5,6,7};
	int mult=1;
	for(int i=0;i<=6;i++){
		mult = mult*arr[i];
	}
	cout<<mult;
}