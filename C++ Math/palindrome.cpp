#include <iostream>
using namespace std;

bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        else{
            int temp = x;
            long revNum = 0; 
            int dup = x;
            while(temp != 0){
            int digit = temp%10;
            temp /= 10;
            revNum = (revNum*10)+digit;
        }
        if(revNum == dup) {
            return true;}
        else {
            return false;}
    }

}


int main(){
    int  x = 23679;
    cout << isPalindrome(x);
}    
   
