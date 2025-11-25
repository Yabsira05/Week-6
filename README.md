# Week-6
Module 7:Pointers and Memory
In this assignment, I worked with structs, dynamic memory allocation, and binary search to manage a list of inventory items.
I created a struct called Item that represents an inventory item.
Each Item has:
	•	name (string)
	•	id (int)
Then I:
	•	Used new to dynamically allocate an array of Item objects on the heap (for example, 100 items).
	•	Filled the array with sample data so each item has an id and a name.
	•	Kept the items sorted so binary search will work.
Binary search part
I wrote a binary search function that:
	•	Takes the array, its size, and the id we are looking for.
	•	Looks at the middle element:
	•	If the middle id matches, it returns that index.
	•	If the target id is smaller, it moves to the left half.
	•	If the target id is bigger, it moves to the right half.
	•	If the id is not found, it returns -1.
What happens in main()

In main() I:
	1.	Allocate the dynamic array of Item objects with new.
	2.	Fill the array with sample inventory items.
	3.	Ask the user to type an ID they want to search for.
	4.	Call my binary search function.
	5.	If the item is found, I print the item’s index, name, and id.
	6.	If it’s not found, I print a message saying the ID is not in the list.
	7.	At the end, I free the memory with delete[] so there are no memory leaks.
