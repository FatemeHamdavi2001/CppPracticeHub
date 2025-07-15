#include <iostream>
#include <string>

//Total number of candidates
const int NUM_CANDIDATES {6};

//Candidate names
std::string candidates[NUM_CANDIDATES] = {"Ahmad", "Sara", "Hesam", "Zara", "Reza", "Nazi"};

//Array to store vote counts for each candidate
int votes[NUM_CANDIDATES] {0}; // all initialized to 0

//Function to display the menu and return user's choice
int showMenu()
{
    std::cout << "\n=== Voting Menu ===\n";
    for(int i = 0; i < NUM_CANDIDATES; i++)
    {
        std::cout << i + 1 << ". " << candidates[i] << '\n';
    }
    std::cout << NUM_CANDIDATES + 1 << ". Show result\n";
    std::cout << NUM_CANDIDATES + 2 << ". Exit\n";

    int choice;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    return choice;
}
//Function to cast a vote
void castVote(int choice)
{
    if(choice >=1 && choice <= NUM_CANDIDATES)
    {
        votes[choice - 1]++;
        std::cout << "Vote cast successfully for " << candidates[choice - 1] <<"!\n";
    }
    else {
        std::cout << "Invalid choice. Please try again.\n";
    }
}
//Function to show voting result
void showResults()
{
    std::cout << "\n Voting Results:\n";
    std::cout << "-------------------\n";
    for(int i = 0; i < NUM_CANDIDATES; i++)
    {
        std::cout << candidates[i] << ": " << votes[i] << " votes\n";
    }
}
//Function to find and print the winner
void findWinner()
{
    int maxVotes = votes[0];
    int winnerIndex = 0;

    for (int i = 1; i < NUM_CANDIDATES; ++i)
    {
        if (votes[i] > maxVotes)
        {
            maxVotes = votes[i];
            winnerIndex = i;
        }
    }

    std::cout << "\n The winner is: " << candidates[winnerIndex]
              << " with " << maxVotes << " votes!\n";
}

int main()
{
    while (true)
    {
        int choice = showMenu();

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        // If user chooses to vote
        if (choice >= 1 && choice <= NUM_CANDIDATES)
        {
            castVote(choice);
        }
        else if (choice == NUM_CANDIDATES + 1)
        {
            showResults();
            findWinner();
        }
        else if (choice == NUM_CANDIDATES + 2)
        {
            std::cout << "Thank you for voting. Goodbye!\n";
            break;
        }
        else
        {
            std::cout << "Invalid choice. Try again.\n";
        }

        // Pause so user can read the output
        std::cout << "Press Enter to continue...";
        std::cin.ignore();
        std::cin.get();
    }

    return 0;
}