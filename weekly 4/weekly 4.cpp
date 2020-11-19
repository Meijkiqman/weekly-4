#include <iostream>
#include<string>
#include<conio.h>

const int X = 10;
const int Y = 10;
int xpos = 0;
int ypos = 0;
const char BLANK = ' ';
char board[X][Y];
void drawBoard();
void moving();


std::string lowertoupper(std::string answer)
{
   
    std::cout << " the uppercase version: \"" << answer << "\" is " << std::endl;

    for (int i = 0; i < answer.size(); i++)
    {
        answer[i] = toupper(answer[i]);
        
    }
    return answer;
    
}

int main()
{
    moving();

}

void converter()
{
    std::string answer;
    std::getline(std::cin, answer);
    std::string upperanswer = lowertoupper(answer);
    std::cout << upperanswer;
}

void drawBoard()
{
    system("cls");
    for (int j = 0; j < X; j++)
    {
        std::cout << "_";
    }
    std::cout << std::endl;
    for (int i = 0; i < X; i++)
    {
        
        for (int k = 0; k < Y; k++)
        {
            if (k == 0)
            {
                std::cout << '|';
            }
            else
            {
                std::cout << " ";
            }

            if (i == xpos && k == ypos)
            {
                std::cout << "*";
            }
           
            if (k == Y - 1)
            {
                std::cout << '|';
            }
            
        }
        std::cout << std::endl;
    }
    for (int j = 0; j < X; j++)
    {
        std::cout << "_";
    }

}

void moving()
{
    char input;
    drawBoard;
    system("pause");
    do
    {
        input = _getch();

        switch (input)
        {
         case 'w':
                      
                xpos--;
                break;
            
         case 's':
            
                xpos++;
                break;
            
         case 'd':
            
                ypos++;
                break;
            
         case 'a':

                ypos--;
                break;
            
         default:
             break;
        }
        if (ypos >= Y)
        {

            ypos = 0;
            
        }
        if (ypos < 0)
        {
            ypos = Y - 1;
        }
        if (xpos >= X)
        {
            xpos = 0;
        }
        if (xpos < 0)
        {
            xpos = X - 1;
        }
        drawBoard();

    } while (true);

}