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
    char s[1000],ss[1000];int i,j,l,c[1000];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
    if(s[i]>='a'&&s[i]<='z')
        s[i]=s[i]-32;
    if(s[i]>='A'&&s[i]<='Z')
       s[i]=s[i];
    } 
    ss[0]=s[0];
    j=0;
    for(i=0;s[i]!='\0';i++)
      {
    if(s[i]==ss[j])
       c[j]++;
    else
       {j++;
       ss[j]=s[i];
       c[j]++;}
       }
    for(i=0;i<=j;i++)
      printf("(%c,%d)",ss[i],c[i]);
    getchar();getchar();
       
}
