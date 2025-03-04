/*
 1. Print the following pattern
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4                                                             */

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i;
        }
        cout << endl;
    }


}



/* 2. Print the following pattern
Input: n = 4
Output:
1 2 3 4
1 2 3
1 2
1                                                                                           */


#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n + 1 - i; j++) {
            cout << j;
        }
        cout << endl;
    }


}





/*
 3. Print the following pattern
Input: n = 4
Output:
A
A B
A B C
A B C D                                                                                       */

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }


}





/*
 4. Print the following pattern
Input: n = 4
Output:
1
A B
1 2 3
A B C D
1 2 3 4 5                                                                                          */

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number : ";
    cin >> n;


    for (int i = 1; i <= n + 1; i++) {
        int a = 1;
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            if (i % 2 != 0) {
                cout << a;
                a++;
            }
            else {
                cout << ch;
                ch++;
            }
        }
        cout << endl;
    }


}





/*
 5. Print the following pattern
Input n = 4
Output:
*
**
***
****
***
**
*                                                                                           */


#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }



}








/* 6. Print the following pattern

Sample Input : m = 4, n = 6

Sample Output :
1 ******
2 *    *
3 *    *
4 ******                                                            */

//spaces  (2,2) (2,3) (2,4) (2,5)    4 5 6 7
//        (3,2) (3,3) (3,4) (3,5)    5 6 7 8

#include<iostream>
using namespace std;
int main() {

    int n;
    cout << "n : ";
    cin >> n;
    int m;
    cout << "m : ";
    cin >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1)  cout << "*";
            else if (i == n)  cout << "*";
            else if (j == 1)  cout << "*";
            else if (j == m)  cout << "*";
            else cout << " ";
        }
        cout << endl;
    }


}







/* 7. Print the following pattern
Sample Input : n = 4
Output :
   ****
  ****
 ****
****                                                                                          */


#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        //spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        //stars
        for (int k = 1; k <= n; k++) {
            cout << "*";
        }
        cout << endl;
    }


}





/*
 8. Print the following pattern
Sample Input : n= 4
Output :
1
1 2
1 2 3
1 2 3 4                                                                                       */

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }


}






/* 9. Print the following pattern
Input : n = 4
Output :
   A
  AB
 ABC
ABCD                                                                */

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        //spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        //alphabets
        char ch = 'A';
        for (int k = 1; k <= i; k++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }


}


/* 10. Print the following pattern
Input: n = 4
Output:
1
2 1
3 2 1
4 3 2 1                                                                                      */


#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x = i;
        for (int j = 1; j <= i; j++) {
            cout << x;
            x--;

        }
        cout << endl;
    }


}







/* 11. Print the following pattern
Input: n = 4
Output:
   *
  **
 ***
****
 ***
  **
   *                                                                                          */

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        //spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        //stars
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n - 1; i++) {
        //spaces
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }
        //stars
        for (int k = 1; k <= n - i; k++) {
            cout << "*";
        }
        cout << endl;
    }

}

