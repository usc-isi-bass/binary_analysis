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

void main()
{
  int n;
  scanf("%d",&n);
  char miner[20][101],minee[20][101];
  int i,sp,k,pr;
  int lr,le;
     for(i=1;i<=n;i++)
	 {
		 scanf("%s%s",&miner[i],&minee[i]);
         lr=strlen(miner[i]);
		 le=strlen(minee[i]);
		 while(le>=1)
		 {    if(miner[i][lr-1]>=minee[i][le-1])
		         miner[i][lr-1]=miner[i][lr-1]-minee[i][le-1]+'0';
		      else
			  {sp=lr-2;
			  while(miner[i][sp]=='0'){miner[i][sp]='9';sp--;}
			  miner[i][sp]=miner[i][sp]-1;
			  miner[i][lr-1]=miner[i][lr-1]-minee[i][le-1]+'0'+10;
			  }

		 le--;lr--;
		 }
		k=0;lr=strlen(miner[i]);
		while(1){if(miner[i][k]=='0')k++;else break;}
		for(pr=k;pr<=lr-1;pr++)printf("%c",miner[i][pr]);
		printf("\n");
	 }
  
}

