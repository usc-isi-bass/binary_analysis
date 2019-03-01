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
	int n,i,count,j;
	char word[50];
	cin>>n;
	count=0;
	for(i=0;i<n;i++)
	{
		cin>>word;
		for(j=0;word[j];j++);
		if(count+j<=80)
		{
			if(i==0)
				cout<<word;
			else
				cout<<" "<<word;
			count+=j+1;
		}
		else
		{
			cout<<endl;
			cout<<word;
			count=j+1;
		}
	}
	
	return 0;
}