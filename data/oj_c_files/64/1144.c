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


struct POINT{
	int x, y, z;
};

struct DISTANCE{
	int pointx, pointy;
	double dis;
};

int cmp(const void* e1, const void* e2){
	struct DISTANCE* elem1 = (struct DISTANCE*)e1;
	struct DISTANCE* elem2 = (struct DISTANCE*)e2;
	if(elem1->dis == elem2->dis)
		return (elem1->pointx) - (elem2->pointx);
	if(elem1->dis > elem2->dis)
		return -1;
	return 1;
}

int main(){
	int n;
	struct POINT data[11];
	struct DISTANCE distance[10000];
	scanf("%d", &n);
	int i;
	for(i=0; i<n; i++)
		scanf("%d %d %d", &(data[i].x), &(data[i].y), &(data[i].z));
	int j;
	int cnt = 0;
	for(i=0; i<n; i++)
		for(j=i+1; j<n; j++){
			distance[cnt].pointx = i;
			distance[cnt].pointy = j;
			distance[cnt].dis = sqrt((data[i].x-data[j].x)*(data[i].x-data[j].x)+(data[i].y-data[j].y)*(data[i].y-data[j].y)+(data[i].z-data[j].z)*(data[i].z-data[j].z));
			cnt++;
		}
	qsort(distance, cnt, sizeof(struct DISTANCE), cmp);
	for(i=0; i<cnt; i++){
		int x=distance[i].pointx;
		int y=distance[i].pointy;
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", data[x].x, data[x].y, data[x].z, data[y].x, data[y].y, data[y].z, distance[i].dis);
	}
	return 0;
}

