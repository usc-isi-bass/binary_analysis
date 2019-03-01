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
    char s[300][20],c;
    int a[300],n,i,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	scanf("%s",&s[i]);
    	a[i]=1+strlen(s[i]);
    }
    x=0;
    for(i=1;i<n;i++)
    {
    	x=x+a[i];
    	if(x<=81&&x+a[i+1]<=81) printf("%s ",s[i]);
    	if(x<=81&&x+a[i+1]>81) printf("%s",s[i]);
    	if(x>81) {printf("\n");printf("%s ",s[i]);x=a[i];}
    }
    x=x+a[n];
    if(x<=81) printf("%s",s[n]);
    if(x>81) printf("\n%s",s[n]);
    return 0;
}