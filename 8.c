#include <stdio.h>

int main()
 {
    int num, binary[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    if (num == 0) 
    {
        printf("The binary equivalent of 0 is 0.\n");
        return 0;
    }
    while (num > 0)
     {
        binary[i] = num % 2;
        num /= 2;
        i++;
     }
    printf("The binary equivalent is: ");
    for (int j = i - 1; j >= 0; j--)
     {
        printf("%d", binary[j]);
     }
    printf("\n");

    return 0;
}