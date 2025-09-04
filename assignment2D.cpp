#include<iostream>
using namespace std;
int main(){
 
    int arr[3][3];
    int brr[3][3];
    //cin for arr
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    //cin for brr
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>brr[i][j];
        }
    }
 
    //add
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
 
}



#include<iostream>
using namespace std;
int main(){
 
// 1 2 3
// 4 5 6
// 7 8 9
//output - 1 3 5 7 9

    int n;
    cin>>n;
    int arr[n][n];
    //cin
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //upper diagonal
            if(i==j){
                cout<<arr[i][j]<<" ";
            }
            else if(i+j==n-1){
                cout<<arr[i][j]<<" ";
            }
        }
    }
 
 
 
}


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int max=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }

    cout<<max;
 
 
 
 
}


#include<iostream>
using namespace std;
int main(){
 
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    //cin
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int max=0;
    int max_row=0;

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
        if(sum>max){
            max = sum;
            max_row=i;    
        }
    }

    cout<<max<<" "<<max_row; 
 
 
 
 
}

#include<iostream>
using namespace std;
int main(){
 
    int n;
    cin>>n;
    int arr[n][n];  
    //cin
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //printing logic 

    int mid = n/2;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        if(i==mid or j==mid){
            cout<<arr[i][j];
        }
        else{
            cout<<" ";
        }
       }
       cout<<endl;
    }
 
 
 
 
}


#include<iostream>
using namespace std;
int main(){
 
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    //cin
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    int l1,r1,l2,r2;
    cout<<"Enter l1: ";
    cin>>l1;
    cout<<"Enter r1: ";
    cin>>r1;
    cout<<"Enter l2: ";
    cin>>l2;
    cout<<"Enter r2: ";
    cin>>r2;

    //sum rectangle logic
    int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum=sum+arr[i][j];
        }
    }

    //cout
    cout<<endl<<"sum : "<<sum;

 
 
 
}


// Write a program to rotate the matrix by 90 degrees anti-clockwise.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// Output - 
// 3 6 9
// 2 5 8
// 1 4 7

#include<iostream>
using namespace std;
int main(){
 
    int n;
    cin>>n;
    int arr[n][n];
    //cin
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            //swapping
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    //reverse wrt coloumn / coloumn ko fix kr do
    //outer loop col
    // c0 = (i,c0) .... (j,c0)
    // c1 = (i,c1) .... (j,c1)
    // c2 = (i,c2) .... (j,c2)
    for(int c=0;c<n;c++){
        int i=0;
        int j=n-1;
        while(i<j){
            swap(arr[i][c],arr[j][c]);
            i++;
            j--;
        }
    }

    //cout
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

 
 
 
 
}


#include<iostream>
using namespace std; 
int main(){
 
    int n;
    cin>>n;

    int arr[n][n];

    int minr=0;
    int minc=0;
    int maxr=n-1;
    int maxc=n-1;

    while(minr>maxr && )
    //right  fix (minc)
    //down
    //left
    //up
 
 
 
 
}


#include<iostream>
using namespace std;
int main(){
 
    int arr[5][5];
    //cin
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //cout
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
 
 
 
 
}



#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int arr[n][n];
    //cin
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }    
    }cout<<endl;
    
    // coloumn wise printing (top to down)
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<n;i++){
               cout<<arr[i][j]<<" ";
        }
        }
    }
 
}