#include <iostream>
using namespace std;

void vectorExplore(){
    vector<int> v(5,100);
    v.push_back(1);
    
    v.emplace_back(37);
    // cout<<v;
    
    v.push_back(68);
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it);
}

int main()
{
    vectorExplore();
    return 0;
}