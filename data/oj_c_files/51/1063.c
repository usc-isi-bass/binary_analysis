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
{      char str[1000];
       int n,m,i,j,a[1000]={0},b[1000]={0},k=0;
       scanf("%d",&n);
       char s[1000][10];
       scanf("%s",str);
       for(i=0;i<strlen(str)-n+1;i++)
       {for(j=0;j<n;j++)
       s[i][j]=str[i+j];
        s[i][n]='\0';}
       for(i=0;i<strlen(str)-n+1;i++)
       
       for(j=i;j<strlen(str)-n+1;j++)
       
       if (strcmp(s[i],s[j])==0)
       a[i]++;
        for(i=0;i<strlen(str)-n+1;i++)
        if (a[i]>k) k=a[i];
        if(k>1)
        {printf("%d\n",k);
        for(i=0;i<strlen(str)-n+1;i++)
        if (a[i]==k)  printf("%s\n",s[i]);
        }
        else printf("NO");
         
    }
