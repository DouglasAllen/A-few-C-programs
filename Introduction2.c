                   Cprogramming language provides a data structure called the array, which can store a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.

                  To declare an array in C, a programmer specifies the type of the elements and the number of elements required by an array as follows:

type arrayName [ arraySize ];

                   This is called a single-dimensional array. The arraySize must be an integer constant greater than zero and type can be any valid C data type
.
                   For example, to declare a 10-element array called balance of type double, use this statement:
 double balance[10];

 Multi dimensional arrays

                   C programming language allows multidimensional arrays. Here is the general form of a multidimensional array declaration:

 type name[size1][size2]...[sizeN];

                  For example, the following declaration creates a three dimensional 5 . 10 . 4 integer array:


