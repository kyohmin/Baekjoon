#include <stdio.h>
// 리뷰 필요 (완벽히 이해 못함)
int main(void){
	int numCount[10] = {0,};
	int a = 0, tot = 1;
	for (int i = 0; i < 3; i++){
		scanf("%d", &a);
		tot *= a;
	}
	int num;
	while(tot > 0){
		num = tot % 10;
		numCount[num]++;
		tot /= 10;
	}
	for(int j = 0; j < 10; j++){
		printf("%d\n", numCount[j]);
	}
	return 0;
}
