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
void swap(int *data,int a,int b)
{
     int t=data[a];
     data[a]=data[b];
     data[b]=t;
     }
int main()
{
    int n;
    cin>>n;
    int data[501];
    for (int i=0;i<n;i++)
        cin>>data[i];
    for (int i=n-1;i>=0;i--)
        for (int j=0;j<i;j++)
            if (data[j]>data[j+1])
               swap(data,j,j+1);
    int count=0;
    for (int i=0;i<n;i++)
        if (data[i]%2)
           if (count++)
              cout<<','<<data[i];
           else 
              cout<<data[i];
    
    return 0;
    }
