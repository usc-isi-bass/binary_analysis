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
	int n,i,len=0,l;
	char word[64],p[64]="";
	cin >>n;//???????
	for(i=0;i<n;i++)
	{
		cout <<p;//
		cin >>word;//????
		l=strlen(word);//??????????
		if(len+l>80)// ???????80?
		{
			cout <<endl;//??
			len=0;//?????????
		}
		else if(i>0)
			cout<<" ";
		len+=l+1;
		strcpy(p,word);
	}
	cout <<p;
	return 0;
}