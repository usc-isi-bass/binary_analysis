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

struct person
{
	char id[20];
	int y;
};
void main()
{
	int n,i,j,m=0,k=0,z;
	struct person t,*s,*o,*y;
	scanf("%d",&n);
	s=(struct person *)malloc(n*sizeof(struct person));
	o=(struct person *)malloc(n*sizeof(struct person));
	y=(struct person *)malloc(n*sizeof(struct person));
	for(i=0;i<n;i++)
	{scanf("%s %d",(*(s+i)).id,&(*(s+i)).y);
		if ((*(s+i)).y>=60)  {*(o+k)=*(s+i);k++;}
		else {*(y+m)=*(s+i);m++;}
	}
    for(i=0;i<k;i++)
	{for(j=k-1;j>i;j--)
			if (o[j].y>o[j-1].y) {t=o[j];o[j]=o[j-1];o[j-1]=t;}
         printf("%s\n",(*(o+i)).id);
    }
    for(i=0;i<m;i++)
      printf("%s\n",(*(y+i)).id);
}