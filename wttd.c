#include <stdio.h>

int main() {
	int a;
	int b;
	int mode;
	
	printf("a : ");
	scanf("%d", &a);

	printf("b : ");
	scanf("%d", &b);
	
	printf("mode : ");
	scanf("%d", &mode);


	if(mode == 1) printf("a + b = %d\n", a+b);
	else if(mode == 2) printf("a - b = %d\n", a-b);
	else if(mode == 3) printf("a x b = %d\n", a*b);
	else if(mode == 4) printf("a / b = %d\n", a/b);
	else if(mode == 5) {
		int val = 1;
		for(int i = 0; i < b; i++) {
			val *= a;
		}
		printf("a ^ b = %d\n", val);
	}
	else printf("please press 1~4\n");

	return 0;
}
