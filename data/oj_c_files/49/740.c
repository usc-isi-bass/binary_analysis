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
	char a[500],b[500];
	cin>>a;
	int s=0;
	for (int i=0;i<500;i++)
		if (a[i]=='\0')
			break;
		else
			s++;	
	for (int j=2;j<=s;j++)
		for (int i=0;i<s;i++)
		{
			char b[j];
			for (int k=i;k<i+j;k++)
				b[k]=a[2*i+j-1-k];
			for (int m=i;m<i+j;m++)
			{ 
				if(a[m]!=b[m])
					break;
				if (a[m]==b[m]&&m==i+j-1)
				{for (int p=i;p<i+j;p++)
				cout<<a[p];
				cout<<endl;
				}
			}
		}
		return 0;
}







