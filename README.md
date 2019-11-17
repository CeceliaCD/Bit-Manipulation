# Bit-Manipulation

First: Bit functions (35 Points)
You have to write a program that will read a number followed by a series of bit operations from a file and perform the given operations sequentially on the number. The operations are as follows:
For example:
set(x, n, v) sets the nth bit of the number x to v
comp(x, n) sets the value of the nth bit of x to its complement (1 if 0 and 0 otherwise)
get(x, n) returns the value of the nth bit of the number x

 
The least significant bit (LSB) is considered to be index 0.
Input format: Your program will take the file name as input. The first line in the file provides the value of the number x to be manipulated. This number should be considered an unsigned short. The following lines will contain the operations to manipulate the number. To simplify parsing, the format of the opera- tions will always be the command name followed by 2 numbers, separated by tabs. For the set(x, n, v) command, the value of the second input number (v) will always be either 0 or 1. For the comp(x, n) and get(x, n) commands the value of the second input number will always be 0 and can be ignored. Note that the changes to x are cumulative, rather than each instruction operating independently on the original x.
Output format: Your output for comp and set commands will be the resulting value of the number x after each operation, each on a new line. For get commands, the output should be the requested bit’s value.

Example Execution:
For example, a sample input file “file1.txt” contains the following (except the annotation comments):
5          # x=5
get   0  0 # get(x, 0),ignoring second value (0)
comp  0  0 # comp(x, 0), ignoring second value (0) 
set   1  1 # set(x,1,1)

The result of the sample run is:
$ ./first file1.txt
1
4
6


Second: Bit Count functions (35 points)
In this part, you have to determine the parity of a number and the number of 1-bit pairs present in the number. Parity refers to whether a number contains an even or odd number of 1-bits. 1-bit pairs are defined by two adjacent 1’s without overlap with other pairs.
Number Binary sequence Parity   Number of pairs 
7      111                 Odd     1
15    1111                Even    2
367   101101111           Odd     3

Input format: This program takes a single number as an argument from the command line. This number should be considered as an unsigned short.
Output format: Your program should print either “Even-Parity” if the input has an even number of 1 bits and “Odd-Parity” otherwise, followed by a tab. Your program should then print the number of 1-bit pairs present in the number followed by a new line character.

Example Execution:
$ ./second 12
Even-Parity   1

$ ./second 31
Odd-Parity    2


Third: Bit Pattern function (30 points)
In this part, you have to determine whether a number’s bit representation is a palindrome. A palindrome is defined as a sequence that is the same both forwards and backwards.
We will be working with unsigned shorts which are 2 bytes or 16 bits. For example the number 384 has the binary sequence 0000000110000000 and is thus a palindrome while the sequence 0100100010111011 is not. Note that all values should be considered 16-bit, so while 5 is 101 in binary and looks like a palindrome, in 16 bits it’d be 0000000000000101, which is not.
You can and should use the same get(x, n) function that you created in part 1.
Input format: This program takes a single number as an argument from the command line. This number
should be considered as an unsigned short.
Output format: Your program should print either “Is-Palindrome” if the input is a palindrome and “Not-Palindrome” otherwise, followed by a new line character.

Example Execution:

Some sample runs and results are:
$ ./third 5
Not-Palindrome

$ ./third 384
Is-Palindrome

$ ./third 1001
Not-Palindrome
