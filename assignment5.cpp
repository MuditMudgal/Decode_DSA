
/*1.Print all the odd numbers from 1 to 100.*/

    #include<iostream>
    using namespace std;
    int main(){
        
        int i=1;
        while(i<=100){
            if(i%2!=0){
                cout<<i<<endl;
            }
        
            i++;
        }
    }



/*2.Print all numbers from 1 to 100 that are divisible by 3.*/


    #include<iostream>
    using namespace std;
    int main(){

        int i=1;
        while(i<=100){
            if(i%3==0){
                cout<<i<<endl;
            }
            
            i++;    
        }
        
    }


/*3.Print the table of ‘n’. Here ‘n’ is an integer which the user will input.*/
    
    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cin>>n;

        int i=1;
        while(i<=10){
            cout<<(n*i)<<endl;
            i++;
        }
    }


/*4.Display this AP - 4,7,10,13,16.. upto ‘n’ terms.*/
    
    #include<iostream>
    using namespace std;
    int main(){
        
        int n;
        cin>>n;

        int i=1;
        int a=4;
        while(i<=n){
            cout<<a<<" ";
            a=a+3;
            i++;
        }

    }


/*5.Display this GP - 3,12,48,.. upto ‘n’ terms.*/
    
    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cin>>n;

        int i=1;
        int a=3;
        while(i<=n){
            cout<<a<<" ";
            a=a*4;
            i++;
        }
    }


/*6.Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.*/
    
    
    
    #include<iostream>
    using namespace std;
    int main(){
        //A-65 B-66 ... Z-90

        // logic loop lgaunga jonki 65 +1 karta rhega hai inn values ko typecast krenge 

        int i=65;

        while(i<=90){
            char ch = (char)i;
            cout<<ch<<" - "<<i<<endl;
            i++;
        }
    }