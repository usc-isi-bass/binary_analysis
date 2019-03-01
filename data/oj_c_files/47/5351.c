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
int n,a;//????
cin>>n;//??
int value[100];//????
for (a=1;a<=n;a=a+1){
cin>>value[a];
}
for(a=n;a>1;a=a-1){
	cout<<value[a]<<' ';
}
cout<<value[1];
return 0;
}