#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double q = 0, w = 0, e = 0, r = 0;
	double t = 0, y = 0, u = 0, i = 0,o=0,p=0;
	scanf("%lf%lf%lf", &q, &w, &e);
	r = q + w + e;//三角形的周长
	t = r / 2;
	u = t - q;
	i = t - w;
	o = t - e;
	p = t * u * i * o;
	y = sqrt(p);
	printf("circumference=%.2lf area=%.2lf\n", r, y);
	return 0;
}