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
	char a[105];
	int i,j,k,g,m,n;
	while(cin.getline(a,101)){
		g=strlen(a);
		for(k=1;k<g-1;k++)
		for(i=1;i<g-1;i++){
			if(a[i]==' '&&a[i+1]==' '){
				for(j=i;j<g-1;j++)
					a[j]=a[j+1];
				a[g-1]='\0';
				g--;
			}
		}
		cout<<a<<endl;
	}

	return 0;
}
