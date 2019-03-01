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
	int i,j,b[10000];
	char word[80];
	int rank=0,temp;
	while(n--)
	{
		if (rank==0)
		{
			scanf("%s", word);
			rank=strlen(word);
			cout<<word;
			continue;
		}
		scanf("%s", word);
		temp=strlen(word);
		if (rank+temp+1<=80)
		{
			cout<<' '<<word;
			rank+=temp+1;
		}
		else
		{
			cout<<endl;
			cout<<word;
			rank=temp;
		}
	}

		
	return 0;
}