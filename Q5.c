#include <stdio.h>

int main() {
    int num, original, reversed = 0, reminder;

   
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; 

    
    while (num != 0) {
        reminder = num % 10;             
        reversed = reversed * 10 + reminder; 
        num = num / 10;                  
    }

    
    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}