#include <stdio.h>
#include <stdlib.h>
#define FLUSH while(getchar()!='\n')
int main() {
	int N, M;
	int* number;
	int tmp1, tmp2, tmp3, sum;
	int i, j, k, jn, kn;

	scanf("%d %d", &N, &M);
	number = (int*)malloc(sizeof(int) * N);
	for (i = 0;i < N;i++) {
		scanf("%d", &number[i]);
	}
	int absolute=M,finsum=0;
	for (i = 0;i < N;i++) {
		tmp1 = number[i];
		jn = i+1;kn = i+2;
		for (j = jn;j < N;j++) {
			tmp2 = number[j];
			for (k = kn;k < N;k++) {
				tmp3 = number[k];
				sum = tmp1 + tmp2 + tmp3;
				if (M-sum < absolute && M>=sum) {
					absolute = M-sum;
					finsum = sum;
				}
			}
			kn++;
		}
		jn++;
	}

	printf("%d\n", finsum);

	return 0;
}