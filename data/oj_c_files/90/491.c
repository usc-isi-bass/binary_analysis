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

int man(int m,int n)
{
	int s;
	int fenfa(int x,int y);
	if(m==n) s=1;
	else s=fenfa(m-n,n);
	return(s);
}
int kong(int m,int n)
{
	int s;
	int fenfa(int x,int y);
	s=fenfa(m,n-1);
	return(s);
}
int fenfa(int m,int n)
{
	int s;
	if(m<n) n=m;
	if(n==1) s=1;
	else s=kong(m,n)+man(m,n);
	return(s);
}
void main()
{
	int M,N,t,i,s;
	scanf("%d",&t);
	for(i=0;i<t;i++) 
	{
	    scanf("%d %d",&M,&N);
		s=fenfa(M,N);
	    printf("%d\n",s);
	}
}