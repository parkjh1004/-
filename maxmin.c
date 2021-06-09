#include <stdio.h>

void main(){
	int i=0;
	int min=9999, max=0, sum=0, avg=0;
	int count=0;
	int num[5] ={0,};
	FILE *indata;
	fopen("indata","r");
	fscanf(indata, "%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
	
	for(i=0; i<5; i++){
		sum += num[i];
		count++;
		if(max < num[i]) max = num[i];
		if(min > num[i]) min = num[i];
	}
	avg = sum/count;
	
	printf("최대값 : %d , 최소값 : %d, 합계 : %d, 평균 : %d ", max, min, sum, avg);
	fclose (indata);
}
