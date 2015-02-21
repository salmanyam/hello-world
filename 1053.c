#include <stdio.h>

int main()
{
	int t, cases=0, a, b, c, r;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d %d", &a, &b, &c);
		
		if(a*a+b*b==c*c || a*a+c*c==b*b || a*a==b*b+c*c)printf("Case %d: yes\n", ++cases);
		else printf("Case %d: no\n", ++cases);
	}
	return 0;
}
