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
	char a[100],b[100];
	cin.getline(a,100);
	int i,k=0,n;
	n=strlen(a);
	for(i=0;i<=n;i++){
	  if((int)a[i]-32==0&&(int)a[i+1]-32==0)continue;
	  b[k]=a[i];
	  k++;
	}
	cout<<b<<endl;
	return 0;
}
