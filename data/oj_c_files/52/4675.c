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

/************************/
/*     ??????     */
/*    ??? pyyaoer    */
/*   ??  2011.12.4    */
/************************/
int main()
{
	int c[1000],n,m;
	int *p=NULL;
	cin>>n>>m;
	p=c;
	for (;p<=c+n-1;p++)         //?????
		cin>>*p;
	for (p=c+n-1;p>=c;p--)      //???????m?
		*(p+m)=*p;
	for (p=c;p<=c+m-1;p++)      //?m???????n?
		*p=*(p+n);
	p=c+1;
	cout<<*c;
	while (p<=c+n-1)            //????
		cout<<" "<<*p++;
	cout<<endl;
	return 0;
}