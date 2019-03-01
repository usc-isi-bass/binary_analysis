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

struct score
{
	int ID;
	int chinese;
	int math;
};
void main()
{
	int n,i,*sum,max,p=0;
	//struct score s[100000];
	struct score *s;
	scanf("%d",&n);
	s=(struct score *)malloc(sizeof(struct score)*n);
	sum=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		scanf("%d%d%d",&s[i].ID,&s[i].chinese,&s[i].math);
	for(i=0;i<n;i++) *(sum+i)=s[i].chinese+s[i].math;
	max=sum[0];
	for(i=0;i<n;i++)
	{
		if(max<*(sum+i)) {max=*(sum+i);p=i;}
	}
	printf("%d %d\n",s[p].ID,*(sum+p));
	if(n>1)
	{
	    max=*sum;*(sum+p)=0;p=0;
	    for(i=0;i<n;i++)
		{
		    if(max<*(sum+i)) {max=*(sum+i);p=i;}
		}
 	    printf("%d %d\n",s[p].ID,*(sum+p));
		if(n>2)
		{
	        max=*sum;*(sum+p)=0;p=0;
	        for(i=0;i<n;i++)
			{
		        if(max<*(sum+i)) {max=*(sum+i);p=i;}
			}
	        printf("%d %d\n",s[p].ID,*(sum+p));
		}
	}
}