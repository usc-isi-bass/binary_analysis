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

struct jianfa
{
	char bjs[100];
	char js[100];
}a[20];
void main()
{
	int i,l[20],j[20],k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
    scanf("%s %s",a[i].bjs,a[i].js);
	getchar();
	l[i]=strlen(a[i].bjs);
	j[i]=strlen(a[i].js);
	}
	for(k=0;k<n;k++)
	{
	for(i=0;i<j[k];i++)
	{
		a[k].bjs[l[k]-1-i]=a[k].bjs[l[k]-1-i]-a[k].js[j[k]-1-i]+48;
		if(a[k].bjs[l[k]-1-i]<48)
		{
			a[k].bjs[l[k]-1-i]=a[k].bjs[l[k]-1-i]+10;
			a[k].bjs[l[k]-2-i]=a[k].bjs[l[k]-2-i]-1;
		}
	}
	puts(a[k].bjs);
	}
}