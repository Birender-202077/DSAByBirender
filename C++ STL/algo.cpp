#include <bits/stdc++.h>
using namespace std;

void explainSort(){
    // int a[]= {1,29,2,4};
    // sort(a,a+4);
    // sort(v.begin(),v.end()); //in case of vector
    // sort(a+2,a+5); //for fixed itmes sorting
    // sort(a,a+n,greater<int>); //sort in descending order

// Calcultating num of 1s in binary of number
int num = 7;
int cnt = __builtin_popcount(num);
cout<< cnt << endl;


// Calculating permutations
    string s = "231";
    sort(s.begin(),s.end()); //always start permutation from the sorted one
    do{
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

// Uisng max_element
// int arr[]= {1,2,3,6};
// int maxi = max_element(1,4);
// cout << maxi;
}

int main(){
    explainSort();
    return 0;
}