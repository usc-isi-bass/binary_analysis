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

int main(int argc, char* argv[])
{
	char c[50]={'\0'},s[50]={'\0'};
	scanf("%s %s",c,s);
	int n1,n2;
	n1=strlen(c);
	n2=strlen(s);
	int i=0,j;
	int a;
	int count=0;
	for(j=0;j<n2-n1+1;j++){
		if(c[i]==s[j]){
			a=j;
			for(i=i+1;i<n1;i++){
				j=j+1;
				if(c[i]!=s[j]){
					count++;
				}
			}
			if(count==0){
				printf("%d\n",a);
				break;
			}
		}
	}
	return 0;
}

