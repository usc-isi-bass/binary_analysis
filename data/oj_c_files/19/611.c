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
	char str[100],a[10],b[10],word[50][15];
	int i=0,n,j=0,k=0;
	cin.getline(str,100);
	cin.getline(a,10);
	cin.getline(b,10);
	n=strlen(str);
	while(i<n)
	{
		while(str[i]!=' ')
			word[j][k++]=str[i++];
		word[j][k]='\0';
		k=0;  j++;  i++;
	}
	for(i=0;i<j-1;i++)
	{
		if(strcmp(a,word[i])==0)
			cout<<b<<" ";
		else
			cout<<word[i]<<" ";
	}

	if(strcmp(a,word[i])==0)
		cout<<b<<endl;
	else
		cout<<word[i]<<endl;

		return 0;
}

