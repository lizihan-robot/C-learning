#include "util.h"
using namespace std;
int main(){
    string s1 = "hello";
    string s2 = "world";
    string s3;
    s3 = s1 + s2;
    cout << "s1:" << s1 << endl;
    cout << "s2:" << s2 << endl;
    cout << "s3:" << s3 << endl;
    cout << "length=" << s1.length() << endl;
    system("pause");
    return 0;
}