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
  char a[501],b[501];
  double n,c,d,k=0;
  int i,e=1;
  scanf("%lf",&n);
  scanf("%s\n%s",&a,&b);
  c=strlen(a);
  d=strlen(b);
  if(c!=d){
    printf("error");
  }else if(c==d){
	for(i=0;i<c;i++){
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'||b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
		e=0;
		break;
		}else{
			if(a[i]==b[i]){
			k=k+1;
			}
		}
	}
         if(e==0){
                  printf("error");
         }else if(k!=0&&(k/c)>=n){
                  printf("yes");
         }else if(e==1&&(k/c)<n){
                  printf("no");
         }
  }
return 0;
}
