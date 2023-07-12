#include <iostream>
using namespace std;

void pairLearn(){
    pair<int, int> p = {1,3};
    cout<<p.first<<" "<<p.second << "\n";

    pair <int, pair<int,float>> x = {6,{7,9.7}};
    cout << x.second.first << "\n" << x.second.second << "\n";

    pair <int,int> arr[] = {{3,9},{1,7},{2,5}};
    cout<< arr[0].second;
}

int main(){
    pairLearn();
}