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

int main() {
	int A,B,C,D,E;
	for(A=2;A<=5;A++)//A?B???1? ?????????
	for(B=2;B<=5;B++)
	for(C=1;C<=5;C++)
	for(D=1;D<=5;D++)
	for(E=1;E<=5;E++)
	{//??????????????????????????????????????????
		if(((E==1)+(B==2)+(A==5)+(C!=1)+(D==1)==2)&&(A!=B)&&(A!=C)&&(A!=D)&&(A!=E)&&(B!=C)&&(B!=D)&&(B!=E)&&(C!=D)&&(C!=E)&&(D!=E)&&(E!=2)&&(E!=3)&&((D==1)+(A==2)==0&&(E!=1)) )
			cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<"\n";
	}
	cout<<endl;
	return 0;
}
