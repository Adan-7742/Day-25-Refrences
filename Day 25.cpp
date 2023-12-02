//=======================================================================================================
//                                                                                                      =
//............................Refrences.................................................................=
//                                                                                                      =
//=======================================================================================================
#include <iostream>
#include <cctype>
using namespace std;

/*

				What is a Reference?

				A reference is a variable that is an alias for an existing variable. 
				It stores the memory address of the original variable, allowing you to access
				and modify the original variable's value directly.
				In other words, a reference is like a nickname for another variable.


*/

//..................Example............................

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}


/*

				References offer several advantages over pointers:

				Readability:
				References are more readable and easier to understand than pointers.
				They make the code more clear and self-explanatory, as they directly reference the original variable.

				Type Safety:
				References are type-safe, meaning they can only be assigned to variables of the same type. 
				This prevents accidental type mismatches and ensures data integrity.

				Efficiency:
				References are more efficient than pointers in terms of memory access.
				They do not require additional memory allocation or dereferencing operations, making them more performant.



*/


void printArray(const int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
// reference ko declear kr k use initilized v karna hota hai..............



int to_upr(){


	std::cout << "Enter a line of text: ";
	std::string inputText;
	std::getline(std::cin, inputText);

	std::string uppercaseText = "";

	for (char character : inputText) {
		uppercaseText += std::toupper(character);
	}

	std::cout << "Uppercase text: " << uppercaseText << std::endl;

}
int main() {
	int x = 5;
	int y = 10;

	swap(x, y); // Pass references to 'x' and 'y'

	std::cout << x << " " << y << std::endl; // Output: 10 5



	int arr[5] = { 1, 2, 3, 4, 5 };

	printArray(arr, 5);
}