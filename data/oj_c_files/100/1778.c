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
    char a[300],k;
    int b[300]={0},i,e=0;
    gets(a);
    for(k='A';k<='Z';k++)
    {
         for(i=0;a[i]!='\0';i++)
         {
              if(a[i]==k)
              b[k]++;
              }
              if(b[k]!=0)
              printf("%c=%d\n",k,b[k]);
              }
              for(k='a';k<='z';k++)
    {
         for(i=0;a[i]!='\0';i++)
         {
              if(a[i]==k)
              b[k]++;
              }
              if(b[k]!=0)
              printf("%c=%d\n",k,b[k]);
              }
    for(i=0;i<300;i++)
    {
        if(b[i]!=0)
        e=1;
        }
        if(e==0)
        printf("No");
        return 0;
}
        
