#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
double	fate(double a)//自定义函数函数fate
{
	double b;
	b=1+1/a;
	return b;
}
double main(void)
{
	double x,y;
	printf("pleace enter  x\n ");
	scanf("%lf",&x);
	x=fate(x);
	x=fate(x);
	x=fate(x);
	x=fate(x);
	x=fate(x);
	x=fate(x);
	y=fate(x);
	printf("y=%lf",y);
	system("pause");
	return 0;
}