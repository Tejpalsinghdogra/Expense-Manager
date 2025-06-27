# Expense Manager – C++ Project

The **Expense Manager** is a C++ console application that allows users to manage their personal expenses efficiently. It categorizes expenses into **Transport**, **Utilities**, and **Shopping**, and provides functionalities to add, deduct, and display the amount in each category.

This project showcases the practical application of **Object-Oriented Programming (OOP)** concepts such as encapsulation, modular class design, and structured programming.

# Features

- Add amount to specific expense categories.
- Deduct amount from each category.
- Display current balances for all categories.
- Structured, menu-driven user interface.
- Demonstrates OOP design in C++.

# Classes and Functions

The project contains three main classes:
- `transport`
- `utilities`
- `shopping`

Each class contains:
- Private variables to store amounts.
- Public functions:
  - `displayinfo(int amount)` – Adds the amount to the total.
  - `deductamt(int amount)` – Deducts the amount from the total.
  - `showaccounts()` – Displays the total amount.

# Sample Output
Expense Menu(Add)
1:Add amount to the transport
2:Add amount to the utilities
3:Add amount to the shopping
4:Show all accounts
5:Deduct amount
6:Exit program
Enter your choice: 1

Enter your amount: 500
Amount added successfully
Total amount in transport: 500

Expense Menu(Add)
1:Add amount to the transport
2:Add amount to the utilities
3:Add amount to the shopping
4:Show all accounts
5:Deduct amount
6:Exit program
Enter your choice: 2

Enter your amount: 300
Amount added successfully
Total amount in utilities: 300

Expense Menu(Add)
1:Add amount to the transport
2:Add amount to the utilities
3:Add amount to the shopping
4:Show all accounts
5:Deduct amount
6:Exit program
Enter your choice: 4

Total amount in transport: 500
Total amount in utilities: 300
Total amount in shopping: 0

Expense Menu(Add)
1:Add amount to the transport
2:Add amount to the utilities
3:Add amount to the shopping
4:Show all accounts
5:Deduct amount
6:Exit program
Enter your choice: 5

Expense Menu(Deduct)
1:Deduct amount from transport
2:Deduct amount from utilities
3:Deduct amount from shopping
4:Show all accounts
5:Exit program
Enter your choice: 1

Enter the amount you want to deduct: 200
Amount deducted successfully
Total amount in transport: 300

Expense Menu(Deduct)
1:Deduct amount from transport
2:Deduct amount from utilities
3:Deduct amount from shopping
4:Show all accounts
5:Exit program
Enter your choice: 5

Program ended successfully

Author
Tejpalsinghdogra
B.Tech CSE, GNA University
