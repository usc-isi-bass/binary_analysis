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

int main()
{int A[6],as[6];
for(A[1]=1;A[1]<6;A[1]++)
	for(A[2]=1;A[2]<6;A[2]++)
		for(A[3]=1;A[3]<6;A[3]++)
			for(A[4]=1;A[4]<6;A[4]++)
				for(A[5]=1;A[5]<6;A[5]++)
				{as[1]=(A[5]==1);
                 as[2]=(A[2]==2);
                 as[3]=(A[1]==5); 
                 as[4]=(A[3]!=1);
                 as[5]=(A[4]==1);
				 if((A[5]!=2)&&(A[5]!=3)&&((as[1]+as[2]+as[3]+as[4]+as[5])==2)&&(A[1]!=A[2])&&(A[1]!=A[3])&&(A[1]!=A[4])&&(A[1]!=A[5])&&(A[2]!=A[3])&&(A[2]!=A[4])&&(A[2]!=A[5])&&(A[3]!=A[4])&&(A[3]!=A[5])&&(A[4]!=A[5]))
					{ for(int i=1;i<=5;i++)
					 if(A[i]==1&&as[i]==1)
					 {for(int j=1;j<=5;j++)
                      if(A[j]==2&&as[j]==1)
						  cout<<A[1]<<" "<<A[2]<<" "<<A[3]<<" "<<A[4]<<" "<<A[5]<<endl;}}}
return 0;
}