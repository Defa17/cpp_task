#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> oddColumns(vector<vector<int>>& matrix) {
    
    int numRows = matrix.size();
    int numCols = matrix[0].size();
    vector<vector<int>> result((vector<int>(numRows / 2 + numRows % 2), numCols));
    for (int i = 0, k = 0; i < numRows; i += 2) {
        for (int j = 0, k = 0; j < numCols; j++, k++) {
            result[i][k] = matrix[i][j];
        }
    }
    return result;
}

int main() {
    vector<vector<int>> matrix = { {1,2,3,4}, 
                                   {5,6,7,8},
                                   {9,10,11,12} };
    vector<vector<int>> result = oddColumns(matrix);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[0].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


