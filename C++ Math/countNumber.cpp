// Method 1 with TC O(n)

#include<iostream>
using namespace std;

int countDigit(int num){
    int x = num;
    int count = 0;

    while(x!=0){
        x=x/10;
        count++;
    }
    return count;
}

int main(){
    int num = 12345;
  
    cout << "Total Digits in " << num << " is " << countDigit(num);
    return 0;
}

//Method 2 with TC O(1)

#include <iostream>
using namespace std;

int countDigits(int n){
    string x = to_string(n);
    return x.length();
}

int main(){
    int n = 123;
    cout << "Length of " << n <<" is " << countDigits(n);
    return 0;
}

// Method 3 - Use logarithm base 10 to count the number of digits. As the number of digits in an integer = the upper bound of log10(n).
#include <iostream>
#include<math.h>
using namespace std;

int count_digit(int n){
    int digit = floor(log10(n) + 1);
    return digit;
}

int main(){
    int n = 5678;
    cout << "Length is " << count_digit(n);
    return 0;
}