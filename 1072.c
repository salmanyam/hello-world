#include <stdio.h>
#include <math.h>

#define PI 2 * acos (0.0)

int main()
{
	int t, cases=0, n;
	double x, R;
	scanf("%d", &t);
	while(t--){
		scanf("%lf %d", &R, &n);
		x = sin(PI/n);
		printf("Case %d: %.10lf\n", ++cases, (R*x)/(1+x));
	}
	return 0;
}
