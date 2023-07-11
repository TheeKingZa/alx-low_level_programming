0x0E-structures_typedef

What are structures, when, why and how to use them
How to use typedef
----

Structures:
In C programming, a structure is a user-defined data type that allows you to combine different types of variables under a single name. It is used to group related data together and organize them in a meaningful way. A structure can contain various members, each with its own data type. By grouping related data into a structure, you can easily manipulate and access the data as a single unit.

When to use structures:
Structures are particularly useful when you need to represent a complex entity that consists of multiple attributes or properties. For example, if you want to represent a student with attributes like name, age, and grade, you can create a structure with these members. Structures are also useful when you want to create arrays or linked lists of similar objects.

Why use structures:
Structures provide a way to organize and manage related data in a structured manner. They help improve code readability and maintainability by grouping related variables together. Structures also enable you to pass complex data types to functions, return multiple values from a function, and create more organized data structures such as arrays of structures or linked lists.

How to use structures:
To use a structure in C, you need to define its structure type and its members. The structure type is defined using the struct keyword, followed by the structure name and a set of braces {}. Inside the braces, you define the members of the structure, each with its own data type. Here's an example of defining and using a structure:

---
// Define a structure representing a point in 2D space
struct Point {
    int x;
    int y;
};

int main() {
    // Declare a variable of type Point
    struct Point p1;

    // Access and modify structure members using the dot (.) operator
    p1.x = 10;
    p1.y = 20;

    // Access and print the values of structure members
    printf("Coordinates: (%d, %d)\n", p1.x, p1.y);

    return 0;
}
---

In the example above, we define a structure named Point with two integer members x and y. We then declare a variable p1 of type Point and access its members using the dot (.) operator.

---

Typedef:
The typedef keyword in C is used to create a new name (alias) for an existing data type. It allows you to define a custom name for a data type, making the code more readable and easier to understand. typedef can be used with built-in data types as well as user-defined structures and enumerations.

The general syntax of typedef is as follows:

typedef existing_data_type new_data_type;

-----

Here's an example that demonstrates the usage of typedef with structures:

----
typedef struct {
    char *name;
    int age;
    float salary;
} Employee;

int main() {
    Employee emp1;
    emp1.name = "John Doe";
    emp1.age = 30;
    emp1.salary = 5000.0;

    printf("Employee Name: %s\n", emp1.name);
    printf("Employee Age: %d\n", emp1.age);
    printf("Employee Salary: %.2f\n", emp1.salary);

    return 0;
}


In the example above, we use typedef to create a new name Employee for the structure type. Now we can declare variables of type Employee without having to use the struct keyword. This makes the code more concise and readable.
