#include <iostream>
#include <string>
#include "yunsuan.h"
using namespace std;
// void turn_test(int a, int b);
void turn_test(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "a =" << a << endl;
    cout << "b =" << b << endl;
}




int main()
{
    int a1 = 10;
    int b1 = ++a1*10;
    cout << "a1=" << a1 << endl;
    cout << "b1=" << b1 << endl; 

    int a2 = 10;
    int b2 = a2++*10;
    cout << "a2=" << a2 << endl;
    cout << "b2=" << b2 << endl; 
    
    if (a1 = a2){
        cout << "a1=a2" << endl;
    }
    if (a1 != b1){
        cout << "a1!=a2" << endl;
    }

    turn_test(a1 ,b1);

    system("pause");
    return 0;

}
