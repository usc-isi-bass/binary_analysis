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

int main()

{
	int num[300];
	int sr=0;
	int i,y,r;
	char c;
while(1)
{
	scanf("%d",&num[sr++]);
	scanf("%c",&c);
	if(c=='\n')
		break;
}
if(sr==1)
{
	printf("No");
	return 0;
}
y=num[0];
r=num[0];
for(i=0;i<sr;i++)
{
	if(num[i]>y)
	{
		r=y;
		y=num[i];
	}
	else if(num[i]<y) r=num[i];
	
}
for(i=0;i<sr;i++)
{
	if(num[i]<y&&num[i]>r) r=num[i];
}
 if(y==r)
{
	printf("No");
 }
 else 
    printf("%d",r);

return 0;

}