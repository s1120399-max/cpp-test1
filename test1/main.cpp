#include <iostream>
#include <string>
using namespace std;

int main() {
    // 分數數組
    int score[10] = {85, 90, 60, 92, 100, 76, 50, 89, 84, 40};
    // 每個等級的學生數量
    int gradeCount[5] = {0};

    // 遍歷所有分數
    for (int i = 0; i < 10; ++i) {
        // 判斷分數所屬的等級
        if (score[i] >= 90) {
            gradeCount[0]++; // A等級
        } else if (score[i] >= 80) {
            gradeCount[1]++; // B等級
        } else if (score[i] >= 70) {
            gradeCount[2]++; // C等級
        } else if (score[i] >= 60) {
            gradeCount[3]++; // D等級
        } else {
            gradeCount[4]++; // F等級
        }
    }

    // 輸出結果
    cout << "A等人數: " << gradeCount[0] << endl;
    cout << "B等人數: " << gradeCount[1] << endl;
    cout << "C等人數: " << gradeCount[2] << endl;
    cout << "D等人數: " << gradeCount[3] << endl;
    cout << "F等人數: " << gradeCount[4] << endl;

    return 0;
}
