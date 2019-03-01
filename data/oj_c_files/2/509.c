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

struct book
{
	int id;
	char s[L];
	int len;
}b[M];
void fun(int count[L],char s[L],int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		int m;
		m=s[i]-'A';
		count[m]++;
	}
}
int judge(char s[L],int len,char name)
{
	int i,answer=0;
	for(i=0;i<len;i++)
	{
		if(s[i]==name)
		{
			answer=1;
			break;
		}
	}
	return answer;
}

int main()
{
	int m,k,count[L]={0},i,j,max,num;
	char name;
	scanf("%d",&m);
	for(k=0;k<m;k++)
	{
		scanf("%d%s",&b[k].id,b[k].s);
		b[k].len=strlen(b[k].s);
		fun(count,b[k].s,b[k].len);
	}
	max=count[0];
	num=0;
	for(j=1;j<L;j++)
	{
		if(count[j]>max)
		{
			max=count[j];
			num=j;
		}
	}
	name=num+65;
	printf("%c\n",name);
	printf("%d\n",max);
	for(k=0;k<m;k++)
	{
		int answer=0;
		answer=judge(b[k].s,b[k].len,name);
			if(answer==1)
				printf("%d\n",b[k].id);
	}
	return 0;
}


