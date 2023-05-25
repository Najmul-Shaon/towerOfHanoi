#include <stdio.h>
#include<conio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk from %c to %c\n", source, destination);
        return;
    }
    
    towerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk from %c to %c\n", source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int numDisks;
    
    printf("Enter the number of disks: ");
    scanf("%d", &numDisks);
    
    printf("Tower of Hanoi solution:\n");
    towerOfHanoi(numDisks, 'A', 'B', 'C');
    
    return 0;
}
