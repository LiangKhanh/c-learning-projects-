#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

int maxSumSubarray(vector<int>& a) {
    int maxSum = 0;
    for( int i = 0; i < a.size( ); i++ ){
        int thisSum = 0;
        for( int j = i; j < a.size( ); j++ ) {
            thisSum += a[ j ];
            if( thisSum > maxSum )
                maxSum = thisSum;
        }
    }
    return maxSum;
    
}

int main() {
    vector<int> sizes = {10, 100, 10000, 50000, 80000, 100000, 200000,400000,500000,800000,900000,1000000};

    for (int size : sizes) {
        vector<int> a(size); // Khởi tạo mảng với kích thước tương ứng

        // Đo thời gian bắt đầu
        auto start = high_resolution_clock::now();

        maxSumSubarray(a); // Gọi hàm tính maxSum

        // Đo thời gian kết thúc
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(stop - start);

        cout << "Kích thước mảng: " << size << ", Thời gian chạy: " << duration.count() << "ms" << endl;
    }

    return 0;
}