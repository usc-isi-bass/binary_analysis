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
char zfc[1000],tmp;
int n,i,t,e,f;

scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%c",&tmp);
scanf("%s",zfc);
for(t=0;zfc[t]!='\0';t++){f=0;
	for(e=0;1;e++){
		if(zfc[t]==zfc[e]&&t!=e){
		break;}
		else if(e==strlen(zfc)){
		printf("%c\n",zfc[t]);
		f=1;
		break;
		}
		
	}
if(f==1){break;}
}
if(f==0){
printf("no\n");}

}

	return 0;
}
