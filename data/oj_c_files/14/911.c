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

struct Student{//?????
	int nID,nChinese,nMath;
};
void main(){
	int n,i,a1,a2,a3,t1,t2,t3,t;//a1,a2,a3????????ID?t1,t2,t3????
	struct Student students;
	t1=0;
	t2=0;
	t3=0;
	a1=0;
	a2=0;
	a3=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		scanf("%d%d%d",&students.nID,&students.nChinese,&students.nMath);
		t=students.nChinese+students.nMath;
		if (t>t1){//????????????
			t3=t2;
			a3=a2;   //???????????
			t2=t1;
			a2=a1;   //??????????? 
			t1=t;
			a1=students.nID;
		}else
			if (t>t2){//?????????????????????
				t3=t2;
				a3=a2;//???????????
				t2=t;
				a2=students.nID;
			}else
				if (t>t3){
					t3=t;
					a3=students.nID;
				}
	}
	printf("%d%s%d\n",a1," ",t1);
	printf("%d%s%d\n",a2," ",t2);
	printf("%d%s%d\n",a3," ",t3);
}

