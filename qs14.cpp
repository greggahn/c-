/*
요일 계산하기
*/
/*
정보보안암호수학과 20202089 언현종
*/
#include <iostream>
using namespace std;
int checkmonth(int year, int month){
    int day;
    if(month == 1){
        day = 31;
        return day;
    }
    else if(month == 2){
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
            day = 29;
            return day;
        }
        else{
            day = 28;
            return day;
        }
    }
    else if(month == 3){
        day = 31;
        return day;
    }
    else if(month == 4){
        day = 30;
        return day;
    }
    else if(month == 5){
        day = 31;
        return day;
    }
    else if(month == 6){
        day = 30;
        return day;
    }
    else if(month == 7){
        day = 31;
        return day;
    }
    else if(month == 8){
        day = 31;
        return day;
    }
    else if(month == 9){
        day = 30;
        return day;
    }
    else if(month == 10){
        day = 31;
        return day;
    }
    else if(month == 11){
        day = 30;
        return day;
    }
    else if(month == 12){
        day = 31;
        return day;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {  
        int Y, M, D;
        int checkday = 0;
        cin >> Y >> M >> D;
        
        for(int i = 1582 ; i < Y ; i++){
            if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0){
                checkday += 366;
            }
            else{
                checkday += 365;
            }
        }
        for(int j = 1 ; j < M; j++){
            checkday += checkmonth(Y,j);
        }
        checkday += D;
        switch (checkday % 7)
        {
        case(3): //일요일
            cout << "0\n"; 
            break;
        case(4): //월요일
            cout << "1\n";
            break;
        case(5): //화요일
            cout << "2\n";
            break;
        case(6): //수요일
            cout << "3\n";
            break;
        case(0): //목요일
            cout << "4\n";
            break;
        case(1): //금요일
            cout << "5\n";
            break;
        case(2): //토요일
            cout << "6\n"; 
            break;
        }
    }
    return 0;
}
