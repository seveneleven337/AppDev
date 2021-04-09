// this program will take 2 positive integers from the user, and display
// all numbers dibisible by 3 between these two integers


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//hola
int main() {
	int a, b;
	printf("Enter 2 positive integers: ");
	scanf("%d%d", &a, &b);
	if (a > b) {
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	for (int i=a, c=0; i<= b; i++){
		if (i % 3 == 0) {
			printf("%6d", i);
			c += 1;
			if (c % 10 == 0) {
				printf("\n");
			}
		}
	}
	//also added from vs
	return 0;
}