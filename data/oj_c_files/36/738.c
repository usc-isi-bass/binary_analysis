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


void change(char a[])
{
	int i,j,k;
	char temp;
	k=strlen(a);
	for(i=0;i<k;i++)
		for(j=i+1;j<=k;j++)
			if(a[i]<a[j])
			{temp=a[i];a[i]=a[j];a[j]=temp;}
}




void main()
{
	int l1,l2,k=0,i;
	char a[100],b[100];
	scanf("%s%s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1==l2)
	{
		change(a);
		change(b);
		for(i=0;i<l1;i++)
		{
			if(a[i]!=b[i])k=1;
		}
		if(k==0)printf("YES");
		else printf("NO");
	}
	else printf("NO");
}