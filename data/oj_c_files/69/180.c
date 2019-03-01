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

void plus(char* a,char* b,char* c)
{
	char temp;
	int lena,lenb,i,j,k;
	lena=strlen(a);
    lenb=strlen(b);	
	for(i=0;i<lena&&i<lenb;i++)
	{
		c[i]+=a[lena-1-i]+b[lenb-1-i]-'0';
		if(c[i]>'9')
		{
			c[i+1]++;
			c[i]-=10;
		}
	}
	if(lena>lenb)
	{
		for(i=lenb;i<lena;i++)
		{c[i]+=a[lena-1-i];
		if(c[i]>'9')
		{
			c[i+1]++;
			c[i]-=10;
		}}
	}
	else if(lena<lenb)
	{
		for(i=lena;i<lenb;i++)
		{c[i]+=b[lenb-1-i];
		if(c[i]>'9')
		{
			c[i+1]++;
			c[i]-=10;
		}}
	}
	c[i]+='0';
	while(c[i]=='0'&&i>0)
	i--;
    c[i+1]='\0';
	for(j=0,k=i;j<k;j++,k--)
	{
	   temp=c[k];
	   c[k]=c[j];
	   c[j]=temp;	
	}
}
int main()
{
	char a[N],b[N],c[N];
	scanf("%s",a);
	scanf("%s",b);
	memset(c,0,sizeof(c));
	plus(a,b,c);
	printf("%s",c);
}