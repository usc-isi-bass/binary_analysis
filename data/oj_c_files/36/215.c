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
	char s1[50],s2[50];
	int i=0,ns1,ns2,tag=1,flag=1,j=0;
	scanf("%s",s1);
	ns1=strlen(s1);
	scanf("%s",s2);
	ns2=strlen(s2);
	if(ns2!=ns1)
		tag=0;
	else for(i=0;i<ns1;i++){
			flag=1;
			for(j=0;j<ns2;j++){
				if(s1[i]==s2[j])
				{s2[j]='0'; flag=0;break;}
			}
		}
	if(flag) tag=0;
	if(tag) printf("YES");
		else printf("NO");
	return 0;
}