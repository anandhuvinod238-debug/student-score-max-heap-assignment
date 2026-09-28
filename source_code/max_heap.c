#include <stdio.h>

#define N 8

int main(void) {
    int scores[N] = {78, 92, 65, 88, 95, 72, 84, 90};
    int heap[N];
    int size = 0;
    int total_comparisons = 0;

    printf("Max Heap insertion trace\n");
    for (int i = 0; i < N; i++) {
        int index = size++;
        heap[index] = scores[i];
        printf("Insert %d: ", scores[i]);

        while (index > 0) {
            int parent = (index - 1) / 2;
            total_comparisons++;
            if (heap[parent] >= heap[index]) break;
            int temp = heap[parent];
            heap[parent] = heap[index];
            heap[index] = temp;
            index = parent;
        }

        for (int j = 0; j < size; j++) {
            printf("%d%s", heap[j], j + 1 == size ? "" : ", ");
        }
        printf("\n");
    }

    printf("\nHighest score: %d\n", heap[0]);
    printf("Key comparisons to find maximum: 0\n");
    printf("Root accesses to find maximum: 1\n");
    printf("Insertion parent-child key comparisons: %d\n", total_comparisons);
    return 0;
}
