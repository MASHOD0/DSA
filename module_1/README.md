# Structure
Structure: Structure is a collection of related data items of same or different data types.

```c
struct tag{
    Member definition1;
    Member definition2;
    ...
} structure variable;

```
the structure tag is optional and each member definition is a normal variable definition such as int i; or float f; or any other valid variable definition.
```c
struct books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book1, book2;
```
