# Hash Tables
[]() 0x1A [>](https://github.com/TheeKingZa/alx-low_level_programming/blob/master/0x1C-makefiles/README.md)
## Table of Contents
- [What is a Hash Function?](#what-is-a-hash-function)
- [What Makes a Good Hash Function?](#what-makes-a-good-hash-function)
- [What is a Hash Table?](#what-is-a-hash-table)
- [How Do Hash Tables Work?](#how-do-hash-tables-work)
- [Dealing with Collisions](#dealing-with-collisions)
- [Advantages and Drawbacks of Hash Tables](#advantages-and-drawbacks)
- [Common Use Cases of Hash Tables](#common-use-cases)

## What is a Hash Function?

A **hash function** is a mathematical algorithm that takes an input (or 'key') and produces a fixed-size string of characters, which is typically a numerical value. The primary purpose of a hash function is to transform data into a format that is efficient for storage, retrieval, and comparison.

## What Makes a Good Hash Function?

A **good hash function** should have the following characteristics:
- **Deterministic**: For the same input, it should always produce the same hash value.
- **Efficient**: It should compute the hash quickly, even for large inputs.
- **Uniform Distribution**: It should distribute hash values uniformly across the output space.
- **Collision-Resistant**: It should minimize the likelihood of two different inputs producing the same hash value (collisions).
- **Avalanche Effect**: A small change in the input should result in a significantly different hash value.

## What is a Hash Table?

A **hash table** is a data structure that uses a hash function to map keys (input) to values (data) for efficient storage and retrieval. It's also known as an associative array or dictionary. Hash tables are widely used in computer science and offer fast data access.

## How Do Hash Tables Work?

1. **Hashing**: The key is passed through a hash function to generate a unique hash code.
2. **Indexing**: The hash code is used as an index to store or retrieve data in an array-like structure.
3. **Collisions**: Collisions occur when two different keys produce the same hash code, and various collision resolution techniques are used to handle them.

## Dealing with Collisions

Collisions can be managed through various techniques:
- **Separate Chaining**: Each hash table entry points to a linked list, allowing multiple values with the same hash code to be stored.
- **Open Addressing**: The table is probed for the next available slot when a collision occurs, using methods like linear probing or quadratic probing.
- **Double Hashing**: A secondary hash function is used to determine the next available slot in the event of a collision.

## Advantages and Drawbacks of Hash Tables

### Advantages:
- Fast data retrieval: O(1) average time complexity for retrieval.
- Efficient for large datasets.
- Flexible data structure for various use cases.

### Drawbacks:
- Memory usage: Hash tables can consume significant memory.
- Handling collisions: Collision resolution can add complexity.
- Not suitable for ordered data retrieval.

## Common Use Cases of Hash Tables

Hash tables are used in numerous applications, including:
- **Databases**: Hash-based indexing for efficient data retrieval.
- **Caching**: Storing frequently accessed data to improve performance.
- **Language Interpreters**: Symbol tables for variables and functions.
- **Distributed Systems**: Consistent hashing for load balancing.
- **Password Storage**: Securely storing hashed passwords.

Hash tables are a fundamental data structure in computer science, offering a versatile and efficient way to store and retrieve data.

