
#include <stdio.h>
#include <stdlib.h>

// Global variables (Available notes)
int th = 1000, tt = 1000, tf = 1000, ttt = 1000;

int main()
{
    // Local variables
    int rs100, rs200, rs500, rs2000, amount;
    long int cashmoney;

    printf("Enter amount: ");
    scanf("%d", &amount);

    // Amount should be divisible by 100
    if (amount % 100 != 0)
    {
        printf("Error: You have entered invalid amount!");
        exit(0);
    }

    // Total available money in ATM
    cashmoney = th * 100 + tt * 200 + tf * 500 + ttt * 2000;

    // Check available balance
    if (amount > cashmoney)
    {
        puts("Sorry! Insufficient fund!");
        return 0;
    }

    // 2000 denomination
    rs2000 = amount / 2000;

    if (rs2000 > ttt)
        rs2000 = ttt;

    ttt = ttt - rs2000;
    amount = amount - rs2000 * 2000;

    // 500 denomination
    rs500 = amount / 500;

    if (rs500 > tf)
        rs500 = tf;

    tf = tf - rs500;
    amount = amount - rs500 * 500;

    // 200 denomination
    rs200 = amount / 200;

    if (rs200 > tt)
        rs200 = tt;

    tt = tt - rs200;
    amount = amount - rs200 * 200;

    // 100 denomination
    rs100 = amount / 100;

    if (rs100 > th)
        rs100 = th;

    th = th - rs100;
    amount = amount - rs100 * 100;

    // Check transaction status
    if (amount > 0)
    {
        puts("Error: Transaction failed! Please try again!");

        // Restore previous notes
        ttt += rs2000;
        tf += rs500;
        tt += rs200;
        th += rs100;

        return 0;
    }

    // Display dispensed notes
    printf("2000 * %d\n", rs2000);
    printf("500 * %d\n", rs500);
    printf("200 * %d\n", rs200);
    printf("100 * %d\n", rs100);

    return 0;
}

