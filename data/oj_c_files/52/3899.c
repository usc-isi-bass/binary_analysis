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

	int input[100]={0};
	int *stop, *cut;
	int n, m;

	cin>>n>>m;
	for(int i=0; i<n; i++)
	{
		cin>>input[i];
	}

	cut=input;
	stop=input+n-m;


	for(int i=0; i<m; i++)
	{
		cout<<*(stop++)<<" ";
	
	}

	
	for(int i=0; i<n-m; i++)
	{
		cout<<*(cut++);
		if(i!=(n-m-1))
			cout<<" ";
	
	}

	

return 0; 
}
