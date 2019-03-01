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

struct mounth
{
	int week;
	int days;
}M[12]={{1,31},{2,28},{3,31},{4,30},{5,31},{6,30},{7,31},{8,31},{9,30},{10,31},{11,30},{12,31}};
void main()
{
	int w,i,total=12;
	scanf("%d",&w); 
	if((w+total)%7==5) printf("1\n");
	for(i=0;i<11;i++)
	{
		total=total+M[i].days;
		if((w+total)%7==5) printf("%d\n",i+2);
	}
}