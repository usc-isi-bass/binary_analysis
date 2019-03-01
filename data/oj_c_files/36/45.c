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


char s1[MAX],s2[MAX];
int stat1[300],stat2[300];
int len;

int main()
{
	int i,flag;
	cin>>s1>>s2;
	len=strlen(s1);
	if (strlen(s2)!=len)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	memset(stat1,0,sizeof (stat1));
	memset(stat2,0,sizeof (stat2));
	for (i=0;i<len;i++)
	{
		stat1[s1[i]]++;
		stat2[s2[i]]++;
	}
	flag=1;
	for (i=0;i<300;i++)
	{
		if (stat1[i]!=stat2[i])
		{
			flag=0;
			break;
		}	
	}
	if (flag==0)
	{
		cout<<"NO"<<endl;
	}
	if (flag==1)
	{
		cout<<"YES"<<endl;
	}
	return 0;
}
