/* Task description:
Write a program that contains an array of 10 elements initialized by values of your choice. (pls check the homepage too)

Shift all elements in the array towards the beginning of the array by one cell. 
The first element should go into the last cell (you may call this process rotation). 
Repeat the shifting (rotation) process 10 times, printing the array after each step. 
Your output should be similar to the one shown on the right side.

25 69 54  8 77  6 29 10  3 98
69 54  8 77  6 29 10  3 98 25
54  8 77  6 29 10  3 98 25 69
 8 77  6 29 10  3 98 25 69 54
77  6 29 10  3 98 25 69 54  8
 6 29 10  3 98 25 69 54  8 77
29 10  3 98 25 69 54  8 77  6

Keep in mind, that the task is not to obtain the output by using tricky indexing! 
The elements of the array must actually move around!

LOOP

    print the array<---only printf here, no change in the array

    rotate the array to the left by 1<--- the array changes, no printf here

END OF LOOP

Hint

There is no need for a second array! The second element can overwrite the first, the third can overwrite the second… 
The only question is what shall we put into the last cell. Make a drawing and find out the necessary steps.

*/


#include <stdio.h>

int main(){
int array[10] = {25, 69, 54, 8, 77, 6, 29, 10, 3, 98};

  return 0;
}
