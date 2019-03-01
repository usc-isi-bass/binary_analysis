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

//**************************
//*????????        *
//*?????              *
//*?????2010?12?    *
//**************************
int main()
{
	char a[31];
	int n,j;
	cin.getline(a,31);           //?????
	n=strlen(a);
	for(int i=0;i<n;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			for(j=i;a[j]>='0'&&a[j]<='9';j++)
			{
				cout<<a[j];
			}
			i=j;
			cout<<endl;
		}
	}                         //???????
	return 0;                  //??
}