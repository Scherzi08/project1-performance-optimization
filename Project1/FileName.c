#include <stdio.h>

int main(void)
{
    int start;
    int end;
    int current;
    int firstMultiple;

    printf("Gib einen Start Wert ein: ");
    if (scanf_s("%d", &start) != 1)
    {
        return 1;
    }

    printf("Gib einen end Wert ein: ");
    if (scanf_s("%d", &end) != 1)
    {
        return 1;
    }

    if (start > end)
    {
        int tmp = start;
        start = end;
        end = tmp;
    }

    firstMultiple = start + ((7 - (start % 7)) % 7);
    if (start % 7 == 0)
    {
        firstMultiple = start;
    }

    for (current = firstMultiple; current <= end; current += 7)
    {
        printf("%d\n", current);
    }

    return 0;
}
