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
    int shuzu[100000],n,num,i,j,count;
    cin>>n;//??????? 
    for(i=0;i<n;i++)cin>>shuzu[i];//??????? 
    cin>>num;//??????? 
    for(i=0;i<n;i++)
    {
                    count=0;
                    if(shuzu[i]==num)
                    {
                                     for(j=i+1;j<n;j++)shuzu[j-1]=shuzu[j];
                                     count++;
                                     if(shuzu[i]==num)i--;
                    }//???????????????????? 
                    n=n-count;//?????????? 
    }
for(i=0;i<n;i++)
{
                cout<<shuzu[i];
                if(i<n-1)cout<<" ";
}
cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();
return 0;
}
