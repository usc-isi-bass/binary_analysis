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
	char ch[1000][40]={'\0'};
	char *p=NULL;
	int n,i,line=0;
	cin>>n;
	for(i=0;i<n;i++)
	{cin>>*(ch+i);}
	line=strlen(*ch);
	i=0;
	while(i<n)
	{line=strlen(*(ch+i));cout<<*(ch+i);i++;if(i==n) break;line+=strlen(*(ch+i));//???????????????????????
	while(line<80)
	{cout<<' ';cout<<*(ch+i);
	i++;line++;if(i==n) break;
	line+=strlen(*(ch+i));}
	cout<<endl;
	}
	
		return 0;
}