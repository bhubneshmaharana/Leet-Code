#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

// Music 
/*

1. https://www.youtube.com/watch?v=ZQBgxRuJQqg&list=RDhsoHn9JXBhA&index=4
2.
*/

int factorial(int n){
    
    // base case 
    if(n < 1) return 1;
    
    // recursive relation 
    return n*factorial(n-1);
}


double power(int m, int n){

    // base case 
    if(n < 1) return 1;

    // recursive Relation 
    return m*power(m,n-1);
}

void count(int n){

/* Tail Recusrion - Printing the list forward*/
    // // processing 
    // cout<<n<<endl;

    // // base case 
    // if(n == 0) return ;

    // // recursive relation 
    // count(n-1);

/* Head Recursion - printing the list from last/base case */
    // base case 
    if(n == 0) {
        cout<<"0"<<endl;
        return ;
    }

    // recursive relation 
    count(n-1);

    // process
    cout<<n<<endl;

}


class fibbonaci{
    public:
        int a = 0, b = 1, c;

    int fibbSequence(int n){

        //process 
        cout<< a<<endl;

        //base case 
        if(n>0){
            c = a + b;
            a = b;
            b = c;
        
        // recursive call
        fibbSequence(n-1);
        }

        

        return 0;

    }

    void fibbHello(){
        cout<<"Hello Recursion";
    }

    int fibbNumber(int pos){
        // base case 
        if(pos <= 1) return pos; 

        // recursive call 
        return fibbNumber(pos-1)+fibbNumber(pos-2);
    }

};



 int climbStairs(int n) {
       static int a=1, b=1, c;
       if(n>0){
        c = a+b;
        a= b;
        b= c;
        climbStairs(n-1);
       }
        return a;
    }

string wordNumber[] = {"zero","one","two","three","four","five",
                        "six","seven","eight","nine"};

void sayNumber(int num){
    
    // base case 
    if(num/10 == 0) {
    cout<< wordNumber[num%10]<<endl;

    return ;
    }

    // Recursive Call 
    sayNumber(num/10);

    // process 
    cout<< wordNumber[num%10]<<endl;
}




int main(){



// int result = factorial(5);
// double result = power(5,3);
// count(10);
// cout<<result ;

// fibbonaci* f1 = new fibbonaci(6);
// fibbonaci f2 ;

// f2.fibbHello(); // Hello Recurion
// cout<< endl<< f2.fibNumber(10); // 55
// f2.fibbSequence(10);

// cout<<climbStairs(3);

// sayNumber(345);

return 0;
}



