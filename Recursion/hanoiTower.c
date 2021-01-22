#include <stdio.h>
// n: number of disks, 
// A, B, C: numbering of each poles
void hanoi(int n, int A, int B, int C) {

    if (n == 0)
        return;

    hanoi(n-1, A, C, B);
    printf("move disk from %d to %d\n", A ,C);
    hanoi(n-1, B, A, C);
}

int main() {
    hanoi(3, 1, 2, 3);
}

// result
move disk from 1 to 3
move disk from 1 to 2
move disk from 3 to 2
move disk from 1 to 3
move disk from 2 to 1
move disk from 2 to 3
move disk from 1 to 3
