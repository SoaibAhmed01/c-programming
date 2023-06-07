#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[1000];  // Assuming a maximum size of 1000 for the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the minimum element in the array
    int minimum = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    // Count the frequency of the minimum element
    int frequency = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == minimum) {
            frequency++;
        }
    }

    // Check if the frequency is odd or even
    if (frequency % 2 == 1) {
        printf("Lucky\n");
    } else {
        printf("Unlucky\n");
    }

    return 0;
}
