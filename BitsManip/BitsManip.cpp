// BitsManip.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	std::string input;
	do
	{
		std::cout << "Please, input the following command to test the corressponding class\n";
		std::cout << "\"BitArray\" \tTo demonstrate the Bit Array class\n";
		std::cout << "\"OctetSet\" \tTo demonstrate the Octet Set class\n";
		std::cout << "\"e\" \t\tTo exist\n";
		std::cin >> input;

		if (input == "BitArray") {
			int size;
			std::cout << "\n\nYou have chosen BitArray.\n";
			std::cout << "Please, enter its size (between 1 and 256 otherwise the max will be set):\t";
			std::cin >> size;

			BitArray uut(size);
			std::cout << "Please, input the following commands. Please, note that the array is circular and zero indexed\n";
			std::cout << "For value of false for the bit, enter zero. Otherwise enter any other number.\n";
			std::cout << "\"Set {index} {value}\" \tTo set an element with {index} to specific {value}.\n";
			std::cout << "\"Get {index}\" \tTo get the value of an element with specific{index}.\n";
			std::cout << "\"Capacity\" \tTo get the capacity of the array.\n";
			std::cout << "\"Change {cap}\" \tTo change the capacity of the array to {cap}.\n";
			std::cout << "\"Exit\" \tTo exist this specific test (or enter any other text).\n\n";
			std::cin >> input;

			while (input == "Set" || input == "Get" || input == "Capacity" || input == "Change") {
				if (input == "Set") {
					int ind, val;
					std::cin >> ind >> val;
					uut.ChangeElement(ind, val);
					std::cout << "Done\n";
				}
				else if (input == "Get") {
					int ind;
					std::cin >> ind;
					std::cout << "BitArray[" << ind << "] = \t" << (uut.getElement(ind) ? 1 : 0) << "\n";
				}
				else if (input == "Capacity") {
					std::cout << "BitArray has capacity : \t" << (int)uut.getCapacity() << "\n";
				}
				else if (input == "Change") {
					int cap;
					std::cin >> cap;
					uut.changeCapacity(cap);
					std::cout << "Done\n";
				}
				
				std::cout << "\n";
				std::cin >> input;
			}
			std::cout << "\n\n";
		}
		else if (input == "OctetSet") {
			std::cout << "\n\nYou have chosen Octet Set.\n";

			OctetSet uut;
			std::cout << "Please, input the following commands.\n";
			std::cout << "\"Insert {element}\" \tTo insert an element.\n";
			std::cout << "\"Remove {element}\" \tTo remove an element if exists.\n";
			std::cout << "\"Check {element}\" \tTo check if an element exists.\n";
			std::cout << "\"Exit\" \tTo exist this specific test (or enter any other text).\n\n";
			std::cin >> input;

			while (input == "Insert" || input == "Remove" || input == "Check") {
				if (input == "Insert") {
					int ele;
					std::cin >> ele;
					uut.Insert(ele);
					std::cout << "Done\n";
				}
				else if (input == "Remove") {
					int ele;
					std::cin >> ele;
					uut.Remove(ele);
					std::cout << "Done\n";
				}
				else if (input == "Check") {
					int ele;
					std::cin >> ele;
					std::cout << ele << " Exists in set:\t" << (uut.Exist(ele) ? "True" : "False") << "\n";
				}
				std::cout << "\n";
				std::cin >> input;
			}
			std::cout << "\n\n";
		}

	} while (input !="e" && input !="E");
}