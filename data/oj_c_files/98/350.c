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
	int n,total=0;
	int i=0,m=0;
	int len;
	char word[40];
	cin>>n;
	scanf("%s", word);
	len=strlen(word);
	cout<<word;
	i+=len;
	total+=1;
	while(1)
	{
		scanf("%s", word);
		len=strlen(word);
		if(total==n-1)
		{
			cout<<" "<<word;
			break;
		}
		else if(total<n-1)
		{
			if(i+len+1<=80)
			{
				cout<<" "<<word;
				i+=len+1;
				total+=1;
			}
			else
			{
				cout<<endl;
				cout<<word;
				i=len;
				total+=1;
			}
		}
	}
	return 0;
}