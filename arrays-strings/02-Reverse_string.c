#include <stdio.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;
    
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        
        left++;
        right--;
    }
}

int main() {
    
    char str[] = {'h', 'e', 'l', 'l', 'o'};
    int size = 5;

    printf("Original: ");
    for (int i = 0; i < size; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");    
    reverseString(str, size);

    printf("Reversed:");
    for (int i = 0; i < size; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}