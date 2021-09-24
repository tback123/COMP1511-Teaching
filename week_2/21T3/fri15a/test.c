
#include <stdio.h>

int main(void) {

    int row = 0;
    int col = 0;
    int sum = 0;
    
    printf("Enter row col : ");
    scanf("%d %d", &row, &col); 
    
    printf("Row is: %d\n", row);
    printf("Col is: %d\n", col);
    
    sum = (row + (col * 2));
    
    printf("Sum is: %d\n", sum);

    return 0;
}
