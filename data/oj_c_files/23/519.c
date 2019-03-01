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
	char a[100]=" ";                                                       //a???????
	int b[100]={0};                                                        //b???????????,????0
	int s=1;                                                               //s????????
	gets(a);                                                               //?????
	for(int i=0;i<100;i++)
	{
		if(a[i]==' ')                                                      //????????????
		{
			s++;                                                           //?s+1
		}
		else if(((a[i]>='a')&&(a[i]<='z'))||((a[i]>='A')&&(a[i]<='Z')))    //?????????
		{
			b[i]=s;                                                        //????????
		}
	}
	while(s)                                                               //??s???,????s?
	{
		for(int i=0;i<100;i++)                                             //????b
		{
			if(b[i]==s)                                                    //??????
			{
				cout<<a[i];
			}
		}
		s--;                                                               //???s-1
		if(s!=0)                                                           //??????
		{
			cout<<' ';
		}
	}
	return 0;
}