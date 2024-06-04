#include<iostream>
using namespace std;

// move (n-1) from A-B using C
// move nth disk from A to C
// Move (n-1) disk from B-C using A

int Hanoi(int n ){
    // base case 
    if(n == 2) return 3;
    else if(n == 1) return 1;

    // Recursive Realation 
    return Hanoi(n-1)+Hanoi(1)+Hanoi(n-1);
}


int main(){

    cout<< Hanoi(4);
    return 0;
}