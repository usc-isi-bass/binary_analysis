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
	int i;
	char line[1001];
	cin >>line;
	for (i=0;i<strlen(line);i++)
	{
		if (line[i]>=97 && line[i]<=122)
			line[i]=line[i]-32;
	}                    //??????????????
	int count[1000]={0},num=0;  //count??????,num?????????
    char temp,ch[1000];    //temp???????????,ch????????
	ch[0]=temp=line[0];
	count[0]=1;
	for (i=1;i<strlen(line);i++)
	{
		if (line[i]==temp)
			count[num]++;   //??????????1
		else
		{
			ch[num+1]=line[i];
			count[num+1]=1;
			num++;
			temp=line[i];
		}                 //??????????????
	}    
	for (i=0;i<=num;i++)
		cout <<'('<<ch[i]<<','<<count[i]<<')';  //??
	cout <<endl;
	return 0;
}