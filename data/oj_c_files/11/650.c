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
	int n,i,m,d;
    scanf("%d%d%d",&n,&m,&d);
	int a=d;
	for(i=1;i<=m-1;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10){
        a+=31;
		}
		else if(i==4||i==6||i==9||i==11){
			a+=30;
		}
		else { 
			if((n%100==0&&n%400!=0)||n%4!=0){
			a+=28;
			
			}
			else{
			a+=29;
			}
	}
	}
		printf("%d",a);
        return 0;
}
	