# C++ Module 03 — Inheritance

A family of robots, starting from a base `ClapTrap` class and extending it step by step through inheritance.

## Exercises

| Exercise | Program | New class | Topic |
| --- | --- | --- | --- |
| ex00 — Aaaaand... OPEN! | `claptrap` | `ClapTrap` | The base class |
| ex01 — Serena, my love! | `claptrap` | `ScavTrap` | Single inheritance |
| ex02 — Repetitive work | `claptrap` | `FragTrap` | A second derived class |
| ex03 — Now it's weird! | `claptrap` | `DiamondTrap` | Multiple inheritance and the diamond problem |

### ex00 — ClapTrap
A robot with a name, hit points, energy points and attack damage. It can `attack`, `takeDamage` and `beRepaired`. Attacking and repairing cost 1 energy point, and a robot with no hit points or energy points cannot act.

### ex01 — ScavTrap
Inherits from `ClapTrap`, with different starting values, its own `attack` message and a special ability `guardGate()`. Constructors and destructors print messages, which show the order in which they are chained.

### ex02 — FragTrap
Another class derived from `ClapTrap`, with its own values and the special ability `highFivesGuys()`.

### ex03 — DiamondTrap
Inherits from both `ScavTrap` and `FragTrap`. **Virtual inheritance** ensures there is only one `ClapTrap` subobject. `whoAmI()` prints both the `DiamondTrap` name and the inherited `ClapTrap` name.

## What I learned

- Reusing code through inheritance instead of duplicating it
- Using `protected` members so derived classes can access the base class's data
- The order of constructor and destructor calls in a class hierarchy
- The diamond problem and how virtual inheritance solves it

## Build

```bash
cd ex0X && make && ./claptrap
```
