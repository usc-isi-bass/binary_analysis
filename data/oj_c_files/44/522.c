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
    void reverse(int num,int flag);
    for(int i=0;i<6;i++)
    {
        int n;
        cin>>n;
        if(n==0){cout<<'0'<<endl;}
        else
        {
            if(n<0){cout<<'-';n*=-1;}
            reverse(n,0);  //?????????
            cout<<endl;
        }
    }
    return 0;
}
void reverse(int num,int flag)  //????,flag????????
{                               //flag=0????????????   
    int c;
    c=num%10;
    if(c!=0){cout<<c;flag=1;}
    else if(c==0&&flag==1){cout<<c;}
    if((num/10)!=0)
        reverse(num/10,flag);

}
