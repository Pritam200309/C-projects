#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockPaperScissors(char you, char comp);

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 3 + 1;
    if (number == 1)
    {
        comp = 'r';
    }
    else if (number == 2)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }
    printf("Enter r for rock, p for paper and s for scissors\n");
    scanf("%c", &you);
    int result = rockPaperScissors(you, comp);
    printf("you chose %c and computer chose %c\n", you, comp);
    if (result == 0)
    {
        printf("\t********GAME DRAW********");
    }
    else if (result == 1)
    {
        printf("\t********YOU WIN********");
    }
    else if (result == -1)
    {
        printf("\t********YOU LOSE********");
    }
    return 0;
}

int rockPaperScissors(char you, char comp)
{
    // returns 1 if you win, -1 if you lose and 0 if draw
    if (you == comp)
    {
        return 0;
    }
    // draw
    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    if (you == 'p' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'p')
    {
        return 1;
    }
    if (you == 's' && comp == 'r')
    {
        return -1;
    }
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }
}