# C++ Module 00 — First steps in C++

An introduction to the basics of C++ coming from C: namespaces, classes, member functions, standard I/O streams and `std::string`.

## Exercises

### ex00 — Megaphone
A program that prints its arguments in uppercase. Without arguments, it prints a default feedback noise message.

```bash
./megaphone "shhhhh... I think the students are asleep..."
# SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
./megaphone
# * LOUD AND UNBEARABLE FEEDBACK NOISE *
```

### ex01 — My Awesome PhoneBook
An interactive phonebook that stores up to **8 contacts** without dynamic allocation. When the phonebook is full, the oldest contact is replaced.

Commands:
- `ADD` — add a new contact (first name, last name, nickname, phone number, darkest secret)
- `SEARCH` — show all contacts in a formatted table (10-character columns, truncated with `.`), then the full details of the selected index
- `EXIT` — quit the program

Main classes: `PhoneBook` (holds an array of `Contact`) and `Contact`.

## What I learned

- Writing classes with `private` and `public` members
- Using `std::cout`, `std::cin`, `std::getline` and the `<iomanip>` formatting functions
- Reading user input line by line with `std::getline`
- Encapsulation: keeping data private and exposing it through member functions

## Build

```bash
cd ex00 && make && ./megaphone
cd ex01 && make && ./phonebook
```
