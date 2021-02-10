#include <iostream>
#include <cmath>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <vector>

using namespace std;

string line (int n, char star){
    string border ="";
    for(int i =0; i<n; i++){
        border+=star;
    }

    return border;
}

string space (int n, char gap){
    string space ="**";
    for (int i=1; i<n-1; i++){
        space.insert(1, 1, gap);
    }
    return space;
}

string greeting (string name){
    string pasisveikinimas="* Sveikas, ";
    pasisveikinimas+=name;
    pasisveikinimas+="! *";
    return pasisveikinimas;
}


int main (){
char star ='*';
char gap = ' ';
string name;
cout<<"Enter your name:"<<endl;
getline(cin, name);
int linelength=name.length()+14;
string border1= line(linelength, star);
string border2= border1;
string tarpas1= space(linelength, gap);
string tarpas2=tarpas1;
string pasisveikinimas=greeting(name);

cout<<border1<<endl;
cout<<tarpas1<<endl;;
cout<<pasisveikinimas<<endl;
cout<<tarpas2<<endl;
cout<<border2<<endl;



    return 0;
}