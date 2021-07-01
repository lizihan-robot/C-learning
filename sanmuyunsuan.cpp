#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 10;
    int b = 11;
    int c =0;
    c = (a>b?a:b);

    cout << "c=" << c << endl;
    
    (a>b?a:b) = 100;
     
    cout << "b=" << b << endl;

    cout << "!!!!!!!!!!!!" << endl;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "arr地址=" << arr << endl;
    cout << "arr占用的内存空间为:" << sizeof(arr) << endl;
    cout << "arr每个元素占用的内存空间为:" << sizeof(arr[0]) << endl;
    cout << "arr元素个数为:" << sizeof(arr) / sizeof(arr[0]) << endl;


    //test weight compare 
    int weight_compare[6] = { 300, 500, 400, 350, 580, 330 };
    int max_weight = 0;
    for ( int i =0; i<(sizeof(weight_compare) / sizeof(weight_compare[0])); i++ ){
        if (weight_compare[i]>max_weight){
            max_weight = weight_compare[i];
        }
    }
    cout << "max weight = " << max_weight << endl;

    //test reversal
    int source_list[] = {1,2,3,4,5,6,7};
    int start = 0 ;
    int end = sizeof(source_list)/sizeof(source_list[0])-1;
    cout << "倒置前:" << endl;
    for (int i=0; i<sizeof(source_list)/sizeof(source_list[0]);i++){
        cout << source_list[i] << ",";
    }
    
    while (start<end){
        int temp = source_list[start];
        source_list[start]=source_list[end];
        source_list[end]=temp;
        start++;
        end--;
    }
    cout << endl;
    cout << "倒置后:" << endl;
    for (int i=0; i<sizeof(source_list)/sizeof(source_list[0]);i++){
        cout << source_list[i] << ",";
    }
    cout << endl;
    //test
    int arr1[] = {1,3,2,5,6,7,8,9,4};
    //排序升
    cout << "排序前:" << endl;
    for (int i=0; i<sizeof(arr1)/sizeof(arr1[0]);i++){
        cout << arr1[i] << ",";
    }
    cout << endl;
    int length = sizeof(arr1)/sizeof(arr1[0]);
    
    for (int i=0; i<length-1; i++){
        for (int j=0; j<length-i-1 ; j++){
            if (arr1[j]>arr1[j+1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
            
        }
    } 
    cout << "排序后:" << endl;
    for (int i=0; i<sizeof(arr1)/sizeof(arr1[0]);i++){
    cout << arr1[i] << ",";
    }
    cout << endl;

    //排序降
    cout << "排序前:" << endl;
    for (int i=0; i<sizeof(arr1)/sizeof(arr1[0]);i++){
        cout << arr1[i] << ",";
    }
    cout << endl;

    for (int i=0; i<length-1; i++){
        for (int j=0; j<length-i ; j++){
            if (arr1[j]<arr1[j+1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
            
        }
    } 
    cout << "排序后:" << endl;
    for (int i=0; i<sizeof(arr1)/sizeof(arr1[0]);i++){
    cout << arr1[i] << ",";
    }
    cout << endl;

    //数组//
    int arr_list1[2][3] = {{1,2,3},{4,5,6}};
    //数组读取值
    for (int i=0; i<2 ; i++){
        for (int j=0; j<3 ; j++){
            cout << arr_list1[i][j] << " ,";
        }
        cout << endl;
    }










    system("pause");
    return 0;

}