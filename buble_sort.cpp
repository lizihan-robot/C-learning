#include <iostream>
using namespace std;

void BuluSort(int *arr, int len);
void ShowSort(int *arr, int len);


void BuluSort(int *arr, int len){
    for (int i=0; i<len-1 ;i++)
    {
        for (int j=0; j<len-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp =arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] ={9, 8, 7, 6, 5, 4, 3, 2, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    BuluSort(arr, len);
    ShowSort(arr, len);

    return 0;
}


void ShowSort(int *arr, int len)
{
    for (int i=0; i<len; i++)
    {
        cout << arr[i] << ",";
    }
}
