// AI_Search_Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

#include <iostream>
#include "Player.h"
#include "Map.h"


void printMap(Map map) {
    for (int i = 0; i < 5; i++) {
        std::cout << "\n";

        for (int n = 0; n < 5; n++) {
            
            if (map.CurrentSpace[0] == i && map.CurrentSpace[1] == n)
            {
                std::cout << '+';
            }
            else if (map.EndSpace[0] == i && map.EndSpace[1] == n)
            {
                std::cout << 'x';
            }
            else
            {
                std::cout << map.MapGrid[i][n];
            }


        }
    }
}
int bredth(Player player, Map map)
{
    while (true) {
        std::cout << "\n";
        std::cout << "1. Next step\n";
        std::cout << "2. End\n";
        int inputUser;
        std::cin >> inputUser;
        if (inputUser == 1)
        {
            
            player.getNeighbours();
            for (int index = 0, index < Neighbours; index++)
            {
                player.AddToFIFO();
            }
            
            printMap(map);

        }
        else if (inputUser == 2)
        {
            exit(0);
        }
    }
    
    return 0;
}
int depth()
{
    return 0;
}

int main()
{
    Map map = Map();
    Player player = Player();
    std::cout << "1: Bredth Search\n";
    std::cout << "2: Depth Search\n";
    int inputUser;
    std::cin >> inputUser;
    if (inputUser == 1)
    {
        std::cout << "-----\n";
        std::cout << "Commencing Bredth Search\n";
        bredth(player, map);
    }
    else if (inputUser == 2)
    {
        std::cout << "-----\n";
        std::cout << "Commencing Depth Search\n";
        depth();
    }
    
}

