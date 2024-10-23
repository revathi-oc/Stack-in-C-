# Stack in C++
## Aim
To learn stack in C++.

## Theory
In C++, a stack is a linear data structure that follows the **Last In, First Out (LIFO)** principle, meaning the last element inserted is the first one to be removed. It is part of the Standard Template Library (STL) and is implemented using the `std::stack` container adapter, typically utilizing a `vector`, `list`, or `array` as the underlying container. The primary operations of a stack include `push()`, which adds an element to the top, and `pop()`, which removes the element from the top. Other key functions are `top()`, which returns the element at the top without removing it, `empty()`, which checks if the stack is empty, and `size()`, which returns the number of elements in the stack. Stacks are widely used in scenarios where data must be processed in reverse order, such as recursive algorithms, expression evaluation, function call management (via the call stack), and depth-first search (DFS) in graph traversal. Since elements are only added or removed from the top, random access is not allowed, making it inefficient for accessing elements in the middle. However, stacks are highly efficient for adding and removing elements due to the LIFO structure.

## Output

![image](https://github.com/user-attachments/assets/3d7c7ec2-be83-48ed-874b-670d701556aa)

## Conclusion
We learnt about stack and how to implement it in C++.
