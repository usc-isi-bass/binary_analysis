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
	char xl[1000][256],hb[1000][256];
	int i,m,n,cd[1000];
	scanf("%d",&n);
	for(m=0;m<n;m++){
		scanf("%s",&xl[m]);
		cd[m]=strlen(xl[m]);
	}
	for(m=0;m<n;m++){
	    for(i=0;i<cd[m];i++){
		    switch(xl[m][i]){
		    case'A':hb[m][i]='T';
		    	break;
		    case'T':hb[m][i]='A';
			    break;
		    case'C':hb[m][i]='G';
			    break;
		    case'G':hb[m][i]='C';
		    	break;
	    	default:1;
			}
		}
	    hb[m][i]='\0';
	}
	for(m=0;m<n;m++){
		printf("%s\n",hb[m]);
	}
	return 0;
}