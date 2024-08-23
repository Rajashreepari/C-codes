#include <stdio.h>

void hanoi(int n, char A, char B, char C);

int main() {
    int n;
    printf("Enter the number of disks\n");
    scanf("%d", &n);
    printf("Moves:\n");
    hanoi(n, 'A', 'B', 'C');
    return 0;
}

void hanoi(int n, char A, char B, char C) {
    if(n==1){
        printf("Move disk 1 from tower %c to tower %c\n",A,C);
        return;
    }
    hanoi(n-1,A,C,B);
    printf("Move disk %d from tower %c to tower %c\n",n,A,C);
    hanoi(n-1,B,A,C);
}
