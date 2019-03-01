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

int Capple(int Nmonkey,int Nthrow)
{
	int i,j,Napple;
	for(j=1;;j++){
		Napple=j*Nmonkey+Nthrow;
		for(i=1;i<Nmonkey&&Napple%(Nmonkey-1)==0;i++){
			Napple=Napple/(Nmonkey-1)*Nmonkey+Nthrow;
		}
		if(i==Nmonkey){
			return Napple;
		}
	}
}
int main()
{
	int Napple,Nmonkey,Nthrow,i,j;
	scanf("%d%d",&Nmonkey,&Nthrow);
	printf("%d",Capple(Nmonkey,Nthrow));
	return 0;
}
