#include <iostream>
int *readVotes()
{

    int *counts = new int[6]{};

    int ballot;

    // A local variable to count spoilt ballots.
    int spoilt_ballots = 0;

    std::cout << "--- Election Voting System ---" << std::endl;
    std::cout << "Enter a vote (1-5) for a candidate." << std::endl;
    std::cout << "Enter any other number for a spoilt ballot." << std::endl;
    std::cout << "Enter '0' to end the voting session." << std::endl;

    do
    {
        std::cout << "Enter your vote: ";

        if (std::cin >> ballot)
        {
            if (ballot != 0)
            {
                if (ballot >= 1 && ballot <= 5)
                {
                    *(counts + (ballot - 1)) = *(counts + (ballot - 1)) + 1;
                    std::cout << "Vote for Candidate " << ballot << " recorded." << std::endl;
                }
                else
                {
                    spoilt_ballots++;
                    std::cout << "Invalid vote. Spoilt ballot recorded." << std::endl;
                }
            }
        }
        else
        {
            std::cout << "Invalid input. Spoilt ballot recorded." << std::endl;
            spoilt_ballots++;
            std::cin.clear();
            std::cin.ignore(256, '\n');
            ballot = -1;
        }
    } while (ballot != 0);
    *(counts + 5) = spoilt_ballots;

    return counts;
}

void resultdeclaration(int *results)
{
    std::cout << "\n--- Election Results ---" << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "Candidate " << i + 1 << ": " << *(results + i) << " votes" << std::endl;
    }

    std::cout << "Spoilt ballots: " << *(results + 5) << " votes" << std::endl;
}

int main()
{
    // Call readVotes() to get the results.
    int *vote_counts = readVotes();

    // Call resultdeclaration() to display the results
    resultdeclaration(vote_counts);

    // Deallocate the dynamically allocated memory
    delete[] vote_counts;
    vote_counts = nullptr;

    return 0;
}
