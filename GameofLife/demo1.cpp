#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size();
        int cols = board[0].size();
        for(int i = 0; i < rows; ++i){
            for(int j = 0; j < cols; ++j){
                int neighbors = getNeighbors(board,i,j);
                //如果当前细胞是活的
                if((board[i][j] & 1) == 1){
                    //如果活细胞周围邻居有两道三个为活细胞，则下一代继续存活
                    if(neighbors == 2  || neighbors == 3){
                        board[i][j] = 3;
                    }
                    //如果是01，则在更新时，死掉
                    //如果小于2个或者大于3个，都是导致死亡
                }else{
                    //如果当前细胞是死的，其相邻有三个或者的邻居。则其变成一个活细胞
                    if(neighbors == 3){
                        board[i][j] = 2;
                    }
                }
            }
        }
        for(int i = 0; i < rows; ++i){
            for(int j = 0; j < cols;++j){
                board[i][j] = board[i][j] >> 1;
            }
        }
    }
    //统计为1的邻居个数
    int getNeighbors(vector<vector<int> > &board,int r,int c){
        int rows = board.size();
        int cols = board[0].size();
        int res = 0;
        for(int i = max(0,r-1); i <= min(rows-1,r+1);++i){
            for(int j = max(0,c-1); j <= min(cols-1,c+1); ++j){
                res += board[i][j]&1;
            }
        }
        res -= board[r][c]&1;
        return res;
    }
};

int main(){
    // int demo[10] = {0,1,2,3,4,5,6,7,8};
    // int res = 0;
    // for(int i=0;i<8;i++){
    //     cout<<i<<" &1 = "<<demo[i]&1<<endl;
    //     cout<<i<<" >>1 = "<<demo[i] >> 1<<endl;
    // }
    

    // cout<<2&1<<endl;
    // cout<<9&1<<endl;
    // cout<<2&1+9&1<<endl;
}
