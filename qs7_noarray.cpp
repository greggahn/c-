/*정사각형모양 달팽이*/
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
        int num = 0, count = 0;
        cin >> n >> fir >> las;
        int up = 1, down = 1, right = 1, left = 2; 
        for(int i = 1 ; i <= (2*n)-1; i++){
            if (i == 1){
                for(int j = 0; j <= n-up;j++){
                    num++;
                    count++;
                    if(count == fir && fir < las+1){
                        cout << num <<" ";
                        fir++;
                    }
                }
                up++;
            }
            if(i%4 == 1 && i != 1){
                for(int j = 1; j <= n-up;j++){
                    num++;
                    count++;
                    if(count == fir && fir < las+1){
                        cout << num <<" ";
                        fir++;
                    }
                }
                up+=2;
            }
            else if(i%4 == 2){
                for(int j = 1; j <= n-right;j++){
                    num+=n;
                    count++;
                    if(count == fir && fir < las+1){
                        cout << num <<" ";
                        fir++;
                    }
                }
                right+=2;
            }
            else if(i%4 == 3){
                for(int j = 1; j <= n-down;j++){
                    num--;
                    count++;
                    if(count == fir && fir < las+1){
                        cout << num <<" ";
                        fir++;
                    }
                }
                down+=2;
            }
            else if(i%4 == 0){
                for(int j = 1; j <= n-left;j++){
                    num-=n;
                    count++;
                    if(count == fir && fir < las+1){
                        cout << num <<" ";
                        fir++;
                    }
                }
                left+=2;
            }
        }
        cout << "\n";
    }
    return 0;
}
