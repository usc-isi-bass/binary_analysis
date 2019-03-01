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
	int i, j, len, count;
	char a[1001]={0};
	cin.getline(a, 1001);
	len=strlen(a);
	for(i=0; i<len; i++)
	{
		if(a[i]-'Z'>=0)
			a[i]=a[i]-32;
	}
	for(i=0; i<len; i++)
	{
		count=0;
		if(i!=0)
		{
			if(a[i]!=a[i-1])
			{
				for(j=i; j<len; j++)
				{
					if(a[i]==a[j])
						count++;
					else
						break;
				}
				cout << "(" << a[i] << "," << count << ")";
			}
		}
		if(i==0)
		{
			for(j=i; j<len; j++)
				{
					if(a[i]==a[j])
						count++;
					else
						break;
				}
				cout << "(" << a[i] << "," << count << ")";
		}
	}
	return 0;
}
