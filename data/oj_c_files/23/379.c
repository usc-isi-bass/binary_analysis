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
	char sentence[100];
	char a[100][100];
	int i,j=0,k=0;
	cin.get(sentence,100,'\n');
	for(i=0;;i++)
	{
		if(sentence[i]=='\0') 
		{
			
			a[k][j]='\0';
			k++;
			break;
		}
		
		if(sentence[i]!=' ')
		{
			a[k][j++]=sentence[i];
		}
		else
		{
			a[k][j]='\0';
			j=0;
			k++;
		}
	}
	for(i=k-1;i>0;i--)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
			cout<<a[i][j];
		}
		cout<<" ";
	}
	for(j=0;a[0][j]!='\0';j++)
	{
		cout<<a[0][j];
	}
	return 0;
}