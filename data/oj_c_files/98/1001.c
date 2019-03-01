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

// ??????.cpp : ??????????????
//
int main()
{
	int n;
	cin>>n;
	char word[40];
	int num=0;
	while(cin>>word)
	{
		if((num+strlen(word)+1)<80)
		{
			if(num!=0) {cout<<' ';num=num+1;}
			cout<<word;
			num=num+strlen(word);
		}
		else if((num+strlen(word)+1)==80) {cout<<' '<<word<<endl;num=0;}
		else 
		{
			num=0;
			cout<<endl;
			cout<<word;
			num=num+strlen(word);
		}
		
	}

		return 0;
}

