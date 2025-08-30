# Laboratory_5

Tasks:

->Character codes

->Indexing out of bounds

->Least

->Shifting an array

-> Highway


# Memo: Character Codes and Arrays in C

## 1. Character Codes in C

- In C, **characters** are represented internally by **integer codes** (usually ASCII).
- The type `char` is actually an **integer type** (typically 1 byte = 8 bits).
- Example:
  ```c
  char c = 'A';   // character literal
  printf("%c", c); // prints the character A
  printf("%d", c); // prints the ASCII code 65
  ```
  check Taks 1!

- You can perform arithmetic with characters:
  ```c
  char c = 'A';
  char d = c + 1; // 'B'
  printf("%c", d);
  ```

- Useful functions in `<ctype.h>`:
  - `isalpha(c)` – checks if `c` is a letter
  - `isdigit(c)` – checks if `c` is a digit
  - `toupper(c)` – converts to uppercase
  - `tolower(c)` – converts to lowercase <-- it has been used last week!

---

## 2. Arrays in C

- An **array** is a collection of elements of the **same type**, stored in consecutive memory locations.
- Syntax:
  ```c
  type name[size];
  ```

### Example: Integer array
```c
int numbers[5];

// Assign values
numbers[0] = 10;
numbers[1] = 20;

// Access values
printf("%d", numbers[0]); // prints 10
```

### Array Initialization
```c
int nums[5] = {1, 2, 3, 4, 5};
char letters[4] = {'A', 'B', 'C', 'D'};
```

- If fewer values are given, the rest are set to 0:
  ```c
  int nums[5] = {1, 2}; // {1, 2, 0, 0, 0}
  ```

---




