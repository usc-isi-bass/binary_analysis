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


int main() {
	char a[5000];
	cin.getline(a,5000);
	int b=strlen(a);
	int c=b;
	for(int i=0;i<b;i++)
		if((a[i]==' ')&&(a[i+1]==' ')) //???????????
		{
			for(int j=i+1;j<b;j++)     //????
				a[j]=a[j+1];
			i--;
			c--;
		}
	for(int i=0;i<c;i++)
		cout<<a[i];
	return 0;
}