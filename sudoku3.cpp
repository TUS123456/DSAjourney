#include<bits/stdc++.h>
#define n 9
using namespace std;
class soltuion{
	public:
		void display(vector<vector<int>> &borad){
			for(int i=0; i<n; i++){
				for(int j=0; j<n; j++){
					cout<<borad[i][j]<<" ";
				}
				cout<<endl;
			}
			cout<<endl;
		}
		bool is_safe_place(vector<vector<int>> &board,int row,int col,int value) {

        for(int i=0; i<n; i++) {
            if(board[row][i] == value)
                return false;
            
            if(board[i][col] == value) 
                return false;

            if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)] == value) 
                return false;
        }

        return true;
    }
		bool sudoku_solver(vector<vector<int>> &board){
			for(int row=0; row < n; row++){
				for(int col=0; col < n; col++){
					if(board[row][col]==0){
						for(int val=1; val<=9; val++){
							if(is_safe_place(board,row,col,val)){
								board[row][col]=val;
								
								
								bool nextsolu=sudoku_solver(board);
								if(nextsolu==true){
									return true;
								}
								else{
									board[row][col]=0;
								}
				            }
						}
					return false;
					}
				}
			}
			return true;
		}
};
main(){
	soltuion s;
	vector<vector<int>> board(n,vector<int>(n,0));
    s.display(board);
    s.sudoku_solver(board);
    s.display(board);
}