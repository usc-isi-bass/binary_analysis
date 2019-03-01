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
    int n;
    cin>>n;
    int s[20];
    s[0]=s[1]=1;
    for(int i=2;i<20;i++)
       {
           s[i]=s[i-1]+s[i-2];//???????????20???????????
       }
    int temp;//???????
    for(int j=0;j<n;j++)
       {
           cin>>temp;
           cout<<s[temp-1]<<endl;//???????????????
       }
    return 0;
}