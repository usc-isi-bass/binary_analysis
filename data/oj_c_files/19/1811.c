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

int main ()
{
	char sentence[110],first[110],second[110];
	int i,j,flag;
	int lens,len1,len2;
	cin.getline(sentence,110);
	cin.getline(first,110);
	cin.getline(second,110);
	lens=strlen(sentence);
	len1=strlen(first);
	for (i=0;i<lens-len1+1;i++)
	{
		flag=0;
		if((i==0&&sentence[i+len1]==' ')||(sentence[i-1]==' '&&sentence[i+len1]==' ')||(i==lens-len1&&sentence[i-1]==' '))
		{
		for (j=0;j<len1;j++)
		{
			if(sentence[i+j]==first[j])
				flag++;
		}
		}
		if (flag==len1)
		{
			i=i+len1-1;
			cout << second ;
		}
		else
			cout << sentence[i] ;
	}
	if (flag!=len1)
		for (i=lens-len1+1;i<lens;i++)
			cout << sentence[i];
	return 0;
}