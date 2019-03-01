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
int m,i,l;
char s[100],sub[10]={0};
while(scanf("%s%s",s,sub)!=EOF)
     {
        l=strlen(s);
        m=0;
        for(i=1;i<l;i++)
           {
                if(s[i]>s[m])
                  m=i;
           }
        for(i=l+3;i>m+3;i--)
        {
          s[i]=s[i-3];
        }
        s[m+1]=sub[0];
        s[m+2]=sub[1];
        s[m+3]=sub[2];
        printf("%s\n",s);
     }
}