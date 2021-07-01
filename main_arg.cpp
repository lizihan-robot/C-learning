#include<util.h>

int main(int argc , char ** argv)
{
    cout << "argument total" << argc << endl;
    for (int i=0;i<argc;i++)
    {
        printf("argument :",i,argv[i]);
        cout << "argument :" << i << "=" << argv[i] << endl;
        
    };
    system("pause");
    return 0;
}

