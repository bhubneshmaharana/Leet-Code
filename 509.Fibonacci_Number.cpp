#include<iostream>
using namespace std;


class Solution {
public:
    int fibb(int n) {
          if(n<= 1) return n ;

        return fibb(n-1)+fibb(n-2);
    }
};


int main(){

    Solution s;

    cout<<s.fibb(10);

    return 0;
}