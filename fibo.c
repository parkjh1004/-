#include <stdio.h>

int Fibo(int n){
	int i;
	int one=1;
	int two=1;
	int result=-1;
	if(n==1||n==2){
		return 1;
	}
	else{
		for(i=3; i<=n; i++){
			result=one+two;
			one=two;
			two=result;
		}
	}
	return result;
}
int main(){
	int n;
	int i;
	printf("피보나치 수 입력 : ");
	scanf("%d", n);
	for(i=1; i<n; i++){
		printf("%d ", Fibo(i));
	}
	return 0;
}
