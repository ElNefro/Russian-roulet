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


void Game()
{
    system("cls");

    int shout_count = 1;
    int choise;
    bool lose = true;
    int lose_count = 0;

    do
    {
        if (lose_count == 2)
        {
            lose = false;
        }

        int shoot = rand() % 6 + 1;

        std::cout << "Раунд №" << shout_count << "\n\n";

        std::cout << "\n\t\t Делайте выбор: \n\n";
        std::cout << "\t 1) Выстрелить\n";
        std::cout << "\t 2) Пропуск хода\n\n";
        std::cout << "Ввод: ";

        std::cin >> choise;

        if (choise == 1)
        {
            if (shoot == 1)
            {
                system("cls");
                break;
            }
            else
            {
                system("cls");
                continue;
            }

        }
        else if (choise == 2 && lose == true)
        {
            system("cls");
            lose_count++;
            continue;
        }
        else
        {
            system("cls");
            std::cout << "\n\t\t Ты дурак!?\n\n";
            continue;
        }

        


    } while (true);
   
    do
    {
        std::cout << "\t\t\n\nСпасибо за игру)\n\n";
        std::cout << "\t\tХотите продолжить игру?\n\n";
        std::cout << "\t1) Да\n";
        std::cout << "\t2) Нет\n\n";
        std::cout << "Ввод: ";
        std::cin >> choise;
        if (choise == 1)
        {
            system("cls");
            MainMenu();
        }
        else if (choise == 2)
        {
            system("cls");
            std::cout << "\t\t\n\nЖдем вас снова)\n\n";
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
