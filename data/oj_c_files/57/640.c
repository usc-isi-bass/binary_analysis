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
	int n,i,j,l,t;
	char word[50];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>word;
		l=strlen(word);
		if(word[l-3]=='i'&&word[l-2]=='n'&&word[l-1]=='g')l-=3;
		else if(word[l-2]=='e'&&word[l-1]=='r')l-=2;
		else if(word[l-2]=='l'&&word[l-1]=='y')l-=2;
		for(j=0;j<l;j++)
			cout<<word[j];
		cout<<endl;
	}
	return 0;
}