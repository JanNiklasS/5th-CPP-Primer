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