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
	char word[40]={0};
	cin>>n;cin.get();
	int end=0;
	for(int i=1;i<=n;i++)
	{
	    scanf("%s",word);
	    int l=strlen(word);
		if(end+l+1>80)
		{
			cout<<endl;
			cout<<word;
			end=l;
		}
		else 
		{
			if(i>1)
			{
			    cout<<' ';
			    end++;
			}
			cout<<word;
			end=end+l;
		}
	}
	return 0;
}