#include <stdio.h>

int isPerfectNumber(int n)
{
    if (n <= 0)
    {
        return 0;
    }

    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return sum == n;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfectNumber(num))
    {
        printf("The number %d is a perfect number.\n", num);
    } else
    {
        printf("The number %d is not a perfect number.\n", num);
    }

    return 0;
}
