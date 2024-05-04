#include <iostream>
#include <vector>
using namespace std;
// Function to display the Tic-Tac-Toe board
void displayBoard(const vector<vector<char>>& board)
{
    cout << "  1 2 3" << endl;
    cout << " -------" << endl;
    for (int i=0; i<3; ++i)
	{
        cout << i+1 << "|";
        for (int j=0; j<3; ++j)
		{
            cout << board[i][j] << "|";
        }
        cout << endl;
        cout << " -------" << endl;
    }
}
// Function to check if a player has won
char checkWin(const vector<vector<char>>& board, char player)
{
    // Check rows
    for (int i=0; i<3; ++i)
	{
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
		{
            return player;
        }
    }
    // Check columns
    for (int j=0; j<3; ++j)
	{
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
		{
            return player;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
		{
        	return player;
    	}
    return ' '; // No winner yet
}
// Function to check if the game is a draw
char checkDraw(const vector<vector<char>>& board)
{
    for (int i=0; i<3; ++i)
	{
        for (int j=0; j<3; ++j)
		{
            if (board[i][j] == ' ')
			{
                return ' '; // Empty cell found, game is not a draw
            }
        }
    }
    return 'D'; // No empty cells found, game is a draw
}
int main()
{
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char currentPlayer = 'X';
    cout << "Welcome to Tic-Tac-Toe!" << endl;
    while (true)
	{
        // Display the board
        displayBoard(board);
        // Prompt the current player to enter their move
        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;
        // Check if the move is valid
        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ')
		{
            cout << "Invalid move. Please try again." << endl;
            continue;
        }
        // Update the board with the player's move
        board[row-1][col-1] = currentPlayer;
        // Check for win
        char winner = checkWin(board, currentPlayer);
        if (winner != ' ')
		{
            cout << "Player " << winner << " wins!" << endl;
            break;
        }
        // Check for draw
        char draw = checkDraw(board);
        if (draw == 'D')
		{
            cout << "The game is a draw." << endl;
            break;
        }
        // Switch players
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    return 0;
}
