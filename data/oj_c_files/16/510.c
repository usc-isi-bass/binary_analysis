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
	char shu[6],temp;
	int i,Lshu;
	cin.getline(shu,6,'\n');
	Lshu=strlen(shu);
	for(i=0;i<Lshu/2;i++)
	{
		temp=shu[i];
		shu[i]=shu[Lshu-1-i];
		shu[Lshu-1-i]=temp;
	}
	cout<<shu;
	return 0;
}