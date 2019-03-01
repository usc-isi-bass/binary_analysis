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
	int n,sum=0;
	char word[41]={0};
	cin>>n;
	cin>>word;
	sum+=strlen(word);
	cout<<word;
	memset(word,0,sizeof(word));
	for(int i=1;i<n;i++)
	{
		cin>>word;
		sum+=strlen(word)+1;
		if(sum>80)
		{
			cout<<endl<<word;
			sum=strlen(word);
		}
		else cout<<' '<<word;
	}
	return 0;
}


