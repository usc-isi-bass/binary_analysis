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

int apple(int m,int n,int j); 
int main(void) 
{ 
	int t,j,n,m,s; 
    scanf("%d",&t);
	for(j=0;j<t;j++) 
	{
		scanf("%d%d",&m,&n); 
        if(n>m) n=m; 
        s=apple(m,n,0); 
        printf("%d\n",s); 
	}
	return 0;
}

int apple(int m,int n,int j) 
{
	int i,s=0; 
	if(n==1) return m>=j; 
    for(i=j;i<m;i++) s+=apple(m-i,n-1,i); 
    return s; 
}
