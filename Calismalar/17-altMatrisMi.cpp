#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a[3] = {1,2,3};
    int b[7] = {9,5,1,2,3,6,7};
    //int b[7] = {9,5,1,2,2,6,7};
    int aboyut = 3;
    int bboyut = 7;
    for(int b1 = 0; b1 < bboyut; b1++)
    {
        bool esit = true;
        for(int a1 = 0; a1 < aboyut; a1++)
        {
            if(a[a1] != b[b1+a1])
            {
                esit = false;
                break;
            }
        }
        if(esit)
        {
            cout << "a matrisi b matrisinin alt matrisidir" << endl; 
            return 0;
        }
    }
    cout << "a matrisi b matrisinin alt matrisi değildir" << endl;
}
