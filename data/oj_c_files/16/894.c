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

//????007.cpp
//??????
//?????2013?10?25?
//???????????

int main()
{
	int a[5],b[5];
	int n,i,m;
	cin>>n;
	b[0]=n;
	for(i=0;i<5;i=i+1)
	{
		a[i]=b[i]%10;
		b[i+1]=b[i]/10;
		cout<<a[i];
		if(b[i+1]==0)
			break;
	}
	return 0;
}

