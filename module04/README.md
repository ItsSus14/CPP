# C++ Module 04 — Subtype polymorphism, abstract classes and interfaces

This module uses a hierarchy of animals to show how virtual functions let a base-class pointer call the right derived-class behavior.

## Exercises

| Exercise | Program | Topic |
| --- | --- | --- |
| ex00 — Polymorphism | `animal` | Virtual functions and virtual destructors |
| ex01 — I don't want to set the world on fire | `brain` | Deep copy and dynamic memory inside a class hierarchy |
| ex02 — Abstract class | `abstract` | Pure virtual functions and non-instantiable base classes |

### ex00 — Polymorphism
An `Animal` base class with `Dog` and `Cat` derived classes. Through an `Animal*` pointer, `makeSound()` calls the derived version because it is `virtual`.

`WrongAnimal` and `WrongCat` show the same hierarchy **without** `virtual`: the base-class function is called instead, which shows why `virtual` is needed.

### ex01 — Brain
`Dog` and `Cat` now own a `Brain` (an array of 100 ideas) allocated with `new` and released in the destructor. Copies are **deep copies**, so each animal has its own `Brain`. The test fills an array of animals, half dogs and half cats, and deletes them through `Animal*` pointers without leaks.

### ex02 — Abstract class
`makeSound()` becomes a **pure virtual function** (`= 0`), so `Animal` can no longer be instantiated directly: only concrete animals like `Dog` and `Cat` can.

## What I learned

- How virtual functions enable runtime polymorphism
- Why a base class with virtual functions needs a virtual destructor
- The difference between a shallow and a deep copy, and how to implement a deep copy safely
- Using pure virtual functions to define abstract classes that act as interfaces

## Build

```bash
cd ex0X && make && ./<program>
```
