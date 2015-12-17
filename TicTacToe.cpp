#include<iostream>
#include<vector>
#include<cstdlib>
class Tic{
	
	private:
		std::vector<char> board = {'0','1','2','3','4','5','6','7','8','9'};
	public:
	void HumanMove(unsigned int pos, char X){
		if(board[pos] == 'X' || board[pos] == 'Y'){
			std::cout << "Postion is already filled" << std::endl;
		}
		else{
			board[char(pos)] = X;
			std::cout << "You made your move"  << std::endl;
		}
	}
	void ComputerMove(char Y){
		if(board[5] != '5'){
			if((board[1] == '1' || board[2] == '2') && (board[3] == '3' || board[4] == '4') && (board[7] == '7' || board[4] == '4') && (board[8] == '8' || board[9] == '9')
			&& (board[6] == '6' || board[4] == '4'));{	
				board[rand() % 9 ] = Y;
				if(int T = board[rand()%9] == '5')
					board[rand() % 9 ] = Y;
			}
		for(int i=1;i<10;i++){
			if(i == 5)
				++i;
			if(board[i]-0x30 == i) // Convert string to int.
				board[i] = Y;
		}
	}
	void Board(){
		for(int i=1;i<=7;i+=3)
			std::cout << board[i] << "|" << board[i+1] << "|" << board[i+2] << std::endl;
	}
};	
int main(){
	char X = 'X';
	char Y = 'Y';
	for(int i;i<=9;i++){
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
