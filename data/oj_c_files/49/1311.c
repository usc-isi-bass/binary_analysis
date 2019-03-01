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

void search (char s[501],int i)
{
	int k;
	char s1[501],s2[501];
	for (int j=0;s[j]!='\0';j++)
	{
		for (k=j;k<j+i;k++)
			s1[k-j]=s[k];
		s1[k-j]='\0';
		for (k=0;k<i;k++)
			s2[k]=s[j+i-1-k];
		s2[i]='\0';
		if (strcmp (s1,s2)==0)
			cout <<s1<<endl;
	}
}
int main ()
{
	char s[501];
	cin>>s;
	int i;
	for (i=2;s[i]!='\0';i++)
	{
		search (s,i);
	}

	return 0;
}