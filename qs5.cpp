/*직선 그래프 출력하기*/
#include <iostream>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for(int i = 0; i<t;i++){
        int k;
        cin >> k;
        for(int j = 0; j < k ; j++){
            for(int f = 0; f < k; f++){
                if(f == k/2){ 
                    if(j == k/2) cout << "O";
                    else cout << "I";
                }
                else if(j == k/2) cout << "+";
                else if(f == k-j-1) cout << "*";
                else cout << ".";
            }
            cout << "\n";
        }
    } 
    return 0;
}
