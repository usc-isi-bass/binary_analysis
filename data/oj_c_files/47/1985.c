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
    int data[101];
    for (int i=0;i<n;i++)
        cin>>data[i];
    for (int i=0;i<n/2;i++)
        swap(data,i,n-1-i);
    cout<<data[0];
    for (int i=1;i<n;i++)
        cout<<' '<<data[i];
    return 0;
    }