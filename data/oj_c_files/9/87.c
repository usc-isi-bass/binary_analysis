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
	struct person
	{
		char id[10];
		int age;
	} m[100],b[100];
	int n,t,i,j;
	char temp[10];

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",m[i].id);
		strcpy(b[i].id,m[i].id);
		scanf("%d",&m[i].age);
		b[i].age=m[i].age;
	}

	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
		{
			if(m[j].age<m[j+1].age)
			{
				t=m[j].age;
				m[j].age=m[j+1].age;
				m[j+1].age=t;
				strcpy(temp,m[j].id);
				strcpy(m[j].id,m[j+1].id);
				strcpy(m[j+1].id,temp);	
			}
		}
		for(i=0;i<n;i++)
			if(m[i].age>=60) printf("%s\n",m[i].id);
		for(i=0;i<n;i++)
			if(b[i].age<60)	printf("%s\n",b[i].id);
	
}

