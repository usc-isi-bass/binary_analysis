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
	int n;
	cin>>n;
	char str[1000][50];   //????
	int len=0;
	for(int i=1;i<=n;i++)
		cin>>*(str+i);
	for(int i=1;i<=n;i++)
	{
		if(len==0)
		{
			len=strlen(*(str+i));
			cout<<*(str+i);
		}
		else if(len+1+strlen(*(str+i))<=80)
		{
			len=len+1+strlen(*(str+i));
			cout<<" "<<*(str+i);
		}
		else if(len+1+strlen(*(str+i))>80)
		{
			len=strlen(*(str+i));
			cout<<endl<<*(str+i);
		}
	}
	return 0;
}
