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

char q[100],a[100],b[100],xc[50][100];
main(){
    gets(q);
	gets(a);
	gets(b);
	int i=0,j=0,k=0,s=0,p=0;
	for (i=0;i<100;i++){
		if (q[i]!=' '){
			xc[j][i-k]=q[i];	
			
	}
		if (q[i]==' '){
			j++;
            k=i+1;
		}
		
	}
    for (s=0;s<j+1;s++){
		if(strcmp(xc[s],a)==0){
			strcpy(xc[s],b);
		}
	}
	for (p=0;p<j;p++){
	printf("%s ",xc[p]);
	}
	printf("%s",xc[j]);
	return 0;

}