#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    srand(time(NULL));
    int elsayisi;
    cout << "el sayisini giriniz:";
    cin >> elsayisi;

    int oyuncu1[elsayisi];
    int oyuncu2[elsayisi];
    int sonuc = 0;
    for(int a = 0;a < elsayisi; a++)
    {
        oyuncu1[a] = rand() % 6 + 1;
        oyuncu2[a] = rand() % 6 + 1;
        if(oyuncu1[a] > oyuncu2[a])
            sonuc++;
        else if(oyuncu1[a] < oyuncu2[a])
            sonuc--;
    }

    for(int b = 0;b < elsayisi;b++)
    {
        cout << oyuncu1[b] << " ";
    }
    cout << endl;
    for(int b = 0;b < elsayisi;b++)
    {
        cout << oyuncu2[b] << " ";
    }
    cout << endl;
    if(sonuc > 0)
        cout << "1.oyuncu kazandi."<< endl;
    else if(sonuc < 0)
        cout << "2.oyuncu kazandi." << endl;
    else
        cout << "Berabere." << endl;
}