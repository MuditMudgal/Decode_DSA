//duplicates in array

#include<iostream>
using namespace std;
int main() {

	int arr[6] = {1, 15, 2, 15, 4, 6};
	bool flag = false;

	for (int i = 0; i <= 5; i++) {
		for (int j = i + 1; j <= 5; j++) {
			if (arr[i] == arr[j]) {
				flag = true;
				break;
			}
		}
		if (flag == true) break;
	}

	if (flag == true)  cout << "Duplicates";
	else cout << "No duplicates";

}




//Minimum value in array

#include<iostream>
using namespace std;
int main() {
	//min=1

	int arr[7] = {3, 6, 4, 1, 5, 2, 7};
	int min = arr[0];

	for (int i = 1; i <= 6; i++) {
		if (min > arr[i])  min = arr[i];
	}
	cout << min;
}


//Predict the output.  == 49

#include<iostream>
using namespace std;
int main() {
	int sub[50], i ;
	for (i = 0; i <= 48; i++) {

	};
	{
		sub[i] = i ;
		cout << sub[i] << endl ;
	}
	return 0;
}




//Product of array

#include<iostream>
using namespace std;
int main() {
	//product==>24*210=5040

	int arr[7] = {1, 2, 3, 4, 5, 6, 7};
	int mult = 1;
	for (int i = 0; i <= 6; i++) {
		mult = mult * arr[i];
	}
	cout << mult;
}



//Second largest in one passing

#include<iostream>
#include<climits>
using namespace std;
int main() {
	int arr[] = {1, -3, 2, 5, -2, 6, 3};
	int n = sizeof(arr) / sizeof(int);
	cout << "size is : " << n << endl;

	int mx = INT_MIN;
	int smx = INT_MIN;

	for (int i = 0; i <= n - 1; i++) {
		if (arr[i] > mx) {
			smx = mx;
			mx = arr[i];
		}
	}
	cout << "largest : " << mx << endl;
	cout << "Second largest : " << smx << endl;




}



//Smallest Missing

#include<iostream>
using namespace std;
int main() {

	int arr[] = {3, 4, 5, 7};
	int size = sizeof(arr) / sizeof(int);
	cout << "size is : " << size << endl;

	int x = arr[0];

	for (int i = 0; i <= size - 1; i++) {
		if (arr[i] == x)  x++;
		else {
			cout << x;
			break;
		}

	}



}