#include <stdio.h>
#include <string.h>

#define MAX 110

int arr[MAX], temp[MAX];

int main()
{
	int t, cases=0;
	int n, m, i, j, tmp, d, f;
	char ch;
	
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &m);
		for(i=0; i<n; i++)scanf("%d", &arr[i]);
		memset(temp, 0, sizeof(temp));
		for(j=0; j<m; ){
			scanf("%c", &ch);	
			if(ch >= 'A' && ch <= 'Z'){
			switch(ch){
			case 'S':
				scanf("%d", &d);
				for(i=0; i<n; i++)arr[i] += d;
				break;
			case 'M':
				scanf("%d", &d);
				for(i=0; i<n; i++)arr[i] *= d;
				break;
			case 'D':
				scanf("%d", &d);
				for(i=0; i<n; i++)arr[i] /= d;
				break;
			case 'R':
				for(i=0; i<n; i++){
					temp[i] = arr[n-i-1];
				}
				for(i=0; i<n; i++)arr[i] = temp[i];
				break;
			case 'P':
				scanf("%d %d", &d, &f);
				
				tmp = arr[d];
				arr[d] = arr[f];
				arr[f] = tmp;
				break;
			}
			j++;
			}
		}
		printf("Case %d:\n", ++cases);
		for(i=0; i<n; i++){
			printf("%d", arr[i]);
			if(i < n-1)printf(" ");
		}
		printf("\n");
	}
}
