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


char s[50];                              //?????????2?100???????50??
int i,j,k;
int flag=0;
void f(int n)                           //?????????2?n??????
{
    if(n==0)  return;
    else if(n==1)
    {
        for(i=48; i>=0; i--)       
        {
            s[i]=(s[i]-'0')*2+flag;    //???????????????2???
            if(s[i]>=10)                //??????????10?????
            {
                flag=s[i]/10;
                s[i]=s[i]%10+'0';

            }
            else
            {
                flag=0;                //???????
                s[i]=s[i]+'0';
            }
        }
        return;
    }
    else if(n==2)
    {
        for(i=48; i>=0; i--)          
        {
            s[i]=(s[i]-'0')*4+flag;    //???????????????4???
            if(s[i]>=10)                //??????????10?????
            {
                flag=s[i]/10;
                s[i]=s[i]%10+'0';

            }
            else
            {
                flag=0;                //???????
                s[i]=s[i]+'0';
            }
        }
        return ;
    }
    else
    {
        for(i=48; i>=0; i--)          
        {
            s[i]=(s[i]-'0')*8+flag;    //???????????????8???
            if(s[i]>=10)                //??????????10?????
            {
                flag=s[i]/10;
                s[i]=s[i]%10+'0';

            }
            else
            {
                flag=0;                //???????
                s[i]=s[i]+'0';
            }
        }
        f(n-3);                        //??????n-3???
    }
}
int main()
{
    int n;
    cin>>n;
    memset(s,'0',sizeof(s));            //??????????0
    s[48]='1';                          //???s[48]?1
    f(n);                              //????
    i=0;
    while(s[i]=='0')                    //??????0?????
    {
        i++;
    }
    for(j=i; j<=48; j++)                //???????????????s[48]
    {
        cout<<s[j];
    }
    return 0;
}
