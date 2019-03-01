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

int main(){
	int i,m=0,s;
	double n,x;
	char one[500],two[500];
	scanf("%lf",&n);
	scanf("%s%s",one,two);
	s=strlen(one);
	if(strlen(one)!=strlen(two))
		printf("error");
	else{
		for(i=0;one[i]!='\0';i++){
			if((one[i]!='A'&&one[i]!='G'&&one[i]!='T'&&one[i]!='C')||(two[i]!='A'&&two[i]!='T'&&two[i]!='C'&&two[i]!='G')){
				s=0;
			}
			else{
				if(one[i]==two[i])
					m++;
			}
		}
		x=1.0*m/s;
		if(s==0)
			printf("error");
		else if(x>n)
			printf("yes");
		else
			printf("no");
	}
	return 0;
}