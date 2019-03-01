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

/*
Name:???
ID:1200012842
Email:443972553@qq.com
*/
int main()
{
    int n,k;
    cin>>n>>k;
    int data[1001];
    for (int i=0;i<n;i++)
        cin>>data[i];
    for (int i=0;i<n;i++)
        for (int j=0;j<i;j++)
            if (data[i]+data[j]==k)
            {
               cout<<"yes"<<endl;
               return 0;                       
               }
    cout<<"no"<<endl;
    return 0;
    
    }
