# C++ Modules — 42 Roma

My solutions to the **C++ Modules** of the 42 Common Core: a progressive introduction to C++ and object-oriented programming, written in **C++98** and compiled with `-Wall -Wextra -Werror`.

Each module focuses on a specific set of language features. Each exercise lives in its own folder, with a Makefile and a test `main`.

## Modules

| Module | Topic | Key concepts |
| --- | --- | --- |
| [Module 00](module00) | First steps in C++ | Namespaces, classes, member functions, `iostream`, `std::string`, initialization lists, `static` and `const` |
| [Module 01](module01) | Memory and references | Stack vs heap allocation, `new` / `delete`, pointers vs references, pointers to member functions, file streams, `switch` |
| [Module 02](module02) | Ad-hoc polymorphism | Orthodox Canonical Form, operator overloading, fixed-point numbers |
| [Module 03](module03) | Inheritance | Base and derived classes, `protected` members, constructor/destructor chaining, multiple and virtual inheritance |
| [Module 04](module04) | Subtype polymorphism | Virtual functions, virtual destructors, deep copy, abstract classes |

## Build and run

Every exercise follows the same pattern:

```bash
cd module0X/ex0Y
make        # build
./<program> # run
make clean  # remove object files
make fclean # remove object files and the executable
make re     # rebuild from scratch
```

## Rules followed

- C++98 standard only (`-std=c++98`)
- No `using namespace`, no `friend` (unless explicitly allowed)
- No STL containers or algorithms before Module 08
- No memory leaks: every `new` has a matching `delete`
- From Module 02 on, classes follow the **Orthodox Canonical Form** (default constructor, copy constructor, copy assignment operator, destructor)

## Author

**Jesus Merma Bracamonte** — student at 42 Roma
[GitHub](https://github.com/ItsSus14) · [LinkedIn](https://www.linkedin.com/in/jesus-merma-bracamonte-0a8ba01b2/)
