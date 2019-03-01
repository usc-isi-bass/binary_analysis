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

char in[102];
int lenth;
void match(int n)
{
     for(int i=0;i<lenth;i++)
     {
             if(in[i]=='('&&in[i+n]==')')
             {
                  in[i]=' ';
                  in[i+n]=' ';
             }
     }
     if(n<=lenth-2)
     {
     match(n+1);
     }
}
void print(char in[])
{
     for(int i=0;i<lenth;i++)
     {
             if(in[i]=='(')        
                  in[i]='$';
             else if(in[i]==')')   
                  in[i]='?';
             else                 
                  in[i]=' ';
     }
     cout<<in<<endl;
}
int main()
{
    while(cin>>in)
    {
           cout<<in<<endl; 
           lenth=strlen(in);
           match(0);
           print(in);
    }
    return 0;
}