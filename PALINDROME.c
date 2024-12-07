#include <stdio.h>

int isPalindrome(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int original = n, reversed = 0, remainder;

    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    return original == reversed;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
    {
        printf("The number is a palindrome.\n", num);
    } else
    {
        printf("The number is not a palindrome.\n", num);
    }

    return 0;
}
