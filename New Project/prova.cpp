#include <iostream>
#include <fstream>
using namespace std;

void HelloWorld(){
    cout<<"yo bro\n";
}

int LeggiFile(){
    fstream f;
    int lol;
    f.open("file.txt",ios::in);
    if(!f)
        cout<<"shit!\n";
    else
        while(!f.eof())
            f>>lol;
    f.close();
    return lol;
}