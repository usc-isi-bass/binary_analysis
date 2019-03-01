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
	char str1[105];//???????????
	int len,word[105]={0},w=1,dcgs,a;
	cin.getline(str1,101,'\n');//?????
	len=strlen(str1)-1;//????????
	for(int i=0;i<=len;i++)//??????????????????????
	{
		if(str1[i]!=' ')
			word[w]=word[w]+1;
		else
			w=w+1;
		dcgs=w;
	}
	int p=len;
	for(int i=dcgs;i>=2;i--)//???????
	{
		for(int j=p-word[i]+1;j<=p;j++)
			cout<<str1[j];
		p=p-word[i]-1;
		cout<<" ";
	}
	for(int j=0;j<=word[1]-1;j++)
		cout<<str1[j];
	return 0;
}
