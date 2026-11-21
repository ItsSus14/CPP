# C++ Module 01 — Memory allocation, pointers to members, references, switch

This module covers how C++ manages memory and how references differ from pointers.

## Exercises

| Exercise | Program | Topic |
| --- | --- | --- |
| ex00 — BraiiiiiiinnnzzzZ | `zombie` | Stack vs heap allocation of objects |
| ex01 — Moar brainz! | `zombie` | Allocating an array of objects with a single `new[]` |
| ex02 — HI THIS IS BRAIN | `brain` | Pointers vs references to the same string |
| ex03 — Unnecessary violence | `violence` | When to use a reference and when to use a pointer as a class member |
| ex04 — Sed is for losers | `sed_is_for_losers` | File streams and string replacement |
| ex05 — Harl 2.0 | `harl` | Pointers to member functions |
| ex06 — Harl filter | `harlFilter` | `switch` statements with fall-through |

### ex00 — Zombie
A `Zombie` class that announces itself and prints a message when destroyed. `newZombie()` allocates a zombie on the heap so it can outlive the function. `randomChump()` creates one on the stack, which is destroyed at the end of its scope.

### ex01 — Zombie horde
`zombieHorde(N, name)` allocates **N zombies in a single allocation** and returns a pointer to the first one. The horde is released with `delete[]`.

### ex02 — Brain
Prints the addresses and values of a string, a pointer to it and a reference to it, to show that a reference is just another name for the same object.

### ex03 — Weapon, HumanA, HumanB
- `HumanA` always has a weapon, so it stores a **reference** set in the constructor.
- `HumanB` may not have a weapon, so it stores a **pointer** that can be set later.

Changing the weapon's type is reflected in both humans, because they refer to the same object.

### ex04 — Sed is for losers
Replaces every occurrence of `s1` with `s2` in a file and writes the result to `<filename>.replace`, without using `std::string::replace`.

```bash
./sed_is_for_losers input.txt hello world
```

### ex05 — Harl 2.0
`Harl::complain(level)` calls the right private member function (`debug`, `info`, `warning`, `error`) through an **array of pointers to member functions**, without an `if/else` chain.

```bash
./harl WARNING
```

### ex06 — Harl filter
Prints all messages from the given level upward, using a `switch` with fall-through.

```bash
./harlFilter WARNING
```

## What I learned

- Choosing between stack and heap allocation based on object lifetime
- Matching `new` with `delete` and `new[]` with `delete[]`
- The difference between pointers and references, and when to use each
- Reading and writing files with `std::ifstream` and `std::ofstream`
- Pointers to member functions as an alternative to long conditional chains

## Build

```bash
cd ex0X && make && ./<program>
```
