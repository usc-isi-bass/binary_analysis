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


main()
{
    char s[100000];
    int t,i,j,k,n,m;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%s",s);
        n=strlen(s);
        
        for(i=0;i<n;i++)
        {
            m=0;
            for(j=0;j<n;j++)
            {
                if(s[i]==s[j])
                m++;
                else;
            }
            if(m==1)
            break;
            else;
        }
        if(m!=1)
        printf("no\n");
        else
        printf("%c\n",s[i]);
    }
   
  
}