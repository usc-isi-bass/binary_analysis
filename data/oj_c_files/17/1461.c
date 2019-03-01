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
int n,i,j,m=0,x,y;
scanf("%d",&n);
char a[100][1000];
for(i=0;i<n+1;i++)
 gets(a[i]);
for(i=0;i<n+1;i++)
  {for(j=0;a[i][j]!='\0';j++)
     printf("%c",a[i][j]);
     printf("\n");
     x=j;
   for(j=0;j<x;j++)
    {if(a[i][j]==')')
      {if(j==0)a[i][j]='?';
       for(m=1;j-m>=0;m++)
         if(a[i][j-m]=='('){a[i][j-m]=' ';a[i][j]=' ';break;}
         else a[i][j]='?';}
     if(a[i][j]!='('&&a[i][j]!=')'&&a[i][j]!='?')a[i][j]=' ';}
   for(j=x-1;j>=0;j--)
      if(a[i][j]=='(')
         {if(j==x-1)a[i][j]='$';
          else for(m=1;j+m<x;m++)
            if(a[i][j+m]==')'){a[i][j]=' ';a[i][j+m]=' ';break;}
             else a[i][j]='$';}
     for(j=0;j<x;j++)
       printf("%c",a[i][j]);
     printf("\n");
  }
  return 0;
}