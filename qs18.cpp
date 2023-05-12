/*
행렬곱셈
*/
/*
정보보안암호수학과 20202089 안현종
*/
#include <iostream>
#include <cstring>
using namespace std;
void arrmul(int r, int s, int a){
    // 1차원 배열 동적할당
    int mularr[r][a];
    int **arr1 = new int* [r];
    int **arr2 = new int* [s];

    // 2차원 배열 동적할당
    for(int i = 0; i < r ; i++){
        arr1[i] = new int[s];
    }
    for(int i = 0; i < s ; i++){
        arr2[i] = new int[a];
    }

    memset(mularr,0,sizeof(mularr));

    

    // arr1 입력
    for(int i = 0; i < r; i++){
        for(int j = 0; j < s; j++){
            cin >> arr1[i][j];
        }
    }
    
    // arr2 입력
    for(int i = 0; i < s; i++){
        for(int j = 0; j < a; j++){
            cin >> arr2[i][j];
        }
    }

    // 행렬 곱 계산
    for(int i = 0; i < r; i++){
        for(int j = 0; j < a; j++){
            for(int k = 0; k< s; k++){
                mularr[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // 출력
    for(int i = 0; i < r; i++){
        for(int j = 0; j < a; j++){
            cout << mularr[i][j] << " ";
        }
        cout << "\n";
    }

    // 동적 할당 해제
    for(int i = 0; i < r ; i++){
        delete[] arr1[i];
    }
    for(int i = 0; i < s ; i++){
        delete[] arr2[i];
    }
    delete[] arr1;
    delete[] arr2;
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    
    for(int i = 0; i<t; i++){
        int r, s, a;
        cin >> r >> s >> a;

        arrmul(r,s,a);
    }

    return 0;
}
