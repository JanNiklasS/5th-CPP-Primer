# Chapter 2: Variables And Basic Types

## Exercise 2.1
>What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between a float and a double?

**`Int`, `long`, `long`, `long` and `short`:**
- Arithmetic types, more specifically integral types useful for different numbers depending how large they are
- Size (depending on compiler, but C++ guarantees that its at least the stated values): `int` (integer) is 16 bits, `short` (short integer) is 16 bits, `long` (long integer) is 32 bits and `long long` (longer integer) is 64 bits
- An `int` is always at least as large as a `short`, a `long` is always as large as an `int` and a `long long` is always as large as a `long`

**Signed and unsigned type:**
- A signed type can be either negative or positive, while an unsigned type can only be positive
- A signed type only helds smaller values than its unsigned version, since it now also helds the same amount of negative values (range of negative and positive numbers should be evenly distributed)
- When using a signed and an unsigned type in a artithmetic operation, the signed type will be converted to a unsigned type

**`Float` and `double`**
- Floating-point types, while `float` has little precision. Therfore it's recommended to use `double` right away. Furthermore is the additional space necessary for double-precision negligible and on some machines double-precision is even faster than single-precision
- Size (depending on compiler, but C++ guarantees that its at least the stated values): `float` (single-precision floating-point) helds 6 significant digits (32 bits) and `double` (double-precision floating-point) helds 10 significant digits (64 bits)

## Exercise 2.2
>To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

**Rate:** `double`, since it's a floating-type and more precise than `float`

**Prinicpal:** `double`, since it's a floating-type and more precise than `float`

**Payment:** `double`, since it's a floating-type and more precise than `float`

## Exercise 2.3
>What output will the following code produce?
>```
>unsigned u = 10, u2 = 42;
>std::cout << u2 - u << std::endl;
>std::cout << u - u2 << std::endl;
>
>int i = 10, i2 = 42;
>std::cout << i2 - i << std::endl;
>std::cout << i - i2 << std::endl;
>	
>std::cout << i - u << std::endl;
>std::cout << u - i << std::endl;
>```

**Output:** 
```
32
4294967264
32
-32
0
0
```

## Exercise 2.4
>Write a program to check whether your predictions were correct. If not, study this section until you understand what the problem is.

[Here](prog2_4.cpp) you go!

## Exercise 2.5
>Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples:
>```
>(a) 'a', L'a', "a", L"a"
>(b) 10, 10u, 10L, 10uL, 012, 0xC
>(c) 3.14, 3.14f, 3.14L
>(d) 10, 10u, 10., 10e-2
>```
(a) `char` (character literal), `wchar_t` (wide character literal), `string` (character string literal), `string` (wide characters string literal)

(b) `int` (signed decimal integer literal), `int` (unsigned decimal integer literal), `long` (signed decimal long integer literal), `long` (unsigned decimal long integer literal), `int` (unsigned or signed octal integer literal), `int` (unsigned or signed hex integer literal)

(c) `double` (signed decimal double-precision floating-point literal), `float` (signed decimal single-precision floating-point literal), `long double` (signed decimal extended-preciscion floating-point literal)

(d) `int` (signed decimal integer literal), `int` (unsigned decimal integer literal), `double` (signed decimal double-precision floating-point literal), `double` (signed decimal double-precision floating-point literal)

## Exercise 2.6
>What, if any, are the differences between the following definitions:
>```
>int month = 9, day = 7;
>int month = 09, day = 07;
>```

***First line:*** First and second literal is a decimal signed integer literal.

***Second line:*** First literal is invalid, since it's octal (because of the 0) and the larger than 8. The second literal is an octal unsigned integer literal.

## Exercise 2.7
> What values do these literals represent? What type does each have?
>```
>(a) "Who goes with F\145rgus?\012"
>(b) 3.14e1L
>(c) 1024f
>(d) 3.14L
>```

(a) Who goes with Fergus? (character string literal, /145 = e , /012 = newline)

(b) 31.4 ('long double', floating-point literal)

(c) Error: invalid literal suffix 'f'; literal operator or literal operator template 'operator ""f' not found

(d) 3.14 ('long double', floating-point literal)

## Exercise 2.8
>Using escape sequences, write a program to print 2M followed by a newline. Modify the program to print 2, then a tab, then an M, followed by a newline.

[Here](prog2_8.cpp) you go!

## Exercise 2.9
> Explain the following definitions. For those that are illegal, explain what’s wrong and how to correct it.
>```
>(a) std::cin >> int input_value;
>(b) int i = { 3.14 };
>(c) double salary = wage = 9999.99;
>(d) int i = 3.14;
>```

(a) Error: 'input_value': undeclared identifier

```
int input_value = 0;
std::cin >> input_value;
```

(b) Error: conversion from 'double' to 'int' requires a narrowing conversion

Possible to use `int` , but value will be truncated since literal is floating-point and not integer

```
int i = 3.14;
```
...or...
```
int i = (3.14);
```
...better to use `double`...
```
double i = {3.14};
```

(c) Error: 'wage': undeclared identifier

```
double salary = 9999.99, wage = salary;
```
...or...
```
double wage;
double salary = wage = 9999.99;
```

(d) Legal, but value will be truncated

## Exercise 2.10
>What are the initial values, if any, of each of the following variables?
>```
>std::string global_str;
>int global_int;
>int main()
>{
>	int local_int;
>	std::string local_str;
>}
>```