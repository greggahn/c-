/*성적*/
#include <iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int people;
        cin >> people;
        int grade;
        int A = 0,B = 0,C = 0,D = 0,F = 0;
        for (int j = 0 ; j < people; j++){
            cin >> grade;

            if((0<=grade)&&(grade<=100)){
                if((90<=grade)&&(grade<=100)){
                    A++;
                }
                else if((80<=grade)&&(grade<90)){
                    B++;
                }
                else if((70<=grade)&&(grade<80)){
                    C++;
                }
                else if((60<=grade)&&(grade<70)){
                    D++;
                }
                else{
                    F++;
                }
            }
        }
        
        cout << A << " "<< B << " "<< C <<" "<< D << " "<< F<<"\n";        
    }
    return 0;
}