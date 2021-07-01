#include "util.h"
using namespace std;

int main()
{
    int scores[]={1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(scores)/sizeof(scores[0]);
    cout << "len:" << len << endl;

    // printf("arr:",arr);

    for(int s=0;s<len;s++)
    {
        printf("\n score%d=%d",s,scores[s]);
    }
    for(int s : scores)
    {
        printf("\n score%d",s);
    }
    system("pause");
    return 0;
}