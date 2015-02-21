#include <stdio.h>
#include <math.h>

#define PI 2 * acos (0.0)

int main()
{
	freopen("input.txt", "r", stdin);
	int t, cases=0;
	double r, area;
	scanf("%d", &t);
	while(t--){
		scanf("%lf", &r);
		area = 4*r*r - PI*r*r;
		printf("Case %d: %.2lf\n", ++cases, area+1e-9);
	}
	return 0;
}
