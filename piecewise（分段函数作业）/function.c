#include <stdio.h>
#include <math.h>
int main() {
	double x, y;
	printf("请输入x：");
	scanf_s("%lf", &x);
	if (x < 5) { y = fabs(x); }
	else if (x >= 5 && x < 10) { y = x * x * x; }
	else { y = sqrt(x); }
	printf("y的值是：%.2lf\n", y);
	return 0;
}