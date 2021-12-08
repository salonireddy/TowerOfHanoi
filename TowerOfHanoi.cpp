#include <iostream>

using namespace std;

void Output(int start, int end) // function to print the sequence of moves
{
    cout << endl
         << start << " -> " << end;
}

void hanoi(int n, int start, int end)
{
    if (n == 1) // base case
    {
        Output(start, end); // moving one peck from current position to the goal state
    }
    else
    {
        int intermediate = 6 - (start + end); // cuz stick no.s are 1,2 and 3. 1+2+3 =6.
        hanoi(n - 1, start, intermediate);    // moving (n-1) pecks from start to intermediate stick
        Output(start, end);                   // moving last disc from start to goal state
        hanoi(n - 1, intermediate, end);      // moving (n-1) pecks back on top of the biggest peck
    }
}
int main()
{
    int pecks, start, end;
    cout << "\nEnter number of pecks: ";
    cin >> pecks;
    cout << "\nEnter start position: ";
    cin >> start;
    cout << "\nEnter end position: ";
    cin >> end;
    cout << "\n sequence of moves: ";
    hanoi(pecks, start, end); // 3 pecks, starting from 1st stick and ending up at he last stick
    return 0;
}
