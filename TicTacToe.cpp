#include<iostream>
#include<vector>
#include<cstdlib>
class Tic{
	
	private:
		std::vector<char> board = {'0','1','2','3','4','5','6','7','8','9'};
	public:
	void HumanMove(unsigned int pos, char X)
	{
		if(board[pos] == 'X' || board[pos] == 'Y')
		{
			std::cout << "Postion is already filled" << std::endl;
		}
		else
		{
			board[char(pos)] = X;
			std::cout << "You made your move"  << std::endl;
		}
		
	}
	void ComputerMove(char Y)
	{
		if(board[1] == '1' && board[5] == '5')
		{
			board[1] = Y;
		}
		else if(board[2] == '2' && board[5] == '5')
		{
			board[2] = Y;
		}
		else if(board[3] == '3' && board[5] == '5')
		{
			board[3] = Y;
		}
		else if(board[4] == '4' && board[5] == '5')
		{
			board[4] = Y;
		}
		else if(board[6] == '6' && board[5] == '5')
		{
			board[6] = Y;
		}
		else if(board[7] == '7' && board[5] == '5')
		{
			board[7] = Y; 
		}
		else if(board[8] == '8' && board[5] == '5')
		{
			board[8] = Y;
		}
		else if(board[9] == '9' && board[5] == '5')
		{
			board[9] = Y;
		}
		else if(board[5] != '5')
		{
			if((board[1] == '1' || board[2] == '2') && (board[3] == '3' || board[4] == '4') && (board[7] == '7' || board[4] == '4') && (board[8] == '8' || board[9] == '9')
			&& (board[6] == '6' || board[4] == '4'));
			{	
				board[rand() % 9 ] = Y;
				if( int T = board[rand() % 9 ] == '5')
				{
					board[rand() % 9 ] = Y;
				}
			}
		}
	}
	void Board()
	{
		std::cout << board[1] << "|" << board[2] << "|" << board[3] << std::endl;
		std::cout << board[4] << "|" << board[5] << "|" << board[6] << std::endl;
		std::cout << board[7] << "|" << board[8] << "|" << board[9] << std::endl;
	}
};	
int main()
{
	char X = 'X';
	char Y = 'Y';
	for(int i;i<=9;i++)
	{
		Tic T;
		T.Board();
		std::cout << "On which postion: 1-9" << std::endl;
		unsigned int pos;
		std::cin >> pos;
        	T.HumanMove(pos,X);
		std::cout << std::endl;
		T.Board();
		T.ComputerMove(Y);
		std::cout << std::endl;
		T.Board();
	}
	return 0;
}
