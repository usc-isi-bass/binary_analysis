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
	char a[252],b[252],f[252],g[252];
	int i,c,d,t=0,n=0;
	scanf("%s%s",a,b);
	c=strlen(a);
	d=strlen(b);\
	if(c>d)
	{
		strcpy(f,a);
		strcpy(a,b);
		strcpy(b,f);
		i=c;
		c=d;
		d=i;
	}
	for(i=0;i<c;i++)
	{
		f[i]=(a[c-1-i]-'0'+b[d-1-i]-'0'+t)%10+'0';
		t=(a[c-1-i]-'0'+b[d-1-i]-'0'+t)/10;
	}
	n=c;
	if(c==d&&t==1)
	{
		f[n]='1';
		n+=1;
	}
	if(c<d)
	{
		for(i=n;i<d;i++)
		{
			f[i]=(b[d-1-i]-'0'+t)%10+'0';
			t=(b[d-1-i]-'0'+t)/10;
		}
		n=d;
		if(t==1)
		{
			f[n]='1';
			n+=1;
		}
	}
	if(f[n-1]=='0'&&n!=1)
	{
		for(i=n-2;f[i]=='0';i--);
		n=i+1;
	}
	for(i=0;i<n;i++)
	{
		g[i]=f[n-1-i];
	}
	g[n]='\0';
	printf("%s\n",g);
	return 0;
}