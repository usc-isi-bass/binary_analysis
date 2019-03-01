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

//????
int guess(int num)
{
    if(num==1)    
    {
        cout<<"End"<<endl;
        return 1;
    }
    if(num!=1)
    {
        if(num%2==0)    
        {
            cout<<num<<"/2="<<num/2<<endl;
            return guess(num/2);
        }
        if(num%2!=0)    
        {
            cout<<num<<"*3+1="<<3*num+1<<endl;
            return guess(3*num+1);
        }
    }
}
int main()
{
    int n=0;
    cin>>n;
    guess(n);
    return 0;
}   