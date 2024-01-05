#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[]){
    //system("dir /b /ad /s  > list.txt");
    system("dir /b  /s ");
/*
    fstream f("list.txt", ios::in);
    for (string s; f >> s; ) {
        cout << s << endl;
    }
*/
    return 0;
}