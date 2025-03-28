#include <bits/stdc++.h>
using namespace std;

int main (){
    // mỗi hàng là 1 trận
    // trái qua phải lần lượt là : số bàn thắng, số bàn thua, số bàn thua 
    // so sánh lần lượt theo thứ tụ ưu tiên 
    int a[6][3];
    for ( int i = 0; i< 6; i++){
        for ( int j = 0; j<3; j++){
            cin >> a[i][j];
        }
    }
    int score1 = 0; 
    int diff1 = 0;
    int goal1 = 0;  
    int card1 = 0;
    for ( int k = 0; k<3; k++){
        int temp = a[k][1];
        card1 += a[k][2];
        if ( a[k][0] - temp > 0){
            score1 += 3;
            diff1 += a[k][0] - temp;
            goal1 += a[k][0];
        }
        else if (a[k][0] - temp == 0){
            score1 += 1;
            diff1 += 0;
            goal1 += a[k][0];
        }
        else {
            score1 += 0;
            diff1 += a[k][0] - temp;
            goal1 += a[k][0];
        }
    }
    int score2 = 0; 
    int diff2 = 0;
    int goal2 = 0;  
    int card2 = 0;
    for ( int k = 3; k<6; k++){
        int temp = a[k][1];
        card2 += a[k][2];
        if ( a[k][0] - temp > 0){
            score2 += 3;
            diff2 += a[k][0] - temp;
            goal2 += a[k][0];
        }
        else if (a[k][0] - temp == 0){
            score2 += 1;
            diff2 += 0;
            goal2 += a[k][0];
        }
        else {
            score2 += 0;
            diff2 += a[k][0] - temp;
            goal2 += a[k][0];
        }
    }
    if ( score1 > score2){
        cout << score1 << " " << diff1 << " " << goal1 << " " << card1 << endl;
    }
    if ( score1 < score2){
        cout << score2 << " " << diff2 << " " << goal2 << " " << card2 << endl;
    }
    else if ( score1 == score2 ){
        if (diff1 > diff2 ){
            cout << score1 << " " << diff1 << " " << goal1 << " " << card1 << endl;
        }
        if (diff1 < diff2) {
            cout << score2 << " " << diff2 << " " << goal2 << " " << card2 << endl;
        }
        else if (diff1 == diff2){
            if (goal1 > goal2){
                cout << score1 << " " << diff1 << " " << goal1 << " " << card1 << endl;
            }
            if (goal1 < goal2){
                cout << score2 << " " << diff2 << " " << goal2 << " " << card2 << endl;
            }
            else if (goal1 == goal2){
                if (card1 < card2){
                    cout << score1 << " " << diff1 << " " << goal1 << " " << card1 << endl;
                }
                if ( card1 > card2){
                    cout << score2 << " " << diff2 << " " << goal2 << " " << card2 << endl;
                }
            }
        }
    }
    
}