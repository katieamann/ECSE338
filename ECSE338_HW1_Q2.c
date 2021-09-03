#include <stdio.h>

int factorial(int n){
    int i, f = 1;
    for (i = 1; i <= n; i++){
        f = f * i;
    }
    return f;
}

int main(){
	int x;
	printf("Integer\tSquare\tFactorial\n");
	printf("-------------------------\n");

	for(x=1; x<=10; x++){
		int f = factorial(x);
		printf("%d\t%d\t%d\n", x, x*x, f);
	}

	return 0;
}


