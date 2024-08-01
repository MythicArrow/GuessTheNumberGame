
#include <iostream>
#include <sstream>
#include <random>

int main()
{
int target = (rand() % (100)) + 1;
std::string userString;
int guess = -1;
int guessNumber = 0;  // Initialize the guess counter

while(guess != target )
{
std::cout << "Guess a number between 0 and 100: ";
std::cin >> guess;
std::cout << guess << "\n";

// Increment the guess counter each time the user makes a guess
guessNumber++;

if(guess > target)
std::cout << "Your guess is too high\n";
else if(guess < target)
std::cout << "Your guess is too low\n";
else
std::cout << "You guessed the target in " << guessNumber << " attempts!\n";  // Display the number of guesses

// Note I had to use double quotes around "q" because it is a string
if(guess == -1)
{
std::cout << "good bye!";
break;
}
}
return 0;
}

