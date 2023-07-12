#include<bits/stdc++.h>
using namespace std;

int reverseNum(int n){
    int temp = n, revNum = 0;
    while(temp!=0){
        int lstdigit = temp%10;
        temp /= 10;
        revNum = (revNum*10)+lstdigit;
        
    }
    return revNum;
}

int main(){
    int n = 1298;
    cout<< "Reverse of the number is " << reverseNum(n);
    return 0;
 }