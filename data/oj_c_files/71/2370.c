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
	int n=0,a=0,i,b=0,c=0;
	
		scanf("%d",&n);
	for(i=0;i<n;i++){
scanf("%d%d%d",&a,&b,&c);
if((a%4==0&&a%100!=0)||(a%400==0)){
	if((b==1&&c==4)||(b==9&&c==12)||(b==4&&c==1)||(b==12&&c==9)
		||(b==4&&c==7)||(b==7&&c==4)
		||(b==1&&c==7)||(b==7&&c==1)||(b==2&&c==8)||(b==8&&c==2)
	||(b==3&&c==11)||(b==11&&c==3)	)//(b==2&&c==11)||(b==7&&c==1))
printf("YES\n");
	else printf("NO\n");}
else {if((b==2&&c==3)||(b==9&&c==12)||(b==3&&c==2)||(b==12&&c==9)||
		 (b==3&&c==11)||(b==11&&c==3)
		||(b==1&&c==10)||(b==10&&c==1) ||(b==4&&c==7)||(b==7&&c==4)
		||(b==2&&c==11)||(b==11&&c==2)||(b==3&&c==11)||(b==11&&c==3))
printf("YES\n");
	else printf("NO\n");}
	}
	return 0;
}

