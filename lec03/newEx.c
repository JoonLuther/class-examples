#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void rand_point(int* x, int* y, int*z) {
	*x = rand()%10;
	*y = rand()%10;
	*z = rand()%10;
}

int main() {
	srand(time(0));
	int x, y, z;
	rand_point(&x, &y, &z);
	printf("point: %d, %d, %d\n", x, y, z);
}
