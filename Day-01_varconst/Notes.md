
# 📘 Introduction to C++

## 🧠 What is C++?
C++ is a **general-purpose**, **object-oriented** programming language that was developed as an extension of the C language by **Bjarne Stroustrup** in **1979**.

It combines the **power of C** with **features of object-oriented programming** (OOP) like classes, inheritance, and polymorphism.

---

## ⚙️ Features of C++
- **Compiled** and **statically typed** language
- **Object-Oriented** (supports classes and objects)
- **Platform independent** (via recompilation)
- **Rich Standard Library**
- **Supports procedural and OOP styles**
- **Supports low-level memory manipulation**

---

## 🧾 Basic Structure of a C++ Program

```cpp
#include <iostream>      // Header file for input-output
using namespace std;     // Standard namespace

int main() {
    cout << "Hello, World!";  // Output statement
    return 0;                 // Exit the program
}
```

# 🔢 Variables in C++

## 🧠 What is a Variable?

A **variable** is a named storage location in memory used to store data.  
It allows you to reuse and manipulate data in your program.

📦 **Think of a variable as a container** that holds some value, like a number or a letter.

---

## 📌 Syntax of Variable Declaration

```cpp
data_type variable_name = value;
```

- `data_type`: Type of data (like int, float, char)

- `variable_name`: Any valid name you choose

- `value`: The data you want to store (optional during declaration)


# 🧾 Data Types in C++

## ✅ What is a Data Type?

A **data type** defines the type of value a variable can store.

📦 It tells the compiler **what kind of data** (number, character, decimal, etc.) is being stored.

---

## 🧠 Types of Data Types in C++

### 1. 🎯 **Basic / Primitive Data Types**

| Data Type | Description                 | Example        |
|-----------|-----------------------------|----------------|
| `int`     | Integer (whole number)      | `int a = 10;`  |
| `float`   | Decimal number (less precision) | `float x = 3.14;` |
| `double`  | Decimal number (more precision) | `double y = 3.14159;` |
| `char`    | Single character             | `char c = 'A';` |
| `bool`    | Boolean (true/false)         | `bool isOn = true;` |

---

### 2. 🧵 **Derived Data Types**

| Data Type | Description                  | Example            |
|-----------|------------------------------|--------------------|
| `array`   | Collection of similar data types        | `int arr[5];`      |
| `pointer` | Stores address of variable    | `int* ptr = &a;`   |
| `function`| Block of code with a name     | `int sum(int x, int y)` |

---

### 3. 🧱 **User-defined Data Types**

| Data Type | Description                 | Example               |
|-----------|-----------------------------|-----------------------|
| `struct`  | Group of variables           | `struct Student {}`   |
| `union`   | Memory-efficient data group  | `union Data {}`       |
| `class`   | Blueprint for objects (OOP)  | `class Car {}`        |
| `enum`    | Set of named integer constants | `enum Color {RED, GREEN};` |

---

### 4. 📦 **Void Type**

```cpp
void show() {
    cout << "Hello";
}
// void means no return value.

// Used in functions when nothing is returned.
```

# 🧠 Memory Size of Data Types in C++

> 📌 Note: These are typical sizes on a 64-bit system.  
> They may vary depending on the compiler and system architecture.

| Data Type   | Size (in Bytes) | Example Value     |
|-------------|------------------|--------------------|
| `char`      | 1 byte           | `'A'`, `'z'`       |
| `bool`      | 1 byte           | `true`, `false`    |
| `int`       | 4 bytes          | `10`, `-5`         |
| `float`     | 4 bytes          | `3.14`, `2.5f`     |
| `double`    | 8 bytes          | `3.14159`          |
| `long`      | 8 bytes          | `100000L`          |
| `long long` | 8 bytes          | `999999999LL`      |
| `short`     | 2 bytes          | `32767`            |
| `wchar_t`   | 2 or 4 bytes     | `L'A'` (wide char) |
| `void`      | 0 bytes          | (no data)          |

---

## 🔎 Check Size Using `sizeof()`

You can check memory size in your system using:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    return 0;
}
