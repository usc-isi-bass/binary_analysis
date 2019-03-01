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
    int n,i,j,l;char s[100000][81];
    scanf("%d",&n);
    for(i=0;i<n+1;i++)
      gets(s[i]);
    for(i=1;i<n+1;i++)
     {  
     if(s[i][0]!='_'&&(s[i][0]<'A'||s[i][0]>'Z')&&(s[i][0]<'a'||s[i][0]>'z') )
     printf("0\n");
    else
     { 
       l=0;
     for(j=1;s[i][j]!='\0';j++) 
       if(s[i][j]!='_'&&(s[i][j]<'A'||s[i][j]>'Z')&&(s[i][j]<'a'||s[i][j]>'z')&&(s[i][j]<'0'||s[i][j]>'9'))
        l++;
      if(l==0)
       printf("1\n");
     else
      printf("0\n");
    }
   
    }
  getchar();getchar();
}

