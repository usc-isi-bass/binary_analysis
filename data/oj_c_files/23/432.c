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
	char yw[150]={0};
	cin.getline(yw,100,'\n');
	int i,j;
	i=strlen(yw);
	int s=i-1;
	for(i;i>=0;i--)
	{
		if(yw[i]==' ')
		{
			for(j=i+1;j<=s;j++)
			{
				cout<<yw[j];
			}
			cout<<' ';
			s=i-1;
		}//???????????????????? 
		if(i==0)
		{
			for(j=0;j<=s;j++)
			cout<<yw[j];
		}
		//?????????? 
	}

	return 0;
}
			
	
