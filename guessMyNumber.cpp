#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int answer = 7;
    int guess;
    bool notguessed = true;
    while (notguessed)
    {
        cout << "Guess my number: "; // a prompt
        cin >> guess;
        
        if (answer == guess)
        {
            cout << "You guessed right! My number is also " << answer << '\n';
            notguessed = false;
        }
        else if (answer < guess)
        {
            cout << "My number " << answer << " is less than your number " << guess << '\n';
        }
        else        {
            cout << "My number " << answer << " is greater than your number " << guess << '\n';
        }
    }
    return 0;
}




