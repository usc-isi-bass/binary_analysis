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
     int i,n;
        n=1;
     char str[1001];
     scanf("%s",str);
     for(i=0;i<strlen(str);i++)
     {
        if(str[i]>='a'&&str[i]<='z')
        {
           str[i]=str[i]-'a'+'A';
        }
     }
     i=0;
     while(i<strlen(str))
     {
        if(str[i]==str[i+1])
        {
           n=n+1;
        }
        else
        {
           printf("(%c,%d)",str[i],n);
           n=1;
        }
        i++;
     }
 }