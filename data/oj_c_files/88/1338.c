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
	int i,o[31];
	char b[31];
	cin.getline(b,31);
	for(i=0;i<=30;i++)
	{
		*(o+i)=*(b+i);
		if(*(o+i)>=48&&*(o+i)<=57)
			cout<<*(b+i);
		else if((*(o+i)<48||*(o+i)>57)&&(*(o+(i-1))>=48&&*(o+(i-1))<=57))
			cout<<endl;
	}
	
	return 0;
}