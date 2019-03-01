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

char ansn[80],nm[80];
int ansm=0,summ=0;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
int a,b,e;char c,d;
cin>>nm>>a>>b>>c>>d>>e;
int s=0;
if((a>80)&&(e))s+=8000;
if((a>85)&&(b>80))s+=4000;
if(a>90)s+=2000;
if((a>85)&&(d=='Y'))s+=1000;
if((b>80)&&(c=='Y'))s+=850;
if(s>ansm){
memcpy(&ansn,&nm,sizeof(nm));
ansm=s;
}
summ+=s;
}
cout<<ansn<<endl<<ansm<<endl<<summ<<endl;
return 0;
}
