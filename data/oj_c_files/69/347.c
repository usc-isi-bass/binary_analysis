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

char m[1000],n[1000];
int main()
{
	int i=0,j=0,lenm,lenn,km[1000]={0},kn[1000]={0};
	char s;
	cin>>m>>n;
	lenm=strlen(m);
	lenn=strlen(n);
	for(i=lenm-1;i>=0;i--)
	{
		km[j++]=m[i]-'0';
	}
	for(i=lenn-1,j=0;i>=0;i--,j++)
	{
		kn[j]=n[i]-'0';
	}
		for(i=0;i<lenm||i<lenn;i++)
		{
			kn[i]+=km[i];
			if(kn[i]>=10)
			{
				kn[i]-=10;
				kn[i+1]+=1;
			}
		}
		for(i=0;i<lenn||i<lenm;i++)
		{
			n[i]='0'+kn[i];
		}
		if(kn[i]!=0)
			n[i++]='0'+kn[i];
		n[i]='\0';
		i--;
		int flag=0;
		for(;i>=0;i--)
		{
			if(flag==0&&n[i]=='0')
			{
				continue;
			}
			flag=1;
			cout<<n[i];
		}
		if(flag==0)
			cout<<0;
		cout<<endl;
		return 0;
}