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
int n;
cin>>n;
while(n-->0)
{
	int stop,num[60],beat=60;
	cin>>stop;
	for(int i=0;i<stop;i++)
	{
		cin>>num[i];
	}
	for(int i=0;i<stop;i++)
		if(num[i]+3*(i+1)<=60)
					beat=60-3*(i+1);
				else if(num[i]+3*i>=60) {
					beat=beat=60-3*(i);
					break;
				}
				else {
					beat=num[i];
					break;
				}
	cout<<beat<<endl;
}
return 0;
}
