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

struct pa
	{
		char id[11];
		int age;
	};
void main()
{
	struct pa p[200];
	int n,i,t[200],j,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",p[i].id,&p[i].age);
	i=0;
	t[0]=0;
	while(i<n)
	{
		if(p[i].age>=60)
		{
			for(j=0;j<i&&p[t[j]].age>=p[i].age;j++);
			for(m=i;m>j;m--)
				t[m]=t[m-1];
			t[j]=i;
			i++;
		}
		else 
		{
			t[i]=i;
			i++;
		}
	}
	for(i=0;i<n;i++)
		printf("%s\n",p[t[i]].id);
}