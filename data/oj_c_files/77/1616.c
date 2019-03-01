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

	int a[100]={0},z=-1;
	char b[100];
	cin.getline(b,100);
	char c=b[0];
	for(int i=0;b[i]!=0;++i)
	{
		if(b[i]==c)
		{
			a[++z]=i;
			
		}
		else
		{
			cout<<a[z]<<" "<<i<<endl;
			--z;
		}
	}
	return 0;
}

