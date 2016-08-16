#include <iostream>

using namespace std;

void main(void)

{
	bool xTurn = true;
	bool moves[9][3][3];
	char board[9][3][3];
	int rowChoice;
	int colChoice;
	int tracker = 0;

	//***********************
	// Initialize the board
	//***********************
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			for (int l = 0; l<9; l++)
			{
				board[i][j][l] = '*';
			}
		}
	}

	for (int x = 0; x<3; x++)
	{
		for (int r = 0; r<3; r++)
		{
			for (int m = 0; m<9; m++)
			{
				moves[x][r][m] = false;
			}
		}
	}


	while (true)
	{
		//***********************
		// Output the board
		//***********************
		cout << " "; // One blank space for the row label    
		for (int i = 0; i<3; i++)
		{
			cout << "   " << i; // Black space for proper spacing, followed by the column label
		}
		cout << endl; // end the column label line
		for (int i = 0; i<3; i++) // Loops over the rows in the board
		{
			cout << i << "   ";  // Output the row label with some space
			for (int j = 0; j<3; j++)  //Loops over the columns in the board
			{
				cout << board[i][j][tracker] << "   "; //Output a single board position followed by space
			}
			cout << endl; // end a column
		}

		
//----------------------------------------------------------------
		if (xTurn)
			{
				cout << "Player X - Make a Move" << endl;
			}
		else
			{
				cout << "Player O - Make a Move" << endl;
			}
		
		cout << "Row: ";
		cin >> rowChoice;
		while ((rowChoice > 2) || (rowChoice < 0))
		{
			cout << "Please enter a number within the game " << endl;
			cin >> rowChoice;
		}
		
		cout << "Col: ";
		cin >> colChoice;
		while ((colChoice > 2) || (colChoice < 0))
		{
			cout << "Please enter a number within the game " << endl;
			cin >> colChoice;
		}
		//---------------------------------------------------------------------------------------------
		if (moves[rowChoice][colChoice][tracker] == false)
		{
			if (xTurn)
			{
				board[rowChoice][colChoice][tracker] = 'X';
				xTurn = false;
				moves[rowChoice][colChoice][tracker] = true;
			}
			else
			{
				board[rowChoice][colChoice][tracker] = 'O';
				xTurn = true;
				moves[rowChoice][colChoice][tracker] = true;
			}
		}
		//----------------------------------------------------------------------------------------------------
		else
		{
			cout << "spot taken" << endl;
			cout << "Row: ";
			cin >> rowChoice;
			while ((rowChoice > 2) || (rowChoice<0))
			{
				cout << "Please enter a number within the game " << endl;
				cin >> rowChoice;
			}
			cout << "Col: ";
			cin >> colChoice;
			while ((colChoice > 2) || (colChoice<0))
			{
				cout << "Please enter a number within the game " << endl;
				cin >> colChoice;

			}
		}
		//--------------------------------------------------------------------------------------------------------
		if (tracker < 8)
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					board[i][j][tracker + 1] = board[i][j][tracker];
				}
			}
		}
//----------------------------------------------------------------------------------
		tracker++;
		cout << "Turn Counter: " << tracker << endl;

		if (board[0][0] == board[1][0] && board[1][0] == board[0][2])
		{
			cout << "The game was one by player: " << board[0][0] << endl;
		}
		else if (board[1][0] == board[1][1] && board[1][1] == board[1][2])
		{
			cout << "The game was one by player: " << board[1][0] << endl;
		}
		else if (board[2][0] == board[2][1] && board[2][1] == board[2][2])
		{
			cout << "The game was one by player: " << board[2][0] << endl;
		}
		else if (board[0][0] == board[0][1] && board[0][1] == board[0][2])
		{
			cout << "The game was one by player: " << board[0][0] << endl;
		}
		else if (board[1][0] == board[1][0] && board[1][0] == board[1][2])
		{
			cout << "The game was one by player: " << board[1][0] << endl;
		}
		else if (board[2][0] == board[2][1] && board[2][1] == board[2][2])
		{
			cout << "The game was one by player: " << board[2][0] << endl;
		}
		else if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
		{
			cout << "The game was one by player: " << board[0][0] << endl;
		}
		else if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
		{
			cout << "The game was one by player: " << board[0][2] << endl;
		}
	}
//--------------------------------------------------------------------------------------------

	for (int i = 0; i < tracker; i++)
	{
		cout << "Turn #" << i << endl;
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				cout << board[i][j][k] << "  ";
			}
			cout << endl;
		}
	}

}