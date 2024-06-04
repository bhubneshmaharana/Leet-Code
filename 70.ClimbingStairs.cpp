#include<iostream>
using namespace std;

class Solution {
public:
// recursion approach 
    double a=1, b=1, c;
    int climbStairs(int n) {
       if(n>0){
        c = a+b;
        a= b;
        b= c;
        climbStairs(n-1);
       }
        return a;
    }
};


int main(){

    Solution s;

    int result = s.climbStairs(10);

    cout<<result;


}