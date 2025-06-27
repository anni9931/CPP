# Data in cpp.

| Data Type       | Description            | Memory (in Bytes) | Range (Approx)                  |
| --------------- | ---------------------- | ----------------- | ------------------------------- |
| `char`          | Character              | 1 byte            | -128 to 127 or 0 to 255         |
| `bool`          | Boolean (true/false)   | 1 byte            | true / false                    |
| `int`           | Integer                | 4 bytes           | -2,147,483,648 to 2,147,483,647 |
| `short int`     | Short Integer          | 2 bytes           | -32,768 to 32,767               |
| `long int`      | Long Integer           | 4 or 8 bytes      | Varies                          |
| `long long int` | Longer Integer         | 8 bytes           | Very large                      |
| `float`         | Floating point number  | 4 bytes           | 3.4e−38 to 3.4e+38              |
| `double`        | Double precision float | 8 bytes           | 1.7e−308 to 1.7e+308            |
| `long double`   | Extra precision float  | 12 or 16 bytes    | System dependent                |
| `wchar_t`       | Wide character         | 2 or 4 bytes      | Unicode characters              |

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Size of char: " << sizeof(char) << " byte\n";
    cout << "Size of bool: " << sizeof(bool) << " byte\n";
    cout << "Size of int: " << sizeof(int) << " bytes\n";
    cout << "Size of short: " << sizeof(short) << " bytes\n";
    cout << "Size of long: " << sizeof(long) << " bytes\n";
    cout << "Size of long long: " << sizeof(long long) << " bytes\n";
    cout << "Size of float: " << sizeof(float) << " bytes\n";
    cout << "Size of double: " << sizeof(double) << " bytes\n";
    cout << "Size of long double: " << sizeof(long double) << " bytes\n";
    return 0;
}
```

## Operators

# ⚙️ Operators in C++

## ✅ What are Operators?

Operators are **symbols** that perform operations on variables and values.

---

## 🔹 1. Arithmetic Operators

Used for basic math operations.

| Operator | Meaning             | Example (`a = 10, b = 3`) | Result |
| -------- | ------------------- | ------------------------- | ------ |
| `+`      | Addition            | `a + b`                   | 13     |
| `-`      | Subtraction         | `a - b`                   | 7      |
| `*`      | Multiplication      | `a * b`                   | 30     |
| `/`      | Division            | `a / b`                   | 3      |
| `%`      | Modulus (Remainder) | `a % b`                   | 1      |

---

## 🔹 2. Relational (Comparison) Operators

Used to compare two values.

| Operator | Meaning               | Example  | Result |
| -------- | --------------------- | -------- | ------ |
| `==`     | Equal to              | `a == b` | false  |
| `!=`     | Not equal to          | `a != b` | true   |
| `>`      | Greater than          | `a > b`  | true   |
| `<`      | Less than             | `a < b`  | false  |
| `>=`     | Greater than or equal | `a >= b` | true   |
| `<=`     | Less than or equal    | `a <= b` | false  |

---

## 🔹 3. Logical Operators

Used for logical conditions (mostly in if statements).

| Operator | Meaning | Example            | Result |
| -------- | ------- | ------------------ | ------ | ------- | --- | ------- | ---- |
| `&&`     | AND     | `(a > 5 && b < 5)` | true   |
| `        |         | `                  | OR     | `(a < 5 |     | b < 5)` | true |
| `!`      | NOT     | `!(a == b)`        | true   |

---

## 🔹 4. Assignment Operators

Used to assign values to variables.

| Operator | Meaning             | Example  | Equivalent To |
| -------- | ------------------- | -------- | ------------- |
| `=`      | Assign              | `a = 5`  |               |
| `+=`     | Add and assign      | `a += 2` | `a = a + 2`   |
| `-=`     | Subtract and assign | `a -= 2` | `a = a - 2`   |
| `*=`     | Multiply and assign | `a *= 2` | `a = a * 2`   |
| `/=`     | Divide and assign   | `a /= 2` | `a = a / 2`   |
| `%=`     | Modulus and assign  | `a %= 2` | `a = a % 2`   |

---

## 🔹 5. Increment / Decrement Operators

Used to increase or decrease value by 1.

| Operator | Meaning        | Example | Result    |
| -------- | -------------- | ------- | --------- |
| `++`     | Increment by 1 | `a++`   | a = a + 1 |
| `--`     | Decrement by 1 | `a--`   | a = a - 1 |

---

## 🔹 6. Bitwise Operators

Used to perform operations on bits.

| Operator | Meaning     | Example  |
| -------- | ----------- | -------- | --- | --- |
| `&`      | AND         | `a & b`  |
| `        | `           | OR       | `a  | b`  |
| `^`      | XOR         | `a ^ b`  |
| `~`      | NOT         | `~a`     |
| `<<`     | Left Shift  | `a << 2` |
| `>>`     | Right Shift | `a >> 2` |

---

## 🔹 7. Ternary Operator (?:)

Shortcut for if-else.

```cpp
condition ? value_if_true : value_if_false;

```

## ✅ Summary

: C++ Operators help in performing:

- Math (+, -)

- Comparison (>, <)

- Logic (&&, ||)

- Assignment (=, +=)

- Bit-level operations (&, |)

- Conditional checks (?:)
