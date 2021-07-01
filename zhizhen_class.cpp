#include <iostream>
using namespace std;

void swap(int a, int b);
void swap(int *p1, int *p2);
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "swap a = " << a << endl;
    cout << "swap b = " << b << endl;
    
}

void swap2(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << "swap2 p1 = " << *p1 << endl;
    cout << "swap2 p2 = " << *p2 << endl;

}
int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    // 值传递
    swap(a ,b );
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;

    // 指针传递

    swap2(&a ,&b );
    // cout << "/&a:" << &a << endl;
    // cout << "/&b:" << &b << endl;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;





    
    return 0;
}
