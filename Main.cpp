#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter something: ";
	std::string UserInput;
	std::getline(std::cin, UserInput);

	std::cout << "Your input: " << UserInput << std::endl;
	
	int UserInputLength = UserInput.length();
	std::cout << "Your input length: " << UserInputLength << std::endl;

	char FirstIndex = UserInput[0];
	char LastIndex = UserInput[UserInput.length() - 1];

	std::cout << "First symbol: " << FirstIndex << std::endl;
	std::cout << "Last symbol: " << LastIndex << std::endl;

	return 0;
}