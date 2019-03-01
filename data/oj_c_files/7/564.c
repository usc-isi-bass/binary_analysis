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
char s[1000], a[50],b[50];

int i,lenb,n,j,flag;
int k=10001;
gets(s);
gets(a);
gets(b);
lenb=(int)strlen(b);

for (i=0; i<=(int)strlen(s); i++,flag=0) {
	for(n=0,j=i;a[n]!='\0';n++,j++){
		if(s[j]!=a[n]){
		flag=1;
		break;
		}
	}
	if(flag) 
		continue;
	else{
		k=i;
		break;
		}
}
for(i=0;i<strlen(s);i++){
	if(i==k){
		printf("%s",b);
		i=i+lenb-1;
		continue;
	}
	else
		printf("%c",s[i]);

}
return 0;
}