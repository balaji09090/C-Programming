#include <stdio.h>
int main()
{
    float amount = 0;
    int unit;
    printf("Enter The Unit :");
    scanf("%d", &unit);
    if (unit >= 100)
    {
        amount = 8 * 100;
        unit = unit - 100;
        if (unit >= 100)
        {
            amount = amount + (10 * 100);
            unit = unit - 100;
            if (unit >= 100)
            {
                amount = amount + (12 * 100);
                unit = unit - 100;
                if (unit >= 100)
                {
                    amount = amount + (15 * 100);
                    unit = unit - 100;
                    if (unit >= 100)
                    {
                        amount = amount + (17 * 100);
                        unit = unit - 100;
                        if (unit > 0)
                        {
                            amount = amount + (unit * 20);
                        }
                        else
                            amount = amount + (unit * 17);
                    }
                    else
                        amount = amount + (unit * 15);
                }
                else
                    amount = amount + (unit * 15);
            }
            else
                amount = amount + (unit * 15);
        }
        else
            amount = amount + (unit * 12);
    }
    else
        amount = amount + (unit * 8);

    printf("Electricity Bill Amount :%.2f\n", amount);
    return 0;
}