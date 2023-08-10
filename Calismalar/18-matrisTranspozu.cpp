#include <iostream>

using namespace std;

int main(int argc,char **argv)
{
    (void)argc;
    (void)argv;
    int temp = 0;
    int a[3][3] = {5,4,3,4,0,4,7,10,3};
    // 5 4 3
    // 4 0 4
    // 7 10 3
    for(int x = 0;x < 3;x++)
    {
        for(int y = x + 1; y < 3; y++)
        {
            temp = a[x][y];
            a[x][y] = a[y][x];
            a[y][x] = temp;
        }
    }

    for(int e = 0;e < 3; e++)
    {
        for(int l = 0; l < 3;l++)
        {
            cout << a[e][l] << " ";
        }
        cout << endl;
    }
}