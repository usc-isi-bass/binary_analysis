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
	int a=0,b=0,c=0;
	int an,bn,cn;
	int n,i,sum=0;
	struct student{
		int num,ch,math;
	}students[100000];
	scanf("%d",&n);
	for (i=0; i<n; i++){
		scanf("%d%d%d",&students[i].num, &students[i].ch, &students[i].math);
		sum = students[i].ch + students[i].math;
		if (sum > c){
			c = sum;
			cn = i;
		}
		if (sum > b){
			c = b;
			cn = bn;
			b = sum;
			bn = i;

		}
		if (sum > a){
			b = a;
			bn =an;
			a = sum;
			an = i;
		}
	}
	printf("%d %d\n",students[an].num,a);
	printf("%d %d\n",students[bn].num,b);
	printf("%d %d\n",students[cn].num,c);






		 
	return 0;
}
