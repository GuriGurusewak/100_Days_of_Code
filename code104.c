#include <stdio.h>

int pivotInteger(int n) {
    int totalSum = (n * (n + 1)) / 2;
    int leftSum = 0;

    for (int x = 1; x <= n; x++) {
        leftSum += x;
        int rightSum = totalSum - leftSum + x;

        if (leftSum == rightSum) {
            return x;
        }
    }

    return -1;
}

int main() {
    int n1 = 8;
    printf("Output 1: %d\n", pivotInteger(n1));

    int n2 = 1;
    printf("Output 2: %d\n", pivotInteger(n2));

    int n3 = 4;
    printf("Output 3: %d\n", pivotInteger(n3));

    return 0;
}
	
