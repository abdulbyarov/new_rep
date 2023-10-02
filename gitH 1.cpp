
#include <stdio.h>

int main()
{
	int x, y, q;
	scanf_s("%d", &q);
	scanf_s("%d", &y);
	scanf_s("%d", &x);
	printf("1 = + \n2 = -\n3 = *\n4 = /\n result= ");
	if (q == 1) {
		printf("%d", y + x);
	}
	else if (q == 2) {
		printf("%d", y - x);
	}
	else if (q == 3) {
		printf("%d", y * x);
	}
	else if (q == 4) {
		printf("%d", y / x);
	}

}
<<<<<<< HEAD
//ну уже норм
=======
//nice
>>>>>>> branch1
