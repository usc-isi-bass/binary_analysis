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


char a[1000]={' '},b[1000]={' '};

int main()
{
	scanf("%s %s",a,b);
	int len;
	int wall,curr;
	len=strlen(a);
	for(wall=len-1;wall>0;wall--){
		for(curr=0;curr<wall;curr++){
			if(a[curr]>a[curr+1]){
				char temp;
				temp=a[curr];a[curr]=a[curr+1];a[curr+1]=temp;
			}
		}
	}
	len=strlen(b);
	for(wall=len-1;wall>0;wall--){
		for(curr=0;curr<wall;curr++){
			if(b[curr]>b[curr+1]){
				char temp;
				temp=b[curr];b[curr]=b[curr+1];b[curr+1]=temp;
			}
		}
	}
	if(strcmp(a,b)==0)printf("YES");
	else printf("NO");
	return 0;
}
