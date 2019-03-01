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

int lefts(char *,char *);
char boy,girl;
int main()
{
	char children[105]={'\0'};
	int i,left,right,sum;
	cin>>children;
	sum=strlen(children);
	boy=children[0];
	girl=children[sum-1];
	for(i=0;i<sum;i++)
	{
		if(children[i]==girl)//??????girl???????lefts??????
		{
			right=i;
			left=lefts(children,children+i);
			if(i<sum-1)
				cout<<left<<" "<<right<<endl;
			else
				cout<<left<<" "<<right;//?????????
			children[left]=' ';
		}
	}
	return 0;
}
int lefts(char *head,char *p)
{
	int left;
	if(*p!=boy)//?????????????????
		left=lefts(head,p-1);
	else
		left=p-head;
	return left;
}