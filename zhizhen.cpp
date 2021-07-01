#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    // int *p = &a;
    // int *p;
    // p = &a;
    // p= &b;


    //常量指针
    // const int *p =&a;
    // p = &b;

    //指针常量
    // int * const p = &a;
    // *p = 100;

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int * p = arr;
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]);i++){
        // cout << arr[i] << ",";
        cout << *p << ",";
        p++;
    }

    system("pause");
    return 0;

}