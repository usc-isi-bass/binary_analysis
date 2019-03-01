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

int main(){
	int a[100],b[100],i=0,j=0;
	cin>>a[0]>>b[0];
	while(a[i]>1)
	{a[i+1]=a[i]/2;
	 i++;
	}
	while(b[j]>1)
	{b[j+1]=b[j]/2;
	j++;
	}

	while(a[i]==b[j])
	{i--;
		j--;
		}
	cout<<a[i+1];
	return 0;
}