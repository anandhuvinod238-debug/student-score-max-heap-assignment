#include <stdio.h>

#define N 8

int main(void) {
    int scores[N] = {78, 92, 65, 88, 95, 72, 84, 90};
    int maximum = scores[0];
    int comparisons = 0;

    for (int i = 1; i < N; i++) {
        comparisons++;
        if (scores[i] > maximum) maximum = scores[i];
    }

    printf("Scores: ");
    for (int i = 0; i < N; i++) printf("%d%s", scores[i], i + 1 == N ? "" : ", ");
    printf("\nHighest score: %d\n", maximum);
    printf("Score comparisons: %d\n", comparisons);
    return 0;
}
