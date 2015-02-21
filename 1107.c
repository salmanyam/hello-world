#include <stdio.h>

int main()
{
	int t, cases=0, x1, y1, x2, y2, x, y, m, i;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		scanf("%d", &m);
		printf("Case %d:\n", ++cases);
		for(i=0; i<m; i++){
			scanf("%d %d", &x, &y);
			if(x >= x1 && x <= x2 && y >= y1 && y <= y2)printf("Yes\n");
			else printf("No\n");
		}
	}
	return 0;
}
