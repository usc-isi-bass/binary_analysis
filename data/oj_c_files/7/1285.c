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
{
char str[256]={' '},sstr[256]={' '},rpl[256]={' '};
int lstr,lsstr;
	scanf("%s%s%s",str,sstr,rpl);
	lstr=strlen(str);lsstr=strlen(sstr);
	int pst,curr,indi=0;
	for(pst=0;pst<=lstr-lsstr;pst++){
		int state=1;
		for(curr=0;curr<lsstr;curr++){
			if(sstr[curr]!=str[curr+pst]){
				state=0;
				break;
			}
		}
		if(state==1){
			indi=1;
			break;
		}
	}
	if(indi==0)printf("%s",str);
	else{
		for(curr=0;curr<pst;curr++){
			printf("%c",str[curr]);
		}
		for(curr=0;curr<lsstr;curr++){
			printf("%c",rpl[curr]);
		}
		for(curr=pst+lsstr;curr<lstr;curr++){
			printf("%c",str[curr]);
		}
	}
	return 0;
}
