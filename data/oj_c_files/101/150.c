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

//********************************************************
//????1.cpp
//???????????
//********************************************************

int main()
{
	int A,B,C,wa,wb,wc,i;                         //????
	char rank[3]={0};                             //??????
	for(A=0;A<=2;A++){                            //for????????
	for(B=0;B<=2;B++){
	   if(A==B) continue;
	   for(C=0;C<=2;C++){
	       if(A==C||B==C) continue;
	       wa=(B>A)+(C==A);                      //??????????
	       wb=(A>B)+(A>C);
	       wc=(C>B)+(B>A);
                  if(!(A<B&&wa<=wb||A<C&&wa<=wc||      			             B<A&&wb<=wa||B<C&&wb<=wc||
                       C<A&&wc<=wa||C<B&&wc<=wb))
                     //????????????????????????????

		{
		  rank[A]='A';
		  rank[B]='B';
		  rank[C]='C';
                         for(i=0;i<=2;i++)               //??????????
		     cout<<rank[i];
		}}}}
	return 0;
}