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
	int i,k,flag=0;
	char word[1000][40]={'\0'};
	int lenth[1000]={0};
	cin>>k;
	cin.get();
	for(i=0;i<k;i++)
	{
		cin.getline(word[i],40,' ');
		lenth[i]=strlen(word[i]);
	}
	cout<<*word;
	flag=*lenth;
	for(i=1;i<k;i++)
	{
		flag=flag+1+*(lenth+i);
		if(flag>80)
		{
			cout<<endl;
			cout<<*(word+i);
			flag=*(lenth+i);
		}
		else
			cout<<" "<<*(word+i);
	}
	return 0;
}