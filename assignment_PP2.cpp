Print the following pattern
Input: n = 5
           Output:
           1
           1 2 3
           1 2 3 4 5
           1 2 3 4 5 6 7
           Solution:
#include <bits/stdc++.h>
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; ++j) {
			cout << j + 1 << " ";
		}
		cout << endl;
	}
	return 0;
}

Print the following pattern
Input: n = 4
           Output:
           A

           A B C
           A B C D E
           A B C D E F G

           Solution:
#include <bits/stdc++.h>
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; ++j) {
			cout << (char)('A' + j) << " ";
		}
		cout << endl;
	}
	return 0;
}

Print the following pattern
Input: n = 4
           Output:
           A
           B A B
           C B A B C
           D C B A B C D

           Solution:

#include <bits/stdc++.h>
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n - i; ++j) {
			cout << " ";
		}
		for (int j = i - 1; j >= 0; --j) {
			cout << (char)('A' + j) << " ";
		}
		for (int j = 1; j < i; ++j) {
			cout << (char)('A' + j) << " ";
		}
		cout << endl;
	}
	return 0;
}

Print the following pattern
Input: n = 4
           Output:

           A B C D E F G
           A B C E F G
           A B F G
           A G

           Solution:

#include <bits/stdc++.h>
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < 2 * n - 1; ++i) {
		cout << (char)('A' + i) << " ";
	}
	cout << endl;
	for (int i = 1; i < n; ++i) {
		for (int j = 0; j < n - i; ++j) {
			cout << (char)('A' + j) << " ";
		}
		for (int j = 0; j < 2 * i - 1; ++j) {
			cout << " ";
		}
		for (int j = 0; j < n - i; ++j) {
			cout << (char)('A' + n + i + j - 1) << " ";
		}
		cout << endl;

		Print the following pattern
Input: n = 4
           Output:
		           1 2 3 4 3 2 1
		           1 2 3 3 2 1
		           1 2 2 1
		           1 1
           Solution:

#include <bits/stdc++.h>
		int main() {
			int n;
			cin >> n;
			for (int i = 0; i < n; ++i) {
				cout << i + 1 << " ";
			}
			for (int i = n - 1; i >= 1; --i) {
				cout << i << " ";
			}
			cout << endl;
			for (int i = 1; i < n; ++i) {
				for (int j = 0; j < n - i; ++j) {
					cout << j + 1 << " ";
				}
				for (int j = 0; j < 2 * i - 1; ++j) {
					cout << " ";
				}
				for (int j = n - i; j >= 1; --j) {

					Print the following pattern
Input : n = 5
            Output:
					            * *
					            * *
					            * *
					            * *
					            *

            Solution:

#include <bits/stdc++.h>
					int main() {
						int n;
						cin >> n;
// Printing entire pattern except the bottommost star
						for (int i = 0; i < n - 1; ++i) {
							for (int j = 0; j < i; ++j) {
								cout << " ";
							}
							cout << "*";
							int m = 2 * (n - i - 1);
							for (int j = 0; j < m - 1; ++j) {
								cout << " ";
							}
							cout << "*" << endl;
						}
//Printing last star
						for (int i = 0; i < n - 1; ++i) {
							cout << " ";
						}

						Print the following pattern
Sample Input : m = 4, n = 6
                          Sample Output :
						                          *
						                          * *
						                          * *
						                          * *
						                          * *
						                          * *
						                          *
                          Solution:

#include <bits/stdc++.h>
						int main() {
							int n;
							cin >> n;
// Printing the topmost star: 0th row
							for (int i = 0; i < n; ++i)
								cout << " ";
							cout << "*" << endl;
// Printing the rest of the upper triangle: [1...n] rows
							for (int i = 1; i <= n; ++i) {
// Printing initial spaces
								for (int j = 0; j < n - i; ++j) {
									cout << " ";
								}
								cout << "*";
								int m = 2 * i - 1;
// Printing middle spaces
								for (int j = 0; j < m; ++j) {
									cout << " ";