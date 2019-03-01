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
    int h1,m1,s1,h2,m2,s2;
    scanf("%d%d%d%d%d%d",&h1,&m1,&s1,&h2,&m2,&s2);
    int s;
	while(h1!=0||m1!=0||s1!=0||h2!=0||m2!=0||s2!=0){
		h2=h2+12;
		s=(h2-h1)*3600-m1*60-s1+m2*60+s2;
		printf("%d\n",s);
		scanf("%d%d%d%d%d%d",&h1,&m1,&s1,&h2,&m2,&s2);
	}
	return 0;
}