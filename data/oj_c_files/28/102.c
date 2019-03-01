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

void main()
{
	char s[10000];
	int i,l,a[400],k=1;
	char c;
	gets(s);
	l=0;
	k=0;
	for(i=0;(c=s[i])!='\0';i++)
	{
		if(c!=' ')l++;
		else
		{
			a[k]=l;
			k++;	l=0;
	}
		}
	

	if(k==0)printf("%d",l);
	else if(k>0){
		printf("%d",a[0]);
		for(i=1;i<k;i++)
			if(a[i]!=0)printf(",%d",a[i]);
		printf(",%d",l);}
}

