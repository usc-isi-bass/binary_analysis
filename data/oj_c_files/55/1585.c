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
	int n,m,i,j,k,l;
	char as[30],ds[30],cs[30];
	long bs;
	scanf("%d%s%d",&n,as,&m);
	j=1;
	l=strlen(as);
	bs=0;
	for(i=l-1;i>=0;i--)
	{
		if(as[i]>='A'&&as[i]<='Z')
			k=as[i]+10-'A';
		else if(as[i]>='a'&&as[i]<='z')
			k=as[i]+10-'a';
		else if(as[i]>='0'&&as[i]<='9')
			k=as[i]-'0';
		bs+=j*k;
		j*=n;
	}
	for(i=0;bs>0;i++)
	{
		ds[i]=bs%m;
		bs/=m;
	}
	for(j=0;j<i;j++)
	{
		cs[j]=ds[i-j-1];
		if(cs[j]>=0&&cs[j]<10)
			cs[j]+='0';
		else if(cs[j]>=10)
			cs[j]=cs[j]-10+'A';
	}
	cs[i]=0;
	if(cs[0]==0)
	{
		cs[0]='0';
		cs[1]=0;
	}

	printf("%s",cs);
	return 0;
}
