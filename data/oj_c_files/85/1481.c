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
    char a[30][30];
    int n,j,k,i,t;
    scanf("%d",&n);
    gets(a[1]);  
    for(i=0;i<n;i++)
    {
      gets(a[i]);                 
      k=strlen(a[i]);    
      t=0     ;  
    for(j=0;j<=k;j++)
    { 
     if(a[i][0]>='0'&&a[i][0]<='9')  break;
     if(a[i][j]<='9'&&a[i][j]>='0') t++;
     if(a[i][j]<='z'&&a[i][j]>='a') t++;
     if(a[i][j]<='Z'&&a[i][j]>='A') t++;
     if(a[i][j]=='_')   t++;            
     } 
     if(t==k) printf("yes\n");
     else printf("no\n");
    }
}