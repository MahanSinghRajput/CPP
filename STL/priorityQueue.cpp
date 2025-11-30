#include<iostream>
using namespace std;
void explainPriorityQueue() {
    priority_queue<int> pq;
    pq.push(10); // {10}
    pq.push(20); // {20,10} // the element with the highest priority is at the top
    pq.push(15); // {20,15,10}
    pq.push(5); // {20,15,10,5} 
    pq.emplace(15); // More efficient than push

    cout << pq.top() << endl; // 20
    pq.pop(); // {15,15,10,5}
    cout << pq.top() << endl; // 15
    //size swap empty functions are same as others

    priority_queue<int, vector<int>, greater<int>> minHeap; // minHeap
    minHeap.push(10); // {10}
    minHeap.push(20); // {10,20}
    minHeap.push(15); // {10,20,15}
    minHeap.push(5); // {5,10,15,20}
    minHeap.emplace(15); // More efficient than push    
    cout << minHeap.top() << endl; // 5
    minHeap.pop(); // {10,15,15,20}
    cout << minHeap.top() << endl; // 10
}

/*
    A priority queue is an abstract data type that operates similar to a regular queue or stack data structure, but with an added feature: each element has a "priority" associated with it. In a priority queue, elements with higher priority are served before elements with lower priority. If two elements have the same priority, they are served according to their order in the queue (typically FIFO order).

    In C++, the Standard Template Library (STL) provides a built-in implementation of a priority queue through the `std::priority_queue` class template, which is part of the `<queue>` header. The `std::priority_queue` is typically implemented as a max-heap, meaning that the largest element (the one with the highest priority) is always at the top of the queue.

    Here are some key features and operations of `std::priority_queue`:

    1. **Template Parameters**:
       - `T`: The type of elements stored in the priority queue.
       - `Container`: The underlying container to store the elements (default is `std::vector<T>`).
       - `Compare`: A comparison functor that defines the priority (default is `std::less<T>`, which creates a max-heap).

    2. **Common Operations**:
       - `push(const T& value)`: Adds an element to the priority queue.
       - `pop()`: Removes the element with the highest priority from the queue.
       - `top()`: Returns a reference to the element with the highest priority without removing it.
       - `empty()`: Checks if the priority queue is empty.
       - `size()`: Returns the number of elements in the priority queue.

    3. **Example Usage**:
       ```cpp
       #include <iostream>
       #include <queue>
       #include <vector>

       int main() {
           // Create a max-heap priority queue
           std::priority_queue<int> pq;

           // Add elements to the priority queue
           pq.push(10);
           pq.push(30);
           pq.push(20);
           pq.push(5);

           // Display and remove elements in order of priority
           while (!pq.empty()) {
               std::cout << pq.top() << " "; // Print the highest priority element
               pq.pop();                      // Remove it from the queue
           }
           // Output: 30 20 10 5
           return 0;
        
       }
       ```
       */  