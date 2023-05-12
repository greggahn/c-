/********************************************************
*                                                       *
*  problem :                                            *
*        숫자 정사각형 달팽이 모양 출력하기                     *
*                                                       *
********************************************************/
/********************************************************
*                                                       *
*  국민대학교 과학기술대학 정보보안암호수학과 2학년                  *
*                                       20202089 안현종   *
*                                                       *
********************************************************/
#include <iostream>
using namespace std;
#define N 1000
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for(int i = 0; i<t;i++){
        int n, fir, las;
        int num = 1;
        cin >> n  >> fir >> las;
        int arr[N + 1][N + 1] = {0};
        for(int i = 1; i <= n; i++){
            for(int j = 1; j<=n;j++){
                arr[i][j] = (i-1)*n +j;
            }
        }
        int len = N * N;
        int copyarr[len + 1];
        int  count = 1, a = 1, b = 1, ac = 1,  bc = 1, ar = n+1, br = n+1;
        while(count <= n*n){
            for(; b < br ; b++,count++ ){
                copyarr[count] = arr[a][b]; //ex n = 5) 00 01 02 03 04
            }
            b--; a++; ac++; // b = 4, a = 1, ac = 1

            for(; a < ar;a++,count++){
                copyarr[count] = arr[a][b]; // 14 24 34 44
            }
            a--; b--; br--; // a = 3, b = 3, br = 4

            for(; b >= bc; b--,count++){
                copyarr[count] = arr[a][b]; // 33 32 31 30
            }
            b++; a--; ar--; // a = 2, b = 1, ar = 4
            
            for(; a >= ac; a--,count++){
                copyarr[count] = arr[a][b]; // 21, 11
            }
            a++; b++; bc++;
        }
        for(int k = fir ; k<= las ;k++){
            cout << copyarr[k] << " ";
        }
        cout << "\n";
    }
    return 0;
}
