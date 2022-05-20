class Solution {
public:
    void fill( vector<vector<int>>& image, int row, int col, int newColor, int initVal)
    {
        if(row < 0 || //check row is in range
           row > image.size() - 1 ||
           col < 0 || //check col is in range
           col > image[0].size() - 1 ||
           image[row][col] != initVal || //ensure pixel is part of the original image
           image[row][col] == newColor ) //have we been here already?
        {
            return;
        }
        //update image
        image[row][col] = newColor;
        //conditions based on prompt
        fill(image, row + 1, col, newColor, initVal);
        fill(image, row, col + 1, newColor, initVal);
        fill(image, row, col - 1, newColor, initVal);
        fill(image, row - 1, col, newColor, initVal);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int initVal = image[sr][sc];
        fill(image, sr, sc, newColor, initVal);
        return image;
    }
};