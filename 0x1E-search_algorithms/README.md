# Search Algorithms
[<](https://github.com/TheeKingZa/alx-low_level_programming/tree/master/0x1C-makefiles/README.md) 0x1E [#](https://github.com/TheeKingZa/Portfolio/tree/master/README.md)
---

# Resources
    Read or watch:

* [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm) or [watch vid](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=video&cd=&cad=rja&uact=8&ved=2ahUKEwiDpOf4h4eDAxUiW0EAHV7lBIoQtwJ6BAgLEAI&url=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3DiO_gdw4HZ84&usg=AOvVaw2bKhoW937n_Bo_Lc_JzkCD&opi=89978449)
* [Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)


# NEED TO KNOW?
* [What is a search algorithm](#what-is-a-search-algorithm)
* [What is a linear search](#linear-search)
* [Time Complexity](#time-complexity)
* [What is a binary search](#binary-search)
* [What is the best search algorithm to use depending on your needs](#choosing-the-right-search-algorithm)
* [Q and As](#q--a)

## What is a Search Algorithm?

A search algorithm is a step-by-step procedure or method for finding a specific target among a set of elements. These algorithms play a crucial role in computer science and are used to efficiently locate information in various data structures.

[^](#need-to-know)

## Linear Search
    # [more about...](https://en.wikipedia.org/wiki/Linear_search)
Linear search, also known as sequential search, is a simple search algorithm that traverses a list or array and checks each element in order until the target is found or the entire list is exhausted. It is a straightforward method but may not be the most efficient for large datasets.

[^](#need-to-know)

### Time Complexity:
- Best Case: O(1) (when the target is found at the beginning)
- Worst Case: O(n) (when the target is at the end or not present)

[^](#need-to-know)

## Binary Search
    # [more about...](https://en.wikipedia.org/wiki/Binary_search_algorithm)
Binary search is a more efficient algorithm, especially for sorted datasets. It works by repeatedly dividing the search space in half until the target is found or the search space is empty.

[^](#need-to-know)

### Time Complexity 1:
- Best Case: O(1) (when the target is found in the middle)
- Worst Case: O(log(n)) (when the target is at an extreme end or not present)

[^](#need-to-know)

## Choosing the Right Search Algorithm

The choice of the best search algorithm depends on the characteristics of the data and the specific requirements of the task.

- Use **Linear Search** for small datasets or unsorted lists.
- Choose **Binary Search** for sorted datasets, as it has a logarithmic time complexity and is more efficient for larger datasets.

Consider the following factors when selecting a search algorithm:
- Dataset size
- Data organization (sorted or unsorted)
- Memory constraints
- Time constraints

Remember that there is no one-size-fits-all solution, and the best algorithm may vary based on the specific context of your application.

[^](#need-to-know)

## Big O Notation:

- Linear Search: O(n)
- Binary Search: O(log(n))

Feel free to explore other search algorithms depending on your unique use case and requirements.

---

# Q & A
```
Q) Big O #1
What is the time complexity (worst case) of a linear search in an array of size n?

A) Big O #1
The time complexity (worst case) of a linear search in an array of size n is O(n).
---

Q) Big O #2
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

A) Big O #2
The space complexity (worst case) of an iterative linear search algorithm in an array of size n is O(1). It is constant space, as it doesn't require additional memory proportional to the input size.
---

Q) Big O #3
What is the time complexity (worst case) of a binary search in an array of size n?

A) Big O #3
The time complexity (worst case) of a binary search in an array of size n is O(log(n)).
---

Q) Big O #4
What is the space complexity (worst case) of a binary search in an array of size n?

A) Big O #4
The space complexity (worst case) of a binary search in an array of size n is O(1). It is constant space, as it doesn't require additional memory proportional to the input size.
---

Q) Big O #5
What is the space complexity of this function / algorithm?


cCopy code:

int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}


A) Big O #5
The space complexity of the allocate_map function is O(n * m). It allocates a 2D array of size n x m, and the space complexity is proportional to the product of n and m.
```

[^](#search-algorithms)
