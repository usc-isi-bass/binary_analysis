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
    int j,i,a[1000]={0},l,count=0;
    char s[1000];
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
                    if(s[i]!=' ')
                    a[i]=1;
   }
   i=0;
   while(i<l)
   {
    if(a[i]==0)
    count++;
    if(a[i]==1 && count !=0)
    {
       for(j=i+1-count;j<l+1-count;j++)
       {
                                       s[j]=s[j+count-1];
                                       a[j]=a[j+count-1];
       } 
       l=l-count+1;
         i=i-count+1;
         count=0;
    } 
       
    i++;
    }
    for(i=0;i<l;i++)
    printf("%c",s[i]);
    getchar();
    getchar();
}