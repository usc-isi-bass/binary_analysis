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

void main()
{
	int n,m,i;
	int a[200];          /*?????????????????????????*/
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);                 
	for(;i<200;i++)
		a[i]=0;                
	int *p1; 
	int *p2;
	p1=a;                     /*p1??a[0]*/
	p2=&a[99+m];              /*???a[0]??????????a[99]??????a[99+m]*/
	for(i=0;i<n-m;i++)
	{
        *p2=*p1;
        p1++;
        p2++;
       }                    
	p1=&a[n-m];    /*???????*/
	p2=&a[99]; /*?????????m????????100???m???????????m?*/
	for(i=0;i<m;i++)
    *p2++=*p1++;
    printf("%d",a[99]);
    for(i=100;i<99+n;i++)
		printf(" %d",a[i]);            /*??*/

}