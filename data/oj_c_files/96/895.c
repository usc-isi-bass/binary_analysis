#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char a[110];
    cin>>a;
    int b[110];
    int temp=0;
    if(strlen(a)<=5)
    {
                    int t=atoi(a);
                    cout<<t/13<<endl;
                    cout<<t%13<<endl;
    }//???????? 
    else
    {
         for(int i=0;i<strlen(a);i++)
        {
                temp=temp*10+(a[i]-'0');
                b[i]=temp/13;
                temp=temp%13;
        }//???? 
        if(b[1]!=0)
        {
                   cout<<b[1];
        }
        for(int i=2;i<strlen(a);i++)
        {
                cout<<b[i];
        }
        cout<<endl<<temp<<endl;
    }   
    return 0;
}
