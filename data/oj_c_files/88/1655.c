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

void main(){
	char a[30];
	gets(a);
	char *pt[30];
	int i,j,l,s[30],m;
	l=strlen(a);
	j=0;
	i=0;
	if(a[0]<58&&a[0]>47) 
	{
		pt[0]=&a[0];
		j=1;
	}
	for(i=1;i<l;i++)
	{
		if(a[i]<58&&a[i]>47&&(a[i-1]>58||a[i-1]<47))
		{
			pt[j]=&a[i];
			j=j+1;
		}
		else
		{
			if(a[i-1]<58&&a[i-1]>47&&(a[i]>58||a[i]<47))
			{
				s[j-1]=(&a[i]-pt[j-1]);
			}
		}
	}
	if(a[l-1]<58&&a[l-1]>47) s[j-1]=(&a[l-1]-pt[j-1]+1);
	for(i=0;i<j;i++)
	{
		for(m=0;m<s[i];m++)
		{
			printf("%c",*(pt[i]+m));
		}
		printf("\n");
	}
	scanf("%d",&i);
}