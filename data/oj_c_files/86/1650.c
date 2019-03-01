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
	int n,c;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>c;
		int w,t,r=-1,rs=0;
		for (int j=0;j<c;j++)
		{
			cin>>w;
			t=w+j*3;
			if (t<=60&&t+3>=60)
			{
				r=w;
			}
			else if(t<60)
			{
				rs++;
			}
		}
		if (r!=-1)
		{
			cout<<r<<endl;
		}
		else
		{
			cout<<60-rs*3<<endl;
		}
	}
	return 0;
}