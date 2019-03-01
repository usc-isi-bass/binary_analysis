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

struct tree
{
	struct tree *up;
	int num;
};
struct tree *MLC,*ptree;
int a[500],b[500];

int main()
{
	int x,y,i=1,j,p,q,miao,woofoo=0;
	MLC=(struct tree *)malloc(MAXNUM*sizeof(struct tree));
	for(ptree=MLC;ptree<MLC+1000;ptree++)
	{
		ptree->num=i;
		//printf("%d\n",ptree->num);
		(ptree+i)->up=ptree;
		(ptree+i+1)->up=ptree;
		i++;
	}
	scanf("%d%d",&x,&y);
	ptree=MLC;
	ptree=ptree+x-1;
	i=0;
	do
	{
		a[i]=ptree->num;
		//printf("%d\n",a[i]);
		ptree=ptree->up;
		i++;
	}while(a[i-1]!=1);
	ptree=MLC+y-1;
	j=0;
	do
	{
		b[j]=ptree->num;
		//printf("%d\n",b[j]);
		ptree=ptree->up;
		j++;
	}while(b[j-1]!=1);
	/*for(p=i;p>0;p--)
		printf("%d\n",a[p]);*/
	for(p=0;p<i;p++)
	{
		miao=0;
		for(q=0;q<j;q++)
		{
			if(a[p]==b[q])
			{
				miao++;
				break;
			}
		}
		if(miao==1)
		{
			printf("%d\n",a[p]);
			break;
		}
	}
	return 0;
}