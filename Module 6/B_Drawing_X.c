#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || i == N - j - 1)
                printf("*");
            else if (i == N / 2 && j != N / 2)
                printf("X");
            else if (j == N / 2 && i != N / 2)
                printf("X");
            else
                printf("/");
        }
        printf("\n");
    }

    return 0;
}
