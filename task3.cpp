#include <stdio.h>

int main() {
    int marks[10];
    int passed[10], failed[10];
    int i, passCount = 0, failCount = 0;
    float passSum = 0, failSum = 0;

    printf("Enter the quiz marks for 10 students (0 to 10), or -1 to exit:\n");

    for (i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] == -1) {
            break;
        }
        if (marks[i] >= 5 && marks[i] <= 10) {
            passed[passCount++] = marks[i];
            passSum += marks[i];
        } 
        else if (marks[i] >= 0 && marks[i] < 5) {
            failed[failCount++] = marks[i];
            failSum += marks[i];
        } 
        else {
            printf("Invalid marks entered! Please enter marks in range 0-10 or -1 to exit.\n");
            i--;
        }
    }

    printf("\nPassed students' marks:");
    for (i = 0; i < passCount; i++) {
        printf(" %d", passed[i]);
    }
    if (passCount > 0)
        printf("\nAverage marks of passed students: %.2f\n", passSum / passCount);
    else
        printf("\nNo passed students.\n");

    printf("\nFailed students' marks:");
    for (i = 0; i < failCount; i++) {
        printf(" %d", failed[i]);
    }
    if (failCount > 0)
        printf("\nAverage marks of failed students: %.2f\n", failSum / failCount);
    else
        printf("\nNo failed students.\n");

    return 0;
}

