# Modern C++ and Advanced Topics

## 1. What Is Modern C++?

Modern C++ usually means C++11 and later.

Important modern features:

- `auto`
- Range-based for loop
- `nullptr`
- `enum class`
- Lambdas
- Move semantics
- Smart pointers
- `constexpr`
- `using` aliases
- `std::optional`
- `std::variant`
- `std::string_view`
- Structured bindings
- Concepts
- Ranges
- Coroutines overview

## 2. auto

`auto` lets compiler infer type.

```cpp
auto x = 10;       // int
auto y = 3.14;     // double
auto name = "cpp"; // const char*
```

Use `auto` when type is obvious or long.

```cpp
auto it = values.begin();
```

Do not use `auto` if it makes code confusing.

## 3. Range-Based For Loop

```cpp
std::vector<int> nums = {1, 2, 3};

for (int x : nums) {
    std::cout << x << "\n";
}
```

Use reference to modify:

```cpp
for (int& x : nums) {
    x *= 2;
}
```

Use const reference for large objects:

```cpp
for (const auto& name : names) {
    std::cout << name << "\n";
}
```

## 4. nullptr

Use `nullptr` instead of `NULL` or `0`.

```cpp
int* p = nullptr;
```

`nullptr` is type-safe.

## 5. enum class

Old enum can pollute names.

Modern enum:

```cpp
enum class Status {
    Pending,
    Success,
    Failed
};

Status s = Status::Pending;
```

## 6. using Alias

```cpp
using StringList = std::vector<std::string>;
```

Better than old `typedef` for templates.

## 7. constexpr

`constexpr` means value/function can be evaluated at compile time.

```cpp
constexpr int square(int x) {
    return x * x;
}

constexpr int value = square(5);
```

Use for constants and compile-time computation.

## 8. Lambdas

```cpp
auto greet = []() {
    std::cout << "Hello\n";
};

greet();
```

Capture variable:

```cpp
int factor = 2;
auto multiply = [factor](int x) {
    return x * factor;
};
```

Capture by reference:

```cpp
int count = 0;
auto inc = [&count]() {
    count++;
};
```

## 9. Move Semantics

Copying large objects can be expensive.

Move semantics transfers resources.

```cpp
std::string a = "large text";
std::string b = std::move(a);
```

Use move when you no longer need the original object.

## 10. Perfect Forwarding

Advanced template technique to pass arguments while preserving value category.

```cpp
template <typename T>
void wrapper(T&& value) {
    process(std::forward<T>(value));
}
```

Used heavily in library code.

## 11. std::optional

Represents value that may or may not exist.

```cpp
#include <optional>

std::optional<int> findValue(bool ok) {
    if (ok) return 42;
    return std::nullopt;
}
```

Use:

```cpp
auto result = findValue(true);
if (result.has_value()) {
    std::cout << *result;
}
```

## 12. std::variant

Stores one of several possible types.

```cpp
#include <variant>

std::variant<int, std::string> value;
value = 10;
value = "hello";
```

Useful for type-safe alternatives.

## 13. std::any

Stores any type.

```cpp
#include <any>

std::any data = 10;
data = std::string("hello");
```

Use rarely. Prefer stronger types when possible.

## 14. std::string_view

Non-owning view of string data.

```cpp
#include <string_view>

void print(std::string_view text) {
    std::cout << text;
}
```

Careful: `string_view` does not own data. Do not return view to destroyed string.

## 15. Structured Bindings

```cpp
std::pair<int, std::string> p{1, "one"};
auto [id, name] = p;
```

Also useful with maps:

```cpp
for (const auto& [key, value] : scores) {
    std::cout << key << " " << value << "\n";
}
```

## 16. Exceptions

Exceptions handle errors.

```cpp
try {
    throw std::runtime_error("Something failed");
} catch (const std::exception& e) {
    std::cout << e.what();
}
```

Use exceptions for exceptional situations, not normal control flow.

## 17. Exception Safety

Levels:

- No guarantee
- Basic guarantee: object remains valid
- Strong guarantee: operation either succeeds or state unchanged
- No-throw guarantee: operation never throws

RAII helps exception safety because destructors clean up automatically.

## 18. Operator Overloading

You can define behavior for operators.

```cpp
class Point {
public:
    int x;
    int y;

    Point operator+(const Point& other) const {
        return {x + other.x, y + other.y};
    }
};
```

Use only when operator meaning is natural.

## 19. const Correctness

Use `const` to express "does not modify".

```cpp
class User {
public:
    std::string getName() const {
        return name;
    }

private:
    std::string name;
};
```

Const correctness makes code safer and clearer.

## 20. Type Deduction Pitfalls

`auto` can surprise with references and const.

```cpp
const int x = 10;
auto y = x; // y is int, const removed
```

Preserve reference:

```cpp
auto& ref = x;
```

## 21. Concurrency

C++ supports threads.

```cpp
#include <thread>

void work() {
    std::cout << "Working\n";
}

int main() {
    std::thread t(work);
    t.join();
}
```

`join` waits for thread to finish.

## 22. Mutex

Mutex protects shared data.

```cpp
#include <mutex>

std::mutex m;
int counter = 0;

void increment() {
    std::lock_guard<std::mutex> lock(m);
    counter++;
}
```

`lock_guard` uses RAII to unlock automatically.

## 23. atomic

Atomic operations are safe for simple shared variables.

```cpp
#include <atomic>

std::atomic<int> counter{0};
counter++;
```

Use atomics carefully. Concurrency is advanced.

## 24. async and future

```cpp
#include <future>

int compute() {
    return 42;
}

int main() {
    auto fut = std::async(std::launch::async, compute);
    std::cout << fut.get();
}
```

## 25. Ranges

Ranges make algorithms more expressive.

```cpp
#include <ranges>
#include <vector>

std::vector<int> nums = {1, 2, 3, 4, 5};

for (int x : nums | std::views::filter([](int n) { return n % 2 == 0; })) {
    std::cout << x << "\n";
}
```

## 26. Concepts

Concepts constrain templates.

```cpp
template <typename T>
concept Number = std::integral<T> || std::floating_point<T>;

template <Number T>
T add(T a, T b) {
    return a + b;
}
```

## 27. Coroutines Overview

Coroutines allow functions to suspend and resume.

Used in:

- Async programming
- Generators
- Event loops

Coroutines are advanced. You do not need to master them first, but know the concept.

## 28. Modules Overview

Modules are a modern alternative to some header/include problems.

Traditional:

```cpp
#include "math_utils.h"
```

Module idea:

```cpp
import math_utils;
```

Compiler support varies, so many projects still use headers.

## 29. Advanced Interview Summary

```text
Modern C++ focuses on safer and more expressive code through RAII, smart pointers, move semantics, lambdas, constexpr, optional, variant, string_view, ranges, and concepts. Advanced C++ also includes exception safety, concurrency, atomics, templates, and careful resource management.
```
