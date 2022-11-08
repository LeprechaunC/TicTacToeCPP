
#include <iostream>
#include <string>

bool turn = true;
bool game_true = true;

int user_input;
char grid[10] = { '0', '1','2','3','4','5','6','7','8','9' };

void board()
{
    std::cout << std::endl;
    std::cout << "   " << grid[1] << " | " << grid[2] << " | " << grid[3] << std::endl;
    std::cout << "   " << "----------" << std::endl;
    std::cout << "   " << grid[4] << " | " << grid[5] << " | " << grid[6] << std::endl;
    std::cout << "   " << "----------" << std::endl;
    std::cout << "   " << grid[7] << " | " << grid[8] << " | " << grid[9] << std::endl;
}

void victory()
{


    // rows victory
    for (int i = 1; i <= 7; i++) {
        if (grid[i] == 'X' && grid[i + 1] == 'X' && grid[i + 2] == 'X' || grid[i] == 'O' && grid[i + 1] == 'O' && grid[i + 2] == 'O')
        {
            std::cout << "Player  won!" << std::endl;
            break;

        }

    }
    // column victory
    for (int i = 1; i <= 3; i++)
    {
        if (grid[i] == 'X' && grid[i + 3] == 'X' && grid[i + 6] == 'X' || grid[i] == 'O' && grid[i + 3] == 'O' && grid[i + 6] == 'O')
        {
            std::cout << "Player won!";
            break;

        }

    }
    // diaognal victory
    if (grid[1] == 'X' && grid[5] == 'X' && grid[9] == 'X' || grid[1] == 'O' && grid[5] == 'O' && grid[9] == 'O')
    {
        std::cout << "Player won!" << std::endl;

    }
    if (grid[3] == 'X' && grid[5] == 'X' && grid[7] == 'X' || grid[3] == 'O' && grid[5] == 'O' && grid[7] == 'O')
    {
        std::cout << "Player won!" << std::endl;
    }
}

int main()
{ 

    while (game_true == true) {

        system("cls");
        victory();
        if (turn == true && game_true == true)
        {
            std::cout << "Player X turn: " << std::endl;
        }
        else {
            std::cout << "Player O turn: " << std::endl;
        }
        board(); //makes the board

        std::cin >> user_input;

        if (turn == true && grid[user_input] != 'O' && grid[user_input] != 'X')
        {

            grid[user_input] = 'X';
            turn = false;
            std::cout << "if" << std::endl;
        }
        else if (turn == false && grid[user_input] != 'O' && grid[user_input] != 'X')
        {
            grid[user_input] = 'O';
            turn = true;
            std::cout << "else if" << std::endl;
        }



    }

}
