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
    char str[14],substr[4];
    int l,max,n,i;
    while(cin>>str>>substr)
    {
        l=strlen(str);
        max=str[0];n=0;
        for(i=0;i<l;i++)
        {
            if(str[i]>max)
            {
                max=str[i];
                //cout<<i<<" ";
                n=i;              
            }         
        }
        for(i=l+3;i>=n+4;i--)
        {
            str[i]=str[i-3];                     
        }
        str[n+1]=substr[0];
        str[n+2]=substr[1];
        str[n+3]=substr[2];
        cout<<str<<endl;       
                
    }
    return 0;    
}