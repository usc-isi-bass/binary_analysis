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

int shirunnian(int a)
{
	if(a%4!=0){
		return 0;
	}
	else {
		if(a%100==0&&a%400!=0){
			return 0;
		}
		else{
			return 1;
		}
	}
}
int main()
{
    int n,i,b[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},
		c[13]={0,31,29,31,30,31,30,31,31,30,31,30,31},
		d,e,f,s,sum=0;
    scanf("%d",&n);
	while (n>0){
                  sum=0;
		scanf("%d%d%d",&d,&e,&f);
        if(e>f){
			s=e;
			e=f;
			f=s;
		}
		if(shirunnian(d)==1){
			for(i=e;i<f;i++){
            sum+=c[i];
			}
			if(sum%7==0){
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
		else{
			for(i=e;i<f;i++){
            sum+=b[i];
			}
			if(sum%7==0){
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
        n--;
	}
	return 0;
}

