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


struct student{
	char name[20];
	int pjcj,pycj;
	char ganbu,xibu;
	int article;
};

void main()
{
	struct student *p;
	int n,i;
	int sum=0,max=0,maxnum,single=0;
	scanf("%d",&n);
	p= (struct student *)malloc( n*sizeof(struct student) );

	for(i=0 ; i<n ; i++,single=0 ){
		scanf("%s", &p[i].name);
		scanf("%d%d", &p[i].pjcj, &p[i].pycj);
		scanf(" %c %c", &p[i].ganbu, &p[i].xibu);
		scanf("%d", &p[i].article);

		if( p[i].pjcj>80 && p[i].article )
			single+=8000;
		if( p[i].pjcj>85 && p[i].pycj>80 )
			single+=4000;
		if( p[i].pjcj>90 )
			single+=2000;
		if( p[i].pjcj>85 && p[i].xibu=='Y')
			single+=1000;
		if( p[i].pycj>80 && p[i].ganbu=='Y')
			single+=850;

		if( single>max ){
			max=single;
			maxnum=i;
		}
		sum+=single;
	}

	printf("%s\n",p[maxnum].name);
	printf("%d\n",max);
	printf("%d\n",sum);
}
