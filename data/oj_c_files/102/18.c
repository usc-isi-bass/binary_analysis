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
	int n,i,nm=0,nf=0,j;
	double m[40],f[40],t;
	struct people
	{
		char s[10];
		double l;
	}a[40];
	scanf("%d",&n);
	for (i=0;i<n;i++) 
	{
		scanf("%s%lf",a[i].s,&a[i].l);
		if (a[i].s[0]=='m') 
		{
			m[nm]=a[i].l;
			nm++;
		}
		else
		{
			f[nf]=a[i].l;
			nf++;
		}
	}
	for (i=0;i<nm-1;i++)
		for (j=i+1;j<nm;j++)
			if (m[j]<m[i]) 
			{
				t=m[i];
				m[i]=m[j];
				m[j]=t;
			}
	for (i=0;i<nf-1;i++)
		for (j=i+1;j<nf;j++)
			if (f[j]>f[i])
			{
				t=f[i];
				f[i]=f[j];
				f[j]=t;
			}
	for (i=0;i<nm;i++) printf("%.2lf ",m[i]);
	for (i=0;i<nf-1;i++) printf("%.2lf ",f[i]);
	printf("%.2lf\n",f[nf-1]);
	return 0;
}