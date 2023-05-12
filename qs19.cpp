/*
홀수 마방진
*/
/*
정보보안암호수학과 20202089 안현종
*/
#include <iostream>
using namespace std;

void othello(int n){
    int game[9][9];
    for(int i = 1; i< 9 ; i++){
        for(int j = 1 ; j< 9; j++){
            game[i][j] = 0;
        }
    }
    //빈칸 0 and +, 흰돌 1 and O , 검정돌 2 and X
    int null = 0, white = 1, black = 2;

    //기본 돌 세팅
    game[4][4] = white, game[4][5] = black, game[5][4] = black, game[5][5] = white;

    //게임 시작
    for(int i = 1; i<= n;i++){
        int x,y;
        int check1 = 0, check2 = 0, check3 = 0, check4 = 0;
        cin >> x >> y;
        if(i%2 == 1){//검정돌
            game[x][y] = black;
            //////세로//////
            for(int j =  x ; j > 0 ; j-- ){
                if(game[j][y] == black){
                    check1 = j;
                }
            }
            for(int j = x ; j < 9 ; j++){
                if(game[j][y] == black){
                    check2 = j;
                }
            }
            //////뒤집기//////
            if(check1 != 0){
                for(int j = check1 ; j < x ; j++){
                    game[j][y] = black;
                }
            }
            if(check2 != 0){
                for(int j = check2 ; j > x ; j--){
                    game[j][y] = black;
                }
            }
            check1 = 0, check2 = 0;

            //////가로//////
            for(int j = y ; j > 0 ; j--){
                if(game[x][j] == black){
                    check1 = j;
                }
            }
            for(int j = y ; j < 9 ; j++){
                if(game[x][j] == black){
                    check2 = j;
                }
            }
            //////뒤집기//////
            if(check1 != 0){
                for(int j = check1 ; j < y ; j++){
                    game[x][j] = black;
                }
            }
            if(check2 != 0){
                for(int j = check2 ; j > y ; j--){
                    game[x][j] = black;
                }
            }
            check1 = 0, check2 = 0;

            //////=/=대각//////
            for(int j = x, k = y; j <= 9 && k>= 9-x ; j++, k--){
                if(game[j][k] == black){
                    check1 = j, check2 = k;
                }
            }
            for(int j = x, k = y; j >= 1 && k<= 9-x ; j--, k++){
                if(j > x &&  k > y && game[j][k] == black){
                    check3 = j, check4 = k;
                }
            }
            //////뒤집기//////
            if(check1 != 0 && check2 != 0){
                for(int j = check1, k = check2; j < x && k > y ; j++, k--){
                    game[j][k] = black;
                }
            }
            if(check3 != 0 && check4 != 0){
                for(int j = check3, k = check4; j > x && k < y ; j--, k++){
                    game[j][k] = black;
                }
            }

            check1 = 0, check2 = 0 , check3 = 0,check4 = 0;
            //////=\=대각//////
            for(int j = x, k = y; j >= 1 || k>= 1 ; j--, k--){
                if(game[j][k] == black){
                    check1 = j, check2 = k;
                }
            }
            for(int j = x, k = y; j <= 8 || k <= 8 ; j++, k++){
                if(game[j][k] == black){
                    check3 = j, check4 = k;
                }
            }
            //////뒤집기//////
            if(check1 != 0 && check2 != 0){
                for(int j = check1, k = check2; j < x && k < y ; j++, k++){
                    game[j][k] = black;
                }
            }
            if(check3 != 0 && check4 != 0){
                for(int j = check3, k = check4; j > x && k > y ; j--, k--){
                    game[j][k] = black;
                }
            }
            check1 = 0, check2 = 0 , check3 = 0,check4 = 0;
        }
        else if(i %2 == 0){//흰돌
            game[x][y] = white;
            //////세로//////
            for(int j =  x ; j > 0 ; j-- ){
                if(game[j][y] == white){
                    check1 = j;
                }
            }
            for(int j = x ; j < 9 ; j++){
                if(game[j][y] == white){
                    check2 = j;
                }
            }
            //////뒤집기//////
            if(check1 != 0){
                for(int j = check1 ; j < x ; j++){
                    game[j][y] = black;
                }
            }
            if(check2 != 0){
                for(int j = check2 ; j > x ; j--){
                    game[j][y] = black;
                }
            }
            check1 = 0, check2 = 0;

            //////가로//////
            for(int j = y ; j > 0 ; j--){
                if(game[x][j] == black){
                    check1 = j;
                }
            }
            for(int j = y ; j < 9 ; j++){
                if(game[x][j] == black){
                    check2 = j;
                }
            }
            //////뒤집기//////
            if(check1 != 0){
                for(int j = check1 ; j < y ; j++){
                    game[x][j] = black;
                }
            }
            if(check2 != 0){
                for(int j = check2 ; j > y ; j--){
                    game[x][j] = white;
                }
            }
            check1 = 0, check2 = 0;

            //////=/=대각//////
            for(int j = x, k = y; j <= 9 && k>= 9-x ; j++, k--){
                if(game[j][k] == white){
                    check1 = j, check2 = k;
                }s
            }
            for(int j = x, k = y; j >= 1 && k<= 9-x ; j--, k++){
                if(j > x &&  k > y && game[j][k] == white){
                    check3 = j, check4 = k;
                }
            }
            //////뒤집기//////
            if(check1 != 0 && check2 != 0){
                for(int j = check1, k = check2; j < x && k > y ; j++, k--){
                    game[j][k] = white;
                }
            }
            if(check3 != 0 && check4 != 0){
                for(int j = check3, k = check4; j > x && k < y ; j--, k++){
                    game[j][k] = white;
                }
            }

            check1 = 0, check2 = 0 , check3 = 0,check4 = 0;
            //////=\=대각//////
            for(int j = x, k = y; j >= 1 || k>= 1 ; j--, k--){
                if(game[j][k] == white){
                    check1 = j, check2 = k;
                }
            }
            for(int j = x, k = y; j <= 8 || k <= 8 ; j++, k++){
                if(game[j][k] == white){
                    check3 = j, check4 = k;
                }
            }
            //////뒤집기//////
            if(check1 != 0 && check2 != 0){
                for(int j = check1, k = check2; j < x && k < y ; j++, k++){
                    game[j][k] = white;
                }
            }
            if(check3 != 0 && check4 != 0){
                for(int j = check3, k = check4; j > x && k > y ; j--, k--){
                    game[j][k] = white;
                }
            }
            check1 = 0, check2 = 0 , check3 = 0,check4 = 0;        }
    }

    for(int i = 1; i<= 8 ; i++){
        for(int j = 1; j<= 8; j++){
            cout << game[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;

    for(int i = 0 ; i< t; i++){
        int n;
        cin >> n;
        othello(n);
    }
    return 0;
}
