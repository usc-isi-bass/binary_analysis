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

//?????
//??????
//?????
int QuLing(int num)
{
	while(num%10==0)
		num/=10;
	return num;
}
void reverse(int num)
{
	cout<<num%10;
	if(num/10!=0) reverse(num/10);
	else cout<<endl;
}

int main()
{
	int a[6];
	for(int i=0;i<6;i++)
		cin>>a[i];
	for(int i=0;i<6;i++)
		if(a[i]>=0)	reverse(QuLing(a[i]));
		else
		{
			cout<<"-";
			reverse(QuLing(-a[i]));
		}
	return 0;
}