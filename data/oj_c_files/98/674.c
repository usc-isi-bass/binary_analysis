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
    char word[1000][50];
    int sum=0,n,i;
    cin>>n;
    cin.get();
    for(i=0;i<n;i++)
    cin.getline(word[i],50,' ');

    for(i=0;i<n-1;i++)
    {
           sum+=strlen(word[i])+1;
           if(sum+strlen(word[i+1])<=80)
                  cout<<word[i]<<" ";
           else if(sum+strlen(word[i+1])>80)
           {
                 cout<<word[i]<<endl;
                 sum=0;
           }
    }
    cout<<word[n-1]<<endl;

    return 0;
}
