#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> chessboard(m, vector<int>(n));

    // Nhập giá trị cho từng ô trên bàn cờ
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> chessboard[i][j];
        }
    }

    int maxSum = 0; // Biến lưu tổng lớn nhất
    // Duyệt qua từng ô trên bàn cờ
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int currentSum = chessboard[i][j];
            // Tính tổng các ô bị quân tượng khống chế (theo đường chéo)
            for (int x = 0; x < m; x++) {
                for (int y = 0; y < n; y++) {
                    if (x != i && y != j && abs(x - i) == abs(y - j)) {
                        currentSum += chessboard[x][y];
                    }
                }
            }
            // Nếu tổng hiện tại lớn hơn tổng lớn nhất, cập nhật giá trị
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }
    cout << maxSum << endl;
    return 0;
}
