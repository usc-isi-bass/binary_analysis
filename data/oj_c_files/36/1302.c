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
int k,i,j;
char a[20],b[20];
scanf("%s",a);
scanf("%s",b);
k=0;
for(i=0;i<strlen(a);i++)
{
	for(j=0;j<20;j++)
	{
		if(a[i]==b[j])
		{	k=k+1;
	//	a[i]='0';
		b[j]='0';
		break;
		}
		
	//	if(b[i]==a[j]&&b[i]!='0'&&a[j]!='0')
		//	m=1;
	}
}
if(strlen(a)!=strlen(b))
printf("NO");
else{
if(k==strlen(a))
printf("YES");
else printf("NO");

}

return 0;
	
}