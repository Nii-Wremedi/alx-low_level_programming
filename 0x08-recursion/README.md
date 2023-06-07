Recursion is nothing more than a function that calls itself. It is therefore in a loop which must
have a way of terminating. In the program on your monitor, the variable "index" is set to 8, and
is used as the argument to the function "count dn". The function simply decrements the variable,
prints it out in a message, and if the variable is not zero, it calls itself, where it decrements it
again, prints it, etc. etc. etc. Finally, the variable will reach zero, and the function will not call
itself again. Instead, it will return to the prior time it called itself, and return again, until finally
it will return to the main program and will return to DOS
