/********************************************************
*                                                       *
*  problem :                                            *
*        성적                                            *
*                                                       *
********************************************************/
/********************************************************
*                                                       *
*  국민대학교 과학기술대학 정보보안암호수학과 2학년                  *
*                                       20202089 안현종   *
*                                                       *
********************************************************/
 #include <iostream>
 #include <string>

 using namespace std;
 unsigned int every(unsigned int num){
    unsigned int tmp = 1;
    while (num > 0){
            unsigned int find = num % 10;
            if (find != 0){
                tmp = find * tmp;
            }
            num /= 10;
    }
    return tmp;
 }
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        unsigned int num;
        cin >> num;
        
        unsigned int tmp = 1;
        while(num >= 10){
            tmp = every(num);
            num = tmp;
        }
        cout << num  << "\n";
    }
    return 0;
}

