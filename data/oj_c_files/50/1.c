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


int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int n;cin>>n;int total=0;int s=0;
	if((5-n)>=0)
		s=5-n;
	else
		s=12-n;
	for(int i=0;i<12;i++){
		total+=mon[i];
		total+=13;
		if((total-1)%7==s)
			cout<<i+1<<endl;
		total-=13;
	}
	return 0;
}
