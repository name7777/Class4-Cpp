#include <iostream>

using namespace std;

int main()
{   // ★ 2차원배열[row][col]

    // // 예제1
    // int arrNumber[5][2] = { // 2차원배열: 마치 행-열처럼 밑에 5행 2열로 맞춰 작성하는 것이 가독성에 좋음
    //    {0, 0},
    //    {1, 2},
    //    {2, 4},
    //    {3, 6},
    //    {4, 8}
    // };

    // for (int i = 0; i < 5; i++)
    // {
    //    for (int j = 0; j < 2; j++)
    //    {
    //        cout << "a[" << i << "][" << j << "] : " << arrNumber[i][j] << endl;
    //    }
    // }


    // 예제2
    int row = 3, col = 5;
    
    int* row_1 = new int[col] { 1, 2, 3, 4, 5 };
    int* row_2 = new int[col] { 6, 7, 8, 9, 10 };
    int* row_3 = new int[col] { 11, 12, 13, 14, 15 };

    int** twoD_array = new int* [row] { row_1, row_2, row_3 };

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "] : " << twoD_array[i][j] << endl;
        }
    }

    delete[] row_1;
    delete[] row_2;
    delete[] row_3;
    delete[] twoD_array; // delete할땐 순서대로 delete 해줘야 함

    return 0;
}
