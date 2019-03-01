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


int f(int m,int n,int j)
{ 
	int i,s=0;
	if(n==1)
		return m>=j;
	for(i=j;i<m;i++)
		s+=f(m-i,n-1,i);
	return s;
}	
void main() 
{ 
	int n,m,s,i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&m,&n);
		if(n>m)
			n=m;
		s=f(m,n,0); 
		printf("%d\n",s);
}
}
