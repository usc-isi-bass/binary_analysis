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
	int n=0,count=0;
	cin>>n;cin.get();
	for(int i=0;i<n;i++)
	{
		char letter[50];
		cin>>letter;
		if(count+strlen(letter)+1>80)
		{
				count=0;
				cout<<endl;
		}
		if(count==0)
		{
			cout<<letter;
			count=strlen(letter);
		}
		else
		{
			cout<<' '<<letter;
			count+=1+strlen(letter);
		}
	}
	return 0;
}