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
	char word[40];
	int n,sum=0;
	int i;
	int first=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		scanf("%s",word);
		sum=sum+(strlen(word))+1;//?????????????????
		if(sum<=81)//????????80?(????????)?????
		{
			if(first==0)
			{
				cout<<word;
			first=1;
			}
			else
			{
				cout<<" "<<word;
			}
		}
		else
		{
			first=0;
			cout<<endl<<word<<" ";//??????80???
			sum=strlen(word)+1;//????????????
		}
	}
	
	return 0;
}