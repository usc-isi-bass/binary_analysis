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

int num[40]={0};
int jinwei[40]={0};
void square()  //?2
{
	for (int i=39;i>0;i--)
	{
		int a=num[i]*2;
		jinwei[i-1]=a/10;
		num[i]=a%10+jinwei[i];
	}
}
int main ()
{
	num[39]=1;     //???2?0??=1
	int n;
	cin>>n;
	for (int i=0;i<n;i++)    //?n?2
		square();
	int head;
	for (int i=0;i<40;i++)
		if (num[i]!=0)
		{
			head=i;
			break;
		}
	for (int i=head;i<40;i++)
		cout<<num[i];

	return 0;
}