#include <iostream>

using namespace std;

int main()
{

    int sq1[4];
    int sq2[4];
    int x1, x2;
    int y1, y2;
    int area1, area2, rect1, rect2;
    int loop, loop_cnt;

    cin >> loop_cnt;
    for(loop = 0; loop < loop_cnt; loop++)
    {

        cin >> sq1[0] >> sq1[1] >> sq1[2] >> sq1[3];
        cin >> sq2[0] >> sq2[1] >> sq2[2] >> sq2[3];

        area1 = (sq1[2] - sq1[0]) * (sq1[3] - sq1[1]);
        area2 = (sq2[2] - sq2[0]) * (sq2[3] - sq2[1]);

        rect1 = (sq1[2] - sq1[0])*2 +  (sq1[3] - sq1[1]) *2;
        rect2 = (sq2[2] - sq2[0])*2 + (sq2[3] - sq2[1])*2;

        if((sq1[2] < sq2[0] || sq1[0] > sq2[2]) || (sq1[3] < sq2[1] || sq1[1] > sq2[3]))
        {
            cout << area1 + area2 << " " << rect1 + rect2 << endl;
        }
        else if((sq1[0] < sq2[0] && sq1[2] > sq2[2]) || (sq1[1] < sq2[1] && sq1[3] > sq2[3]))
        {
            cout << max(area1, area2) << " " << max(rect1, rect2) << endl;
        }
        else
        {
            x1 = max(sq1[0], sq2[0]);
            x2 = min(sq1[2], sq2[2]);

            y1 = max(sq1[1], sq2[1]);
            y2 = min(sq1[3], sq2[3]);
            cout << area1 + area2 - ((x2-x1) * (y2 - y1)) << " " << rect1 + rect2 - ((x2-x1) * 2 + (y2-y1) * 2) << endl;
        }

    }
}