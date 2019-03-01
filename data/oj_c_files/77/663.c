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

char boy,girl;
int l;
void result(char a[],int remain)//????????????????????????????
{
	int i,j;
	for(i=0;i<l;i++)
	{
		if(a[i]==girl)
		{
			for(j=i-1;j>=0;j--)
			{
				if(a[j]==boy)
				break;
			}
			a[i]='0';a[j]='0';
			cout<<j<<" "<<i<<endl;
			remain=remain-2;
			break;
		}
	}
	if (remain>0)
		result(a,remain);//?????????????????????????
}


int main()
{
	int i;
	char a[100];
	cin.getline(a,100);
	l=strlen(a);
	boy=a[0];
	for(i=1;i<l;i++)
	{
		if (a[i]!=boy)//??????????
		{	girl=a[i];
		break;}
	}
	result(a,l);
	return 0;
}


