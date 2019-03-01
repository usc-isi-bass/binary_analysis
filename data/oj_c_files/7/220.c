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
	char str[257],substr[257],re[257];
	int i=0,j=0,n=0,m=0,k=0;
	scanf("%s\n%s\n%s\n",str,substr,re);
    n=strlen(substr);
	for(i=0;str[i]!='\0';i++){
		if(str[i]==substr[j]){
		
			if(memcmp(substr,str+i,n)==0){
				m=i;
				k=1;
				break;
			}
		}
	}
	if(k==1){
      for(i=m;i<m+n;i++){
		str[i]=re[i-m];
	  }
	}
	
	printf("%s",str);
	return 0;
}
