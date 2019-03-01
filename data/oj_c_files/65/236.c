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

int main(){
	int n,a,b,i,k,h;
	k=0;
	h=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		if(a==b)
		{
			k=k;
			h=h;
		}
		if(a==0&&b==1)
		{
			k=k+1;
		}
		if(a==1&&b==2)
		{
			k=k+1;
		}
		if(a==2&&b==0)
		{
			k=k+1;
		}
		if(a==0&&b==2)
		{
			h=h+1;
		}
		if(a==2&&b==1)
		{
			h=h+1;
		}
		if(a==1&&b==0)
		{
			h=h+1;
		}
	}
	if(k>h){printf("A");}
	if(k<h){printf("B");}
	if(k==h){printf("Tie");}
	return 0;
}