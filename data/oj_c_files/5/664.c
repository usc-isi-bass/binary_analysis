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
    double n;
	scanf("%lf",&n);
	char a[502],b[502];
	int c,j,x=0;
	scanf("%s",a);
	scanf("%s",b);
	if (strlen(a)!=strlen(b)){c=0;}
	else  {
		for (j=0;a[j];j++){
			if ((a[j]!='A'&&a[j]!='T'&&a[j]!='C'&&a[j]!='G')||(b[j]!='A'&&b[j]!='T'&&b[j]!='C'&&b[j]!='G')){c=0;}
			else {
				if (a[j]==b[j]){
					x++;
				}
			}
			

		}
		
	}
	if (c==0){
		printf("error");
		return 0;
	}
	if (strlen(a)==strlen(b)&&1.00*x/strlen(a)>=n){printf("yes");}
		else {printf("no");}
	
	return 0;
}
