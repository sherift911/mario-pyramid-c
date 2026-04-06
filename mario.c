#include <stdio.h>

void print_spaces(int n);
void print_hashes(int n);

int main(void)
{
    int height;

    do
    {
        printf("Height: ");
        scanf("%i", &height);
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        print_spaces(height - i);
        print_hashes(i);
        printf("  ");
        print_hashes(i);
        printf("\n");
    }

    return 0;
}

void print_spaces(int n)
{
    for (int i = 0; i < n; i++)
        printf(" ");
}

void print_hashes(int n)
{
    for (int i = 0; i < n; i++)
        printf("#");
}
