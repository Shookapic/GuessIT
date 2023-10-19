#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include "./includes/parsing_json/my_h_bis.hpp"
using namespace std;

int main(int ac, char **av);

void BadNumberChoosen(int user_number)
{
    int ac = 0;
    char **av = NULL;
    cout << "Bad number entered (" << user_number << ") try again." << endl;
    main(ac, av);
}

void EvaluateChoice(int user_number, int bot_number)
{
    if (user_number == bot_number) {
        cout << "GG ! The bot taked the L" << endl;
        exit(0);
    } else {
        cout << "You lose :(" << endl;
        cout << "The bot choosed : " << bot_number << endl;
        sleep(3);
        LOSE9;
    }
}

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    int bot_number = rand() % 100 + 1;
    int user_number = 0;

    cout << "Try to guess the number choosen by the bot (0 -> 100): " << endl;
    cin >> user_number;

    user_number > 100 ? BadNumberChoosen(user_number) : EvaluateChoice(user_number, bot_number);
    return 0;
}
