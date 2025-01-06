#include <iostream>
#include <cstdlib>

void MainMenu();
void game();
void Rules();

int player_count;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    MainMenu();

    return 0;
}

void MainMenu()
{
    int choise;

    do
    {
        std::cout << "\n\t\tДобро пожаловать в русскую рулетку\n\n";
        std::cout << "\t1) Играть\n";
        std::cout << "\t2) Правила\n";
        std::cout << "\t2) Выход\n\n";
        std::cout << "Ввод:";

        std::cin >> choise;

        if (choise == 1)
        {

        }
        else if (choise == 2)
        {
            Rules();
        }
        else if (choise == 3)
        {
            system("cls");
            std::cout << "\n\t\tА че ни кто не здох?((((\n\n";
            break;
        }
        else
        {
            system("cls");
            std::cout << "\n\t\t Ты дурак!?\n\n";
            continue;
        }
    } while (true);
}

void Rules()
{
    system("cls");
    
    std::cout << "\n У вас есть два выбора:\n\n";
    std::cout << "Выстрелить  \t<------ Делает выстрел, если игрок выжил, то ход переходит следующему игроку\n";
    std::cout << "Пропуск хода\t<------ Ход переходит следующему игроку, но использовать пропуск можно 2 раза\n\n";
    std::cout << "Выигрывает последний выживший\n\n";
    system("pause");
    system("cls");
    MainMenu();
    
}

void LogIn()
{
    system("cls");

    int choise_player_count;

    do
    {
        std::cout << "\n\t\t Введите кол-во игроков (макс - 6)\n\n";
        std::cout << "Ввод: ";

        std::cin >> choise_player_count;

        if (choise_player_count == 1)
        {
            player_count = 1;
        }
        else if (choise_player_count == 2)
        {
            player_count = 2;
        }
        else if (choise_player_count == 3)
        {
            player_count = 3;
        }
        else if (choise_player_count == 4)
        {
            player_count = 4;
        }
        else if (choise_player_count == 5)
        {
            player_count = 5;
        }
        else if (choise_player_count == 6)
        {
            player_count = 6;
        }
        else
        {
            system("cls");
            std::cout << "\n\t\tТы Дурак!?\n\n";
            continue;
        }

    } while (true);
}



void Game()
{
    system("cls");



    int shoot = rand() % 6 + 1;

    for (int i = 0; i < shoot; i++)
    {
        std::cout << "\n\t\t Делайте выбор: \n\n";
        std::cout << "\t 1) Выстрелить\n";
        std::cout << "\t 2) Пропуск хода\n\n";
        std::cout << "Ввод: ";
    }
   
   


}