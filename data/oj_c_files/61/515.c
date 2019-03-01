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
	int n,F[25];
	int i;
	for(i=1;i<=20;i++)
	{
		if(i==1 || i==2)
			F[i] = 1;
		else
			F[i] = F[i-1]+F[i-2];
	}
	cin>>n;
	while(n>0)
	{
		n--;
		int a;
		cin>>a;
		cout<<F[a]<<endl;
	}
	return 0;
}