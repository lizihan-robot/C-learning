#include <iostream>
#include <string>
using namespace std;
//define 
#define Day 7


int a = 1;
int main()
{
    //cin????????
    int input = 0;
    cout << "????input" << endl;
    cin >> input;
    cout << "input = " << input << endl;

    //char ?????
    char str[] = "string abd";
    cout << "str[] =" << str << endl;

    //string ?????
    string str1 = "string 1";
    cout << "string =" << str1 << endl;

    //bool ????
    bool flag = true;
    cout << "flag =" << flag << endl;

    //int ????????
    const int month = 12;
    cout << "month= " << sizeof(month) << endl;  
    cout << "Day sizof is:" << sizeof(Day) << endl;
      
    cout << "Day= " << Day << "day" <<endl;
    cout << "Hello Vscode~~~~~" << endl;


    system("pause");
    return 0;
}