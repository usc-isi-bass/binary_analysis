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


int main(int argc, char* argv[])
{   int n,i,j,len,sum,zm;
    char zfc[100000],zm1;
    char *p=zfc;
    scanf("%d",&n);
    for(j=0;j<n;j++){
    sum=0;
    scanf("%s",zfc);
    len=strlen(zfc);
    for(zm=0;zm<len;zm++){
	  for(i=0;i<len;i++){
		  if(*(p+i)==*(p+zm)){
		  sum++;
		  }	  
	  }
	  if(sum==1){
	     zm1=*(p+zm);
	     break;
	  }else{
	  sum=0;}
	}
	if(sum==1){
	printf("%c\n",zm1);
	}else{
	printf("no\n");
	}
	}
	return 0;
}