#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    int original = x;
    int reverse = 0;

    if (x < 0)
        return false;

    while (x > 0)
    {
        reverse = reverse * 10 + (x % 10);
        x = x / 10;
    }

    if(original == reverse)
    return true;
    else
    return false;
}

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (isPalindrome(x))
        printf("Yes, it's a palindrome\n");
    else
        printf("No, it's not a palindrome\n");

    return 0;
}