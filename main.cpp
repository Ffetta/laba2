#include <QCoreApplication>
#include <Windows.h>
#include<iostream>
using namespace std;



void foo4(int c){
    bool m[sizeof(c)*8+1];
    for (int i=sizeof(c)*8-1;i>=0;i--){
        printf("%d",(c>>i)&1);
        m[i]=(c>>i)&1;
    }

}


int main(int argc, char *argv[])
{
    COORD position;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    QCoreApplication a(argc, argv);
    float *c;
            c = new float;
            cin>>*c;
            int *f;
            f=(int*)c;
           // foo4(*f);

  for ( int j=0;j<15;j++){
   position.X = 50;
   position.Y = 10;
   SetConsoleCursorPosition(hConsole, position);
    for(int i=0;i<15;i++){
      //  cout<<"                                 ";
        SetConsoleTextAttribute(hConsole, (WORD) ((j << 4) | i));
        foo4(*f);
        position.Y++;
        SetConsoleCursorPosition(hConsole, position);



    }
  }

    return a.exec();
}
