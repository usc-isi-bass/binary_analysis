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
	int a,b,num=0,i;
	char n[31],m[31];
	cin>>a>>n>>b;
	for(i=0;i<strlen(n);i++)
        {
		if(n[i]<58)n[i]-=48;
		else
		{
			if(n[i]>96)n[i]-=87;
			else n[i]-=55;
		}
		num=num*a+n[i];
        }
	i=0;
	do
	{
		if(num%b<10)m[i]=num%b+48;
		else m[i]=num%b+55;
		num=num/b;
		i++;
	}while(num);
	for(;i>0;i--)cout<<m[i-1];
	return 0;
}