# C++ Modules — 42 / 1337

A personal reference for the C++ modules from **CPP00 to CPP09**.

The goal is not only to finish the exercises, but to understand the C++ concepts that each module introduces.

---

## Table of Contents

- [CPP00 — Introduction to C++](#cpp00--introduction-to-c)
- [CPP01 — Memory, References and Pointers to Members](#cpp01--memory-references-and-pointers-to-members)
- [CPP02 — Ad-hoc Polymorphism, Operator Overloading and Orthodox Canonical Form](#cpp02--ad-hoc-polymorphism-operator-overloading-and-orthodox-canonical-form)
- [CPP03 — Inheritance](#cpp03--inheritance)
- [CPP04 — Subtype Polymorphism, Abstract Classes and Interfaces](#cpp04--subtype-polymorphism-abstract-classes-and-interfaces)
- [CPP05 — Repetition and Exceptions](#cpp05--repetition-and-exceptions)
- [CPP06 — C++ Casts](#cpp06--c-casts)
- [CPP07 — Templates](#cpp07--templates)
- [CPP08 — Templated Containers, Iterators and Algorithms](#cpp08--templated-containers-iterators-and-algorithms)
- [CPP09 — STL](#cpp09--stl)
- [Overall Roadmap](#overall-roadmap)

---

# CPP00 — Introduction to C++

## Main concepts

- C++ syntax and basic structure
- Classes and objects
- Member functions
- Access specifiers:
  - `public`
  - `private`
  - `protected`
- Constructors
- `this` pointer
- `static` members
- `const` member functions
- `std::string`
- Input/output with:
  - `std::cout`
  - `std::cin`
  - `std::cerr`

## Exercises

### ex00 — Megaphone

Learn:

- Program arguments (`argc`, `argv`)
- `std::string`
- Basic output
- Character/string manipulation

### ex01 — My Awesome PhoneBook

Learn:

- Classes
- Private/public members
- Constructors
- Arrays of objects
- User input
- Simple command-line interfaces

Typical structure:

```text
PhoneBook
    └── Contact
```

### ex02 — The Job Of Your Dreams

Learn:

- Class implementation
- Member functions
- Understanding an existing C++ codebase
- Formatting output

## What you should understand after CPP00

You should be comfortable writing a basic C++ program and creating simple classes.

---

# CPP01 — Memory, References and Pointers to Members

## Main concepts

- Stack vs heap
- `new`
- `delete`
- References
- Pointers
- Pointers to member functions
- File streams
- `std::string`
- Passing by reference

## Exercises

### ex00 — BraiiiiiiinnnzzzZ

Learn:

- Stack allocation
- Heap allocation
- Constructors/destructors
- `new` and `delete`

### ex01 — Moar brainz!

Learn:

- Dynamic arrays
- `new[]`
- `delete[]`

### ex02 — HI THIS IS BRAIN

Learn the difference between:

```cpp
std::string brain = "HI THIS IS BRAIN";

std::string *stringPTR = &brain;

std::string &stringREF = brain;
```

Important idea:

```text
variable
   |
   +---- pointer  ---> address
   |
   +---- reference -> another name for the variable
```

### ex03 — Unnecessary violence

Learn:

- References
- Pointers
- When to use `*` vs `&`

### ex04 — Sed is for losers

Learn:

- `std::ifstream`
- `std::ofstream`
- File manipulation
- String replacement

### ex05 — Harl 2.0

Learn:

- Pointers to member functions
- Dispatching functions based on a string

Example concept:

```cpp
void (Harl::*function)(void);
```

### ex06 — Harl filter

Learn:

- `switch`-like dispatching
- Filtering log levels
- `switch` with enum values

## What you should understand after CPP01

You should clearly understand:

- Pointer
- Reference
- Stack
- Heap
- `new` / `delete`
- File streams
- Pointer to member function

---

# CPP02 — Ad-hoc Polymorphism, Operator Overloading and Orthodox Canonical Form

## Main concepts

- Orthodox Canonical Form
- Operator overloading
- Fixed-point numbers
- Copy constructor
- Copy assignment operator
- Destructor
- `const`
- Comparison operators
- Arithmetic operators
- Increment/decrement operators

## Orthodox Canonical Form

A classical C++ class contains:

```cpp
ClassName();
ClassName(const ClassName& other);
ClassName& operator=(const ClassName& other);
~ClassName();
```

The four important special functions are:

1. Default constructor
2. Copy constructor
3. Copy assignment operator
4. Destructor

## Exercises

### ex00 — My First Class in Orthodox Canonical Form

Learn:

- Canonical form
- Private attributes
- Getters/setters
- Constructors/destructor

### ex01 — Towards a more useful fixed-point number class

Learn:

- Fixed-point representation
- Conversion between integer/float and fixed-point
- Copying objects

### ex02 — Now we're talking

Learn:

- Arithmetic operators
- Comparison operators
- Increment/decrement
- `min()` / `max()`

Examples:

```cpp
a + b
a - b
a * b
a / b

a < b
a > b
a == b

++a
a++
```

### ex03 — BSP

Learn:

- Classes
- Fixed-point numbers
- Geometry
- Point-in-triangle algorithm

## What you should understand after CPP02

You should understand how C++ objects behave when they are:

- Created
- Copied
- Assigned
- Destroyed

And how operators can be overloaded.

---

# CPP03 — Inheritance

## Main concepts

- Inheritance
- Base classes
- Derived classes
- `protected`
- Constructor chaining
- Destructor chaining
- Multiple levels of inheritance

Basic example:

```text
ClapTrap
   |
   +---- ScavTrap
   |
   +---- FragTrap
```

## Exercises

### ex00 — Aaaaand... OPEN!

Learn:

- Basic inheritance
- Derived classes
- Reusing base-class functionality

### ex01 — Serena, my love!

Learn:

- More complex inheritance
- Multiple derived classes
- Different behaviors

### ex02 — Repetitive work

Learn:

- Diamond inheritance
- Multiple inheritance
- Virtual inheritance

Example:

```text
        ClapTrap
        /      \
   ScavTrap   FragTrap
        \      /
        DiamondTrap
```

## What you should understand after CPP03

You should understand:

```text
Base class
    ↓
Derived class
```

and how constructors/destructors work through an inheritance hierarchy.

---

# CPP04 — Subtype Polymorphism, Abstract Classes and Interfaces

## Main concepts

- Polymorphism
- Virtual functions
- Pure virtual functions
- Abstract classes
- Interfaces
- Virtual destructors
- Deep copy
- Dynamic dispatch

## Important concept

Without `virtual`:

```cpp
Animal *animal = new Dog();
animal->makeSound();
```

The selected function may depend on the pointer type.

With:

```cpp
virtual void makeSound();
```

C++ performs dynamic dispatch and calls the derived implementation.

## Exercises

### ex00 — Polymorphism

Learn:

- Virtual functions
- Base pointers
- Derived objects

### ex01 — I don't want to set the world on fire

Learn:

- Deep copying
- Dynamic memory
- Copy constructors
- Assignment operators
- Virtual destructors

### ex02 — Abstract class

Learn:

- Pure virtual functions
- Abstract base classes

Example:

```cpp
class Animal
{
public:
    virtual void makeSound() const = 0;
};
```

### ex03 — Interface & recap

Learn:

- Interfaces
- Abstract classes
- Composition
- Materia system

Typical design:

```text
AMateria
   ↑
   ├── Ice
   └── Cure

ICharacter
   ↑
   └── Character

IMateriaSource
   ↑
   └── MateriaSource
```

## What you should understand after CPP04

You should understand the difference between:

- Inheritance
- Polymorphism
- Virtual functions
- Abstract classes
- Interfaces
- Deep copy

---

# CPP05 — Repetition and Exceptions

## Main concepts

- Exceptions
- `try`
- `catch`
- `throw`
- Custom exception classes
- Nested classes
- `std::exception`
- Form validation

Basic pattern:

```cpp
try
{
    // code that may fail
}
catch (const std::exception& e)
{
    std::cerr << e.what() << std::endl;
}
```

## Exercises

### ex00 — Mommy, when I grow up, I want to be a bureaucrat!

Learn:

- Classes
- Exceptions
- Validation

### ex01 — Form up, maggots!

Learn:

- Forms
- Bureaucrats
- Permission levels
- Exceptions

### ex02 — No, you need form 28B, not 28C...

Learn:

- Abstract classes
- Inheritance
- Polymorphism
- Exception handling

### ex03 — At least this beats coffee-making

Learn:

- Factory-like behavior
- Multiple concrete forms
- Abstract base classes
- Dynamic object creation

## What you should understand after CPP05

You should know how to handle errors without simply returning error codes everywhere.

The main idea:

```text
error happens
     ↓
throw
     ↓
catch
     ↓
handle error
```

---

# CPP06 — C++ Casts

## Main concepts

C++ provides four important casts:

### 1. `static_cast`

Used for compatible compile-time conversions.

```cpp
double value = 42.5;
int number = static_cast<int>(value);
```

### 2. `dynamic_cast`

Used mainly with polymorphic classes.

```cpp
Derived *d = dynamic_cast<Derived *>(base);
```

Useful when working with inheritance.

### 3. `const_cast`

Used to add/remove `const`.

```cpp
const int value = 42;
int *ptr = const_cast<int *>(&value);
```

Should be used carefully.

### 4. `reinterpret_cast`

Low-level reinterpretation of data.

```cpp
uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
```

Use only when you really understand the representation.

## Exercises

### ex00 — Conversion of scalar types

Learn:

- `char`
- `int`
- `float`
- `double`
- String parsing
- Special floating-point values

### ex01 — Serialization

Learn:

- Pointer → integer
- Integer → pointer
- `reinterpret_cast`

### ex02 — Identify real type

Learn:

- `dynamic_cast`
- Runtime type identification
- Polymorphism

## What you should understand after CPP06

You should know why C++ has different casts and when each one is appropriate.

---

# CPP07 — Templates

## Main concepts

- Function templates
- Class templates
- Generic programming
- Template instantiation

## Function template

Example:

```cpp
template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}
```

The same function can work with:

```cpp
int
double
std::string
```

## Exercises

### ex00 — Start with a few functions

Learn:

- `swap`
- `min`
- `max`
- Function templates

### ex01 — Iter

Learn:

- Templates
- Arrays
- Function pointers
- Applying a function to every element

### ex02 — Array

Learn:

- Class templates
- Dynamic arrays
- Memory management
- Copying

Example:

```cpp
Array<int> numbers(10);
Array<std::string> names(5);
```

## What you should understand after CPP07

You should understand why templates allow C++ to write reusable generic code.

---

# CPP08 — Templated Containers, Iterators and Algorithms

## Main concepts

- STL containers
- Iterators
- Algorithms
- Generic programming
- Exceptions
- `std::vector`
- `std::list`
- `std::stack`
- `std::find`
- Iterator ranges

## Exercises

### ex00 — Easy find

Learn:

- Templates
- Iterators
- `std::find`

Example:

```cpp
std::find(container.begin(), container.end(), value);
```

### ex01 — Span

Learn:

- Containers
- Iterators
- Algorithms
- Finding shortest/longest spans

Typical algorithms:

```cpp
std::sort()
std::distance()
```

### ex02 — MutantStack

Learn:

- Container adapters
- `std::stack`
- Iterators
- Inheritance

Important idea:

```text
std::stack
    ↓
MutantStack
    ↓
add iterator support
```

## What you should understand after CPP08

You should be comfortable with:

```text
container
    ↓
begin() / end()
    ↓
iterator
    ↓
algorithm
```

---

# CPP09 — STL

CPP09 is where the STL becomes much more practical.

## Main concepts

- STL containers
- `std::map`
- `std::stack`
- `std::vector`
- `std::deque`
- Parsing
- Sorting
- Searching
- Algorithms
- Complexity
- Performance measurement

---

## ex00 — BitcoinExchange

### Main concepts

- `std::map`
- File parsing
- Dates
- Floating-point values
- `lower_bound`
- Error handling

Typical structure:

```cpp
std::map<std::string, double> database;
```

Example:

```text
2011-01-03 -> 0.9
2011-01-04 -> 0.8
2011-01-05 -> 0.7
```

Searching with:

```cpp
database.lower_bound(date);
```

allows finding the appropriate database entry for a date.

### Important concepts to understand

- Why `std::map`?
- What does `lower_bound()` return?
- How to find the previous available date?
- How to validate a date?
- How to validate numeric input?

---

# ex01 — RPN

## Reverse Polish Notation

Example:

```text
8 9 * 9 - 9 - 9 - 4 - 1 +
```

The expression is evaluated using a stack.

Example:

```text
2 3 +
```

Process:

```text
push 2
push 3

+
↓
3 + 2
↓
5
```

Typical container:

```cpp
std::stack<int>
```

## Important concepts

- Stack
- Parsing tokens
- Operators
- Arithmetic
- Error handling
- Postfix notation

---

# ex02 — PmergeMe

## Main concepts

- Ford-Johnson / Merge-Insertion sort
- Pairing
- Recursion
- Binary search
- Jacobsthal numbers
- `std::vector`
- `std::deque`
- Performance measurement

The program must sort a sequence using both:

```cpp
std::vector
std::deque
```

and compare their execution times.

---

## Step 1 — Pair the numbers

Example:

```text
9 3 7 2 8 1
```

Create pairs:

```text
(9,3)
(7,2)
(8,1)
```

Normalize each pair:

```text
(3,9)
(2,7)
(1,8)
```

Where:

```cpp
struct Pair
{
    int _small;
    int _big;
};
```

---

## Step 2 — Sort the big elements

The `_big` values become the main chain.

Example:

```text
(3,9)
(2,7)
(1,8)
```

Big values:

```text
9 7 8
```

Sort recursively:

```text
7 8 9
```

---

## Step 3 — Keep the small values as pending elements

The small values are:

```text
3 2 1
```

They are inserted into the main chain using binary search.

---

## Step 4 — Jacobsthal insertion order

Jacobsthal numbers help determine the order in which pending elements are inserted.

The beginning of the sequence is:

```text
0
1
1
3
5
11
21
43
85
...
```

The practical insertion positions are derived from these values.

The goal is to keep the binary searches inside efficient ranges.

---

## Step 5 — Binary search

For each pending value:

```cpp
std::lower_bound(...)
```

or an equivalent manual binary search can be used to find the insertion position.

Example:

```text
main chain:

2 7 8 9

insert 5

binary search
    ↓
2 7 | 8 9
      ↓
2 5 7 8 9
```

---

## Step 6 — Handle an odd element

If the input contains an odd number of elements, one element has no pair.

Example:

```text
9 3 7 2 8
```

Pairs:

```text
(3,9)
(2,7)
```

Odd element:

```text
8
```

The odd element is kept separately and inserted into the final sorted sequence.

---

## Step 7 — Compare vector and deque

The same algorithm must be performed using:

```cpp
std::vector<int>
```

and:

```cpp
std::deque<int>
```

The program should display the processing time.

Typical output:

```text
Before: 9 3 7 2 8
After:  2 3 7 8 9

Time to process a range of 5 elements with std::vector : ...
Time to process a range of 5 elements with std::deque  : ...
```

## Important CPP09 concepts

Before the defense, make sure you understand:

- `std::map`
- `std::stack`
- `std::vector`
- `std::deque`
- Iterators
- `lower_bound`
- Binary search
- Pairing
- Recursion
- Jacobsthal numbers
- Algorithmic complexity
- Execution-time measurement

---

# Overall Roadmap

The modules can be viewed as a progression:

```text
CPP00
  │
  ├── Classes
  └── Basic C++
       │
CPP01
  │
  ├── Pointers
  ├── References
  └── Memory
       │
CPP02
  │
  ├── Operators
  ├── Copying
  └── Canonical Form
       │
CPP03
  │
  └── Inheritance
       │
CPP04
  │
  ├── Virtual functions
  ├── Polymorphism
  └── Abstract classes
       │
CPP05
  │
  └── Exceptions
       │
CPP06
  │
  └── Casts
       │
CPP07
  │
  └── Templates
       │
CPP08
  │
  ├── Containers
  ├── Iterators
  └── Algorithms
       │
CPP09
  │
  ├── STL
  ├── Parsing
  ├── Algorithms
  └── Complexity
```

---

# Quick Reference

| Module | Main Topic |
|--------|------------|
| CPP00 | Classes and basic C++ |
| CPP01 | Memory, pointers, references |
| CPP02 | Operators and canonical form |
| CPP03 | Inheritance |
| CPP04 | Polymorphism and abstract classes |
| CPP05 | Exceptions |
| CPP06 | Casts |
| CPP07 | Templates |
| CPP08 | Containers, iterators, algorithms |
| CPP09 | STL and algorithms |

---

# Recommended Defense Checklist

Before considering the modules finished, be able to explain:

## C++ Basics

- What is a class?
- What is an object?
- `public` vs `private` vs `protected`
- Constructor vs destructor
- `const`
- `static`

## Memory

- Stack vs heap
- Pointer vs reference
- `new` vs `delete`
- `new[]` vs `delete[]`
- Shallow copy vs deep copy

## OOP

- Inheritance
- Polymorphism
- Virtual functions
- Pure virtual functions
- Abstract classes
- Virtual destructors

## Error Handling

- `try`
- `catch`
- `throw`
- `std::exception`

## Casts

- `static_cast`
- `dynamic_cast`
- `const_cast`
- `reinterpret_cast`

## Templates

- Function templates
- Class templates
- Template instantiation

## STL

- `vector`
- `deque`
- `list`
- `stack`
- `map`
- Iterators
- Algorithms
- `lower_bound`
- `sort`
- `find`

## Algorithms

- Binary search
- Recursion
- Sorting
- Complexity
- Ford-Johnson / Merge-Insertion
- Jacobsthal sequence

---

# Useful Principle

Do not memorize the code.

For every exercise, try to understand:

```text
What problem am I solving?
        ↓
Which C++ concept solves it?
        ↓
Why this data structure?
        ↓
Why this algorithm?
        ↓
What is the complexity?
        ↓
What happens in memory?
```

That is the level of understanding that makes the **42 C++ modules** useful beyond simply passing the exercises.
