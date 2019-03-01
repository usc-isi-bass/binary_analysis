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
	int n,i,j,len[100];
	char danci[100][100];
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
	  scanf("%s",danci[i]);
  }
  for(i=0;i<n;i++){
	  len[i]=strlen(danci[i]);
	  if(danci[i][len[i]-2]=='l'||danci[i][len[i]-2]=='e'){
		  danci[i][len[i]-2]='\0';
	  }
	  else if(danci[i][len[i]-3]=='i'){
		  danci[i][len[i]-3]='\0';
	  }
	  printf("%s\n",danci[i]);
	  }
	  return 0;
  }
