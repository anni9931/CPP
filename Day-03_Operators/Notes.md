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
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;

    cout << "a & b = " << (a & b) << endl;  // 1
    cout << "a | b = " << (a | b) << endl;  // 7
    cout << "a ^ b = " << (a ^ b) << endl;  // 6
    cout << "~a = " << (~a) << endl;        // -6
    cout << "a << 1 = " << (a << 1) << endl; // 10
    cout << "a >> 1 = " << (a >> 1) << endl; // 2

    return 0;
}
```

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
