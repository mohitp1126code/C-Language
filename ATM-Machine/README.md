### ATM Cash Withdrawal System in C

## About Project
This project is a simple ATM Cash Withdrawal System developed using C language. It allows users to withdraw money using available currency notes of ₹2000, ₹500, ₹200, and ₹100.

The program checks the withdrawal amount, available ATM balance, and denomination availability before completing the transaction.

## Features
- Accepts withdrawal amount from the user.
- Validates whether the amount is divisible by 100.
- Checks total available cash in the ATM.
- Dispenses notes using the largest denomination first.
- Checks the availability of each denomination.
- Updates available notes after successful withdrawal.
- Restores deducted notes if the transaction fails.
- Displays the number of notes dispensed.

## Available Currency Notes

| Currency Note | Available Quantity |
|---|---:|
| ₹2000 | 1000 |
| ₹500 | 1000 |
| ₹200 | 1000 |
| ₹100 | 1000 |

## Note Selection Priority
The ATM follows the largest denomination first approach:

1. ₹2000
2. ₹500
3. ₹200
4. ₹100

## Program Logic
1. Declare global variables to store available currency notes.
2. Take the withdrawal amount as input.
3. Check whether the amount is divisible by 100.
4. Calculate the total available cash in the ATM.
5. Check whether sufficient funds are available.
6. Calculate the required ₹2000 notes.
7. Calculate the remaining amount.
8. Repeat the same process for ₹500, ₹200, and ₹100 notes.
9. Check whether the remaining amount is zero.
10. If the transaction fails, restore the deducted notes.
11. Display the dispensed notes if the transaction is successful.

