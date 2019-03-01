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

int main(int argc, char* argv[])
{
    int n;
	scanf("%d",&n);
	int i,j;
	float dis=0,x=0;
    struct point{
		double x,y;
	};
	struct point *pt;
    pt=(struct point *) malloc(sizeof(point) * n);
	for (i=0;i<n;i++) {
		float x1,y1;
		scanf("%f %f",&x1,&y1);
		(pt+i)->x=x1;
		(pt+i)->y=y1;
	}
    for (i=0;i<n;i++) {
		for (j=i+1;j<n;j++) {
			x=sqrt(((pt+i)->x-(pt+j)->x)*((pt+i)->x-(pt+j)->x)+((pt+i)->y-(pt+j)->y)*((pt+i)->y-(pt+j)->y));
			if (x>dis) {
				dis=x;
			}
			else {
				dis=dis;
			}
		}
	}
    printf("%.4f",dis);
	return 0;
}
