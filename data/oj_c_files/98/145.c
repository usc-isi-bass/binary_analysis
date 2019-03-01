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
	int n=0,i=0,len=0,count=0;
	char word[1000][41];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>word[i];
	}
	for(;count<n;)
	{
		len+=strlen(word[count]);
		cout<<word[count++];
		while(len+strlen(word[count])+1<=80)
		{
			if(count>=n)
				break;
			else
			{
				len+=strlen(word[count])+1;
				cout<<" "<<word[count++];
			}
		}
		len=0;
		cout<<endl;
	}
	cout<<endl;
	return 0;
}

