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
	int str[31]={0};
	int n,m=0,i,k =0,l;
	cin >>n;
	str[30] = 1;
	for(i =0;i<n;i++)
		for(int j =30;j>=0;j--)
		{
			l=2*str[j]+m;
			str[j]= l%10;
			m=l/10;
		}
	while(str[k]==0)
		k++;
	for(i =k;i<31;i++)
		cout<<str[i];
	cout<<endl;
	return 0;
}