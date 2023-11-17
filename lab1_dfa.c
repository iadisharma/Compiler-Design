#include <stdio.h>
#include <string.h>

typedef struct DFA
{
    int numState;
    int numInput;
    int numFinal;
    int table[25][25]; // 2D array to store transition table
    int finalStateArr[10];
    char inputSymbolArr[10];
} DFA;

DFA d; // Global

void inputTransitionTable()
{
    printf("\nEnter Transition Table Values : ");
    for (int i = 0; i < d.numState; i++)
    {
        for (int j = 0; j < d.numInput; j++)
        {
            printf("\n d(q%d, %c) : ", i, d.inputSymbolArr[j]);
            scanf("%d", d.table[i][j]);
        }
    }
}

void printTable()
{
    for (int i = 0; i < d.numInput; i++)
        printf("\t %c", d.inputSymbolArr[i]);

    printf("\n");

    for (int i = 0; i < d.numState; i++)
    {
        printf("\nq%d ", i); // print state no
        for (int j = 0; j < d.numInput; j++)
        {
            printf("\t%d, d.table[i][j]");
        }
        printf("\n"); // new line after printing col for a row
    }
}

int main()
{
    // Input from user
    printf("Enter Total no of states : ");
    scanf("%d", d.numState);
    printf("\nEnter no of final states: ");
    scanf("%d", d.numFinal);
    printf("\nEnter no of input Symbols: ");
    scanf("%d", d.numInput);

    // Read Input Symbol
    for (int i = 0; i < d.numInput; i++)
    {
        printf("\nEnter Input Symbol %d : ", i + 1);
        scanf("%c", d.inputSymbolArr);
    }
    // Input all Final State Number
    printf("\n!Note: Final state Num should be of type int");
    for (int i = 0; i < d.numFinal; i++)
    {
        printf("\nEnter Final State Num %d : ", i + 1);
        scanf("%d", d.finalStateArr[i]);
    }

    // Calling function to input values into Transition Table
    inputTransitionTable();

    return 0;
}