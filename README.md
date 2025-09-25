# Queues C++

A queue is an abstract data type (ADT) that follows the First-In, First-Out (FIFO) principle. This means the element inserted first is the one to be removed first, similar to a line of people waiting.

## Core Queue Operations
The fundamental operations performed on a queue are:

1. Enqueue: Adds an element to the rear (or back) of the queue.

2. Dequeue: Removes an element from the front of the queue.

3. Front/Peek: Returns the element at the front of the queue without removing it.

4. IsEmpty: Checks if the queue contains any elements.

5. Size: Returns the number of elements in the queue.

## Implementation in C++
In C++, queues can be implemented in a few primary ways:

### 1. Standard Template Library (STL) std::queue
The easiest and most common way to use a queue in C++ is with the STL container adaptor std::queue.

Header: <queue>

Underlying Container: By default, it uses std::deque (double-ended queue), but you can specify others like std::list. It restricts access to only front and back operations to enforce the FIFO principle.

Key Functions:

q.push(value): Enqueue

q.pop(): Dequeue (removes the front element)

q.front(): Access the front element

q.back(): Access the rear element

q.empty(): Check if empty

q.size(): Get the number of elements


### 2. Array Implementation (Circular Queue)
A standard array implementation is efficient in terms of memory (cache locality) but can suffer from "wasting space" because after many dequeues, the front index might move far from the start, leaving unused space at the beginning of the array.

The solution is a Circular Queue, where the rear pointer wraps around to the beginning of the array when the end is reached, treating the array conceptually as a circle.

Pointers: Requires a front and a rear index.

Modulo Arithmetic: Used for wrapping: (index + 1) % array_size.

Challenge: Distinguishing between a full queue and an empty queue (both might have front == rear). Solutions include using a counter or leaving one space unused.

### 3. Linked List Implementation
Using a singly-linked list is a very flexible way to implement a queue.

Pointers: Requires two pointers: a front pointer to the first node and a rear pointer to the last node.

Enqueue: Insert a new node at the rear (constant time: O(1)).

Dequeue: Remove the node pointed to by front (constant time: O(1)).

Advantage: Dynamic size; no concern about queue being too small or too large, unlike a fixed-size array.

Disadvantage: Higher memory overhead due to storing pointers.

## Applications of Queues
Queues are essential in computer science for modeling real-world waiting lines and managing resources:

### Operating Systems:

Job Scheduling: Managing a list of processes waiting for the CPU (Ready Queue).

I/O Handling: Requests waiting for a shared resource like a printer or disk.

Networking: Packet Buffering in routers and switches.

### Data Structures:

Implementing Breadth-First Search (BFS) algorithm for graph traversal.

Used in implementing caching mechanisms (like LRU/LFU may use variations).

Simulation: Modeling real-world scenarios, such as customer service lines.
