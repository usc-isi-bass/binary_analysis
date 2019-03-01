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

struct stu
{
	char inf[50];
	struct stu *next;
} a[500];
int main()
{
//	struct stu *head,*point;
	int sum=0,i=0,j;
//	point=(struct stu *)malloc(sizeof(struct stu));
	
	while(gets(a[i].inf)!=NULL)
	{
		i++;

	}
	for(j=i-2;j>=0;j--)
	{
		puts(a[j].inf);
	}
	return 0;
}
