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

/*
 * 1000012761_306.cpp
 *?????????????????2???36?????????long??????????
???????????0?1?...?9?a?b?...?z????0?1?...?9?A?B?...?Z??
 *  Created on: 2010-11-12
 *      Author: 378073652
 */

int main(){
	int a,sn,b,j,k,q,l,t,i;//??????
	double m;
	int s=0;
	char n[100],p[100];//????????
	cin>>a;//
	cin>>n;
	cin>>b;
	sn=strlen(n);
	for(i=0;i<sn;i++)
		{if(n[i]>=97) n[i]=n[i]-32;}

	for(i=sn-1;i>=0;i--)   //????10??
		{
		if(n[i]<=57) {j=n[i]-48;t=sn-1-i;
		s=s+(j*pow((double)a,(double)(t))); }
		else {j=n[i]-55; m=pow((double)a,(double)(sn-1-i)); s=s+j*m;}//s?10??? ????
		}



  if(s==0){ cout<<s; return 0;}//??s?0 ??0
  for(i=0;s!=0;i++)//??  ?????b??
  {q=s%b;
  if(q<=9) p[i]=(48+q);
  else p[i]=(55+q);

  s=(s-q)/b;


  }
p[i]='\0';
l=strlen(p);


for(i=l-1;i>=0;i--)//??
  cout<<p[i];

}

