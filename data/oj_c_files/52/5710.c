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

/*??
???????????????????????????????????????n????????????????m????????m????????m??(m<n)?

??????????m???????n-m??????????????????????

????????????????????????????????????????????

??????????????????????????????

????
????????????????n(n<=100)??????m??????n?????????????????????

????
???????????????????????????????????????

????
11 4
15 3 76 67 84 87 13 67 45 34 45

????
67 45 34 45 15 3 76 67 84 87 13

*/
int main()
{
	int n,m;cin>>n>>m;
	int ain[234];
	m++;
	int *p=ain,*q=ain;
	for(int i=1;i<=n;i++,p++)cin>>*p;
	q=p;
	for(int i=1; i<=m; ++i)--p;
	for(int i=1; i<=m; ++i){*q++=*p++;}
	q=p;
	for(int i=1; i<=m; ++i)--p;
	for(int i=1; i<=n-m; ++i){*--q=*--p;}
	q=&ain[n];
	for(int i=1; i<=m; ++i)*p++=*q++;
	cout<<ain[1];
	for(int i=2; i<=n; ++i)cout<<' '<<ain[i];
	return 0;
}