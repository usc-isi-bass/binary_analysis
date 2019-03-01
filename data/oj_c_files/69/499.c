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
  char s1[MAX],s2[MAX];
  cin>>s1>>s2;
  int l1=strlen(s1),l2=strlen(s2);
  int g=0;
  char ans[2*MAX];
  int iter;
  for(iter=0;g||iter<max(l1,l2);iter++){
    int p1=0,p2=0;
    if(iter<l1) p1=s1[l1-iter-1]-'0';
    if(iter<l2) p2=s2[l2-iter-1]-'0';
    int sum=p1+p2+g;
    ans[iter]=sum%10+'0';
    g=sum/10;
  }
  int ok=0;
  for(int i=0;i<iter;i++){
    if(!(ans[iter-i-1]=='0'&&ok==0&&iter!=1)){
      cout<<ans[iter-i-1];
      if(ok==0) ok=1;
    }      
  }
  return 0;
}
