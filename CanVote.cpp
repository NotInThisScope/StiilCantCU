#include <iostream>

int main()
{
    int age;
    std::cout << "Enter your age : ";
    std::cin >> age;

    age < 18 ? std::cout << "You are a minor. You can't vote!" : std::cout << "You are an adult. You can vote!";
    std::cout << " \n";

	return 0;
}
