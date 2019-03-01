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
	int resulta=0;
	int resultb=0;
	int num;
	int n;
	int i=1;
	scanf("%d",&n);
	while (i<=n){
	scanf("%d",&num);
	if (i==1){
	resulta=num;
	}else{
		if(num>resulta){
	resultb=resulta;
	resulta=num;
		}
		else {if(num<resulta&&num>resultb){
			resultb=num;}}
	}
	i++;
	}
	printf("%d\n",resulta);
	printf("%d\n",resultb);


}