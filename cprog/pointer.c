#include <stdio.h>
#include <string.h>
	int main() {
	char str_a[20];		// A 20-element character aray
	char *pointer;		// A pointer, meant for a chracter array
	char *pointer2;		// And yet another one

	strcpy(str_a, "Hello, world!\n");
	pointer = str_a; // Set the first pointer to the start of the array.
	printf(pointer);

	pointer2 = pointer + 2;	// Set the second pointer to the start of the array
	printf(pointer2);	// print it
	strcpy(pointer2, "y you guys!\n"); // Copy into that spot. 
	printf(pointer); 	// print again.
}
