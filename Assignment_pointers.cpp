//1_: Write a program to find the product of two numbers using pointers.

#include<iostream>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int *p = &m, *q = &n;

	cout << (*p)*(*q);
}


//2_:  int *p, q;
// p is a pointer and q is an integer.
// p and q both are pointers.
// P and q both are integers.
// Syntax is incorrect.

//p is a pointer and q is variable ;

//ques 3:

#include<iostream>
using namespace std;
int main() {
	int a = 10, b = 20;
	int *ptr = &a;
	b = *ptr + 1;
	ptr = &b;
	cout << *ptr << " " << a << " " << b;


}



//ques_4
#include<iostream>
using namespace std;
int main() {

	int a = 15, b = 20;
	int *ptr = &a;
	int *ptr2 = &b;
	*ptr = *ptr2;

	cout << a << " " << b;

}


//ques_5
#include<iostream>
using namespace std;
int main() {

	int a = 10, b = 20;
	int *ptr;
	*ptr = 5;

}

//No this code is not correct due to no initialization of address
//to pointer