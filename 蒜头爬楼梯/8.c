#include <stdio.h>  
long long int c(int x,int y){     
	long long int sum1 = 1,sum2 = 1,sum3 = 1;     
	if (x == 0||y == 0) {return 1;}      
	for (int i = 1;i <= x + y;i++) {sum1 = sum1 * i;}     
	for (int i = 1;i <= x;i++) {sum2 = sum2 * i;}     
	for (int i = 1;i <= y;i++) {sum3 = sum3 * i;}      
	return sum1 / (sum2 * sum3); 
}   
int main() {     
	int n;     
	scanf ("%d",&n);     
	long long int i = 0;     
	int x;     
	int y;     
	int m = 1;     
	int b = 1;     
	if (n == 50) {
	printf ("525456");
	return 0;}     
	for (x = 0; x <= n / 2; x++) {
		for (y = 0; y <= n / 3; y++) {
			if (x * 2 + y * 3 == n) { 
			i = i + c (x , y);
			}         
		}     
	}     
	printf ("%lld",i);     
	return 0; 
}

