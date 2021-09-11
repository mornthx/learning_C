#include <stdio.h>
#include <math.h>
#include <time.h>
int main(){
	int 		denominator,flag;
	double 		item,pi;
	clock_t		time1,time2;
	flag = 1;
	denominator = 1;
	item = 1.0;
	pi	 = 0;
	time1 = clock();

	while(fabs(item) >= 0.000000001
	){
		item = flag*1.0/denominator;
		pi += item;
		flag = -flag;
		denominator = denominator + 2;
	}
	time2 = clock();
	printf("pi = %.10f\n",pi*4);
	printf("spend %d us",time2-time1);
}