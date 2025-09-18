# 🚀 custom_std

Implementation of STL-like containers and smart pointers in C++.

## ✨ Features
- 📂 `Array<T, N>` — static array  
- 📂 `Vector<T>` — dynamic array  
- 📂 `List<T>` — doubly linked list  
- 📂 `Forward_list<T>` — singly linked list  
- 📂 `Deque<T>` — double-ended queue  
- 🔤 `String` — custom string class (`push_back`, `pop_back`, `operator+`, `stoi`, `to_string`)  
- 🧠 `Auto_ptr<T>` — analogue of deprecated `std::auto_ptr`  
- 🧠 `Unique_ptr<T>` — exclusive ownership  
- 🧠 `Shared_ptr<T>` — reference-counted shared ownership  
- 🔑 `Unordered_map<Key, Value>` — hash map (key-value storage)  
- 🗂 `Unordered_set<Value>` — hash set  

## 🔧 Example
```cpp
#include "include/Array.hpp"
#include "include/Vector.hpp"
#include "include/List.hpp"
#include "include/Forward_list.hpp"
#include "include/Deque.hpp"
#include "include/String.hpp"
#include "include/Memory.hpp"
#include "include/Unordered_map.hpp"
#include "include/Unordered_set.hpp"

int main()
{
    custom_std::Array<int, 4> arr = { 5, 3, 4, 9 };
    custom_std::Vector<int> vec = { 5, 3, 4, 9 };
    custom_std::List<int> list = { 5, 3, 4, 9 };
    custom_std::Forward_list<int> fwd = { 5, 3, 4, 9 };
    custom_std::Deque<int> deq = { 5, 3, 4, 9 };
    custom_std::String str = "Hello, World!";
    custom_std::Auto_ptr<int> ap = new int(10);
    custom_std::Unique_ptr<int> up = new int(10);
    custom_std::Shared_ptr<int> sp = new int(10);
    custom_std::Unordered_map<int, custom_std::String> map;
    custom_std::Unordered_set<custom_std::String> set;

    return 0;
}
