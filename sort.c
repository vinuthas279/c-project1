#include <stdio.h>

sort () {
    int a[6];
    int i, temp, n;

    printf("Enter 6 numbers:\n");
    for (i = 0; i < 6; ++i) {
        scanf("%d", &a[i]);
    }

    // Bubble sort
    for (i = 0; i < 6; ++i) {
        for (n = i + 1; n < 6; ++n) {
            if (a[i] < a[n]) {
                temp = a[i];
                a[i] = a[n];
                a[n] = temp;
            }
        }
    }

    printf("After sorting:\n");
    for (i = 0; i < 6; ++i) {
        printf("%d ", a[i]);
    }
}

