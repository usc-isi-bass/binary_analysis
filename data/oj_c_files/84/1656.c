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

int compare (const void * a, const void * b) 
{  
  return ( *(int*)b - *(int*)a );
}

int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)cin>>a[i];
	qsort(a,n,sizeof(int),compare);
	for(int i=0;i<=1;i++)cout<<a[i]<<endl;
	return 0;
}
