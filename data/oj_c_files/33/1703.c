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
	char Org[1000][1000], res[1000][1000];
	int n,i=0,j=0;
	cin>>n;
	cin.ignore ();
	for(i=0 ; i<n ; i++)
		cin>> Org[i];
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; Org[i][j]!='\0' ; j++)
		{
			if(Org[i][j] == 'A')
				res[i][j] = 'T';
			else if(Org[i][j] == 'T')
				res[i][j] = 'A';
			else if(Org[i][j] == 'G')
				res[i][j] = 'C';
			else if(Org[i][j] == 'C')
				res[i][j] = 'G';
		}
		res[i][j]='\0';
		cout<< res[i] <<endl;
	} 
	return 0;
}