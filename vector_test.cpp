#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> i1{1,2};
    for(int s:i1){
        cout << s;
    }
    cout<< "end" <<endl;

    i1.push_back(3);
    for(int s=0;s<i1.size();s++){
        cout << i1[s];
    }
    cout<< "end" <<endl;

    vector <char> c1 {'a','b','c','d'};
    for(int s=0;s<c1.size();s++){
        cout << c1[s];
    }
    // vector <string> s1 {"he","llo","wor","ld"};
    
} 