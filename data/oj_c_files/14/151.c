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


	typedef struct S{
		int ID;
		int c;
		int m;
		int a;
	}S;

int mycmp(const void*e1,const void*e2){
	return ((S*)e2)->a - ((S*)e1)->a;
}

void main()
{
	struct S stu[100010];
	int i,j,n;
	scanf("%d",&n);
	for (i = 0;i < n;i++){
		scanf("%d%d%d",&(stu + i)->ID,&(stu + i)->c,&(stu + i)->m);
		(stu + i)->a = (stu + i)->c + (stu + i)->m;
	}
	qsort(stu,n,sizeof(*(stu)),mycmp);
	for (i = 0;i <= 2;i++)
		printf("%d %d\n",(stu + i)->ID,(stu + i)->a);
}