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
	struct stu
	{int a,b,c;};
	int i,n,j=0;scanf("%d",&n);
	struct stu *hd,*p;
	hd=p=(struct stu*)malloc(100000*sizeof(struct stu));
	for(i=0;i<n;i++,p++)
	{scanf("%d %d %d",&p->a,&p->b,&p->c);}
	int max=0;
nxt:	for(p=hd,i=0;i<n;i++,p++)
	{
		if(p->b+p->c>max) {max=p->b+p->c;}
	}
	for(p=hd,i=0;i<n;i++,p++)
	{
		if(p->b+p->c==max) {printf("%d %d\n",p->a,p->b+p->c);p->b=0;p->c=0;max=0;j++;break;}
	}
	if(j<=2) goto nxt;

}