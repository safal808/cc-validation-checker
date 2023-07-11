# Credit Card Validator

This is a simple program in C++ that validates credit card numbers using the Luhn algorithm.

## Description

The program prompts the user to enter a credit card number and validates it using the Luhn algorithm. It checks the validity of the credit card number based on the following steps:

1. It ensures that the input contains only numeric characters.
2. It doubles every second digit from the right, starting with the second-to-last digit.
3. If the doubled digit is greater than 9, it adds the digits of the doubled number together.
4. It sums up all the digits in the credit card number, including the doubled digits.
5. If the total sum is divisible by 10, the credit card number is considered valid.

The program continues to prompt the user for credit card numbers until the user enters "quit" to exit.

## Getting Started

To run the program, follow these steps:

1. Ensure you have a C++ compiler installed on your machine.
2. Copy the code and save it in a file with a `.cpp` extension (e.g., `credit_card_validator.cpp`).
3. Compile the code using your C++ compiler.
4. Run the compiled executable.

## Usage

1. When prompted, enter a credit card number (consisting of numeric digits only).
2. The program will validate the credit card number and display whether it is valid or invalid.
3. Enter "quit" to exit the program.

## Example
Enter 'quit' anytime to exit.

Please enter Credit Card number: 45320151128336

CC is Valid!

Please enter Credit Card number: 12345

Invalid input! Please enter a valid credit card number.

Please enter Credit Card number: quit



