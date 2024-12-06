#include<stdio.h>
#include<string.h>

// Function to check if the word is a palindrome
int ispalindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1; // Base case: if we've reached the middle, it's a palindrome
    }
    if (str[start] != str[end]) {
        return 0; // Not a palindrome
    }
    return ispalindrome(str, start + 1, end - 1); // Recursive case
}

int main() {
    char word[100];

    // Get the input word
    printf("Enter a word: ");
    scanf("%s", word);  // Correct: removed the & since 'word' is already a pointer

    // Check if the word is a palindrome
    if (ispalindrome(word, 0, strlen(word) - 1)) {
        printf("%s is a palindrome.\n", word);
    } else {
        printf("%s is not a palindrome.\n", word);
    }

    return 0;
}

