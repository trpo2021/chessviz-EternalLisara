#include<iostream>
#include<string.h>

using namespace std;

struct coord
{
    int x,y;
};

char mas[8][8]={0};

void Scan(coord &f)
{
    char t = 0;
    cin >> t;
    f.y = t - 0;
    cin >> f.x;
    f.x--;
    cout << f.x << f.y << endl;
}

int CheckPos(int x,int y)
{
    if(x >= 0 && x < 8 && y >= 0 && y < 8)
    return 1;
    else 
    return 0;
}

void DrawDesk(){
  char a[8]={'A','B','C','D','E','F','G','H'};
    cout << "   ";
    for(int i = 0; i < 8; i++) cout << a[i] << " ";
    cout << endl;
    cout << "   ";
    for(int i = 0; i < 8; i++) cout << "- ";
    cout << endl;
    for(int i = 0; i < 1; i++){
      int j;
      cout << "|" << i + 1 << " ";
      cout << "r " << "n " << "b " << "q " << "k " << "b " << "n " << "r ";
      cout << endl;
    }
    for(int i = 1; i < 2; i++){
      cout << "|" << i + 1 << " ";
      cout << "p " << "p " << "p " << "p " << "p " << "p " << "p " << "p ";
      cout << endl;
    }
    for(int i = 3; i < 6; i++){
        cout << "|" << i + 1 << " ";
        for(int j = 0; j < 8; j++) cout << mas[i][j] << " ";
        cout << endl;
    }
    for(int i = 6; i < 7; i++){
      cout << "|" << i + 1 << " ";
      cout << "P " << "P " << "P " << "P " << "P " << "P " << "P " << "P ";
      cout << endl;
    }
    for(int i = 7; i < 8; i++){
      cout << "|" << i + 1 << " ";
      cout << "R " << "N " << "B " << "Q " << "K " << "B " << "N " << "R ";
      cout << endl;
    }
}
