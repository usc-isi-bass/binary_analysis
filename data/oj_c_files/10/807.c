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

int lanjie(int m,int b[26],int lim) 
{ 
if(m==1)
 { 
if(b[0]<=lim)
return(1); 
else return(0);
 } 
else if(m==2) 
{ if(b[0]<=lim&&b[1]<=b[0])return(2); else if(b[0]>lim&&b[1]>lim)return(0); else return(1); } else { if(b[0]<=lim)return(lanjie(m-1,&b[1],b[0])+1>=lanjie(m-1,&b[1],lim)?lanjie(m-1,&b[1],b[0])+1:lanjie(m-1,&b[1],lim)); else return(lanjie(m-1,&b[1],lim)); } } void main() { int a[26],i,k; scanf("%d",&k); for(i=0;i<=k-1;i++) { scanf("%d",&a[i]); } getchar(); printf("%d\n",lanjie(k,a,32767)); } 
