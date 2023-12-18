#include <stdio.h>
#include <time.h>

void printSecondsSinceExecution() {
    clock_t start_time = clock();

    while (1) {
        clock_t current_time = clock();
        double elapsed_seconds = (double)(current_time - start_time) / CLOCKS_PER_SEC;

        printf("Seconds since execution: %.2f\n", elapsed_seconds);

        // Sleep for 1 second
        clock_t end_time = current_time + CLOCKS_PER_SEC;
        while (clock() < end_time) {
            
        }
    }
}

int main() {
    printSecondsSinceExecution();

    return 0;
}

