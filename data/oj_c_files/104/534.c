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

int tree(int num,int a)
{
	int back;
	if(a==1)
		back=num;
	else if(tree(num,a-1)%2==0)
		back=tree(num,a-1)/2;
	else back=(tree(num,a-1)-1)/2;
	return back;
}
int main()
{
	int x,y;
	int i,j;
	scanf("%d%d",&x,&y);
	for(i=1;tree(x,i)>0;i++)
		for(j=1;tree(y,j)>0;j++)
			if(tree(x,i)==tree(y,j))
			{
				printf("%d",tree(x,i));
				return 0;
			}
		printf("error");
		return 0;
}