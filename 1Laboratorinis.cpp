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

string greeting (string name, char lytis){
    string pasisveikinimas;
    if(lytis=='V' || lytis=='v')
       pasisveikinimas="* Sveikas, ";     
    else
        pasisveikinimas="* Sveika, ";  
    
    pasisveikinimas+=name;
    pasisveikinimas+="! *";
    return pasisveikinimas;
}


int main (){
char star ='*';
char gap = ' ';
int linelength;
string name;
char lytis;
cout<<"Enter your name:"<<endl;
getline(cin, name);
cout<<"Iveskite savo lyti: (V/M)"<<endl;
cin>>lytis;
if(lytis=='V'||lytis=='v'){
linelength=name.length()+14;
string border1= line(linelength, star);
string border2= border1;
string tarpas1= space(linelength, gap);
string tarpas2=tarpas1;
string pasisveikinimas=greeting(name, lytis);

cout<<border1<<endl;
cout<<tarpas1<<endl;;
cout<<pasisveikinimas<<endl;
cout<<tarpas2<<endl;
cout<<border2<<endl;
}
else if(lytis=='M' || lytis=='m'){
linelength=name.length()+13;
string border1= line(linelength, star);
string border2= border1;
string tarpas1= space(linelength, gap);
string tarpas2=tarpas1;
string pasisveikinimas=greeting(name, lytis);

cout<<border1<<endl;
cout<<tarpas1<<endl;;
cout<<pasisveikinimas<<endl;
cout<<tarpas2<<endl;
cout<<border2<<endl;   
}
else{
    cout<<"Neteisingai ivesta lytis!"<<endl;
}


    return 0;
}
