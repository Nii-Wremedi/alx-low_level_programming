A function pointer is a variable in C that records a function's memory address.
It enables us to return a function from another function or give functions as arguments to other functions.

The following is the syntax for declaring a function pointer:

return_type (*pointer_name)(parameter_list);

Here, the terms return type and pointer name refer to the data types that the function returns, respectively, while parameter list denotes the list of parameters that the method accepts.
In order to specify that we are declaring a reference to a function rather than a conventional function, the parentheses surrounding *pointer name are required.
