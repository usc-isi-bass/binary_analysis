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
    for(;;)
    {
        char a[101]={0},b[101]={0};      
        int l=0,c[100]={0},m;                 
        gets(a);                              
        if(a[0]==0)
        break;                    
        for(int i=0;i<101;i++)                    
        {
            if(a[i]!=0)
            {
                if(a[i]=='(')                 
                {    int p=0;
                    c[i]=-1;
                    b[i]='$';
                }
                else if(a[i]==')')            
                {  int k=0;
                    c[i]=1;
                    b[i]='?';
                }
                else b[i]=' ';               
            }
            else                                 
            {
                l=i;
                break;
            }
        }

        cout<<endl;
        for(int i=0;i<l;i++)               
            if(c[i]==-1)
                for(int j=i,sum=0;j<l;j++)
                {
                    sum=sum+c[j];

                    if(sum==0)                  
                    {
                        b[i]=' ';
                        b[j]=' ';
                        break;
                    }
                }
        cout<<a<<endl;
        cout<<b<<endl;
    }
    return 0;
}
