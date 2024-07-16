//Given an m x n matrix, return all elements of the matrix in spiral order.

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();

        int startingRow = 0;
        int endingColumn = n-1;
        int endingRow = m-1;
        int startingColumn = 0;

        int totalElements = m*n;

        int count = 0;

        while(count < totalElements) {
            //print Starting Row
            for(int i=startingColumn; i<=endingColumn && count<totalElements; i++) {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            //print Ending Column
            for(int i=startingRow; i<=endingRow && count<totalElements; i++) {
                ans.push_back(matrix[i][endingColumn]);
                count++;
            }
            endingColumn--;

            //print Ending Row
            for(int i=endingColumn; i>=startingColumn && count<totalElements; i--) {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            //print Starting Column
            for(int i=endingRow; i>=startingRow && count<totalElements; i--) {
                ans.push_back(matrix[i][startingColumn]);
                count++;
            }
            startingColumn++;
        }
        return ans; 
    }
};
