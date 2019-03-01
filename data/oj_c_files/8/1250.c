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

int n,m,i,j;
int a[10000];
void input()
{
cin>>n>>m;
for(i=0;i<n+m;i++)
cin>>a[i];
}

void fsort()
{
 sort(a,a+n);
 sort(a+n,a+n+m);
}
void print(){
	cout<<a[0];
	for(i=1;i<n+m;i++)
	cout<<' '<<a[i];
}
int main()
{input();
 fsort();
 print();
return 0;
}