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
    int f[300][300];
    char s1[300],s2[300];
    int l1,max,p,i;
       while (scanf("%s%s",s1,s2)!=EOF)
    {
        l1=strlen(s1);
        max=0;p=0;
        for(i=0;i<l1;i++)
           if(s1[i]>max)
           {
             max=s1[i];
             p=i;          
           }
        for(i=0;i<l1;i++)
        {
           printf("%c",s1[i]);              
           if(p==i)
             printf("%s",s2);
        }     
         
        printf("\n");      
    }

}