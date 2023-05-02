#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    int rg;
    srand(time(NULL));
    rg = rand() % 10 + 1; // 1-10
    cout << rg;
}