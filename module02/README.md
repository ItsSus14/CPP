# C++ Module 02 — Ad-hoc polymorphism, operator overloading and the Orthodox Canonical Form

This module builds a `Fixed` class that represents **fixed-point numbers** (8 fractional bits). Each exercise adds new features.

## Exercises

| Exercise | Program | Topic |
| --- | --- | --- |
| ex00 — My First Class in Orthodox Canonical Form | `fixed` | Default constructor, copy constructor, copy assignment operator, destructor |
| ex01 — Towards a more useful fixed-point number class | `fixed` | Conversion from and to `int` and `float`, `operator<<` |
| ex02 — Now we're talking | `fixed` | Comparison, arithmetic and increment/decrement operators, `min` / `max` |

### ex00 — Orthodox Canonical Form
A `Fixed` class with a raw integer value and the four canonical members. Each one prints a message, which makes the order of construction, copy and destruction visible.

### ex01 — Conversions
New constructors take an `int` or a `float` and convert it to fixed-point representation using bit shifts. `toInt()` and `toFloat()` convert back. `operator<<` prints the value as a float.

### ex02 — Operators
- Comparison operators: `>`, `<`, `>=`, `<=`, `==`, `!=`
- Arithmetic operators: `+`, `-`, `*`, `/`
- Pre- and post-increment/decrement (`++a`, `a++`, `--a`, `a--`), which change the value by the smallest representable step (ε)
- Static `min` and `max` functions, with `const` and non-`const` overloads

## What I learned

- The Orthodox Canonical Form and why every class that manages state needs it
- How fixed-point numbers work and how to convert them with bit shifting and `roundf`
- Overloading operators as member and non-member functions
- The difference between pre- and post-increment, and why one returns a reference and the other a copy

## Build

```bash
cd ex0X && make && ./fixed
```
