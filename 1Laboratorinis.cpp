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

void pasisveikinimas (string name, char lytis, char gap, int n, char star, int plotis){

cout<<line(n, star)<<endl;;
for (int i=0; i<plotis; i++){
    cout<<space(n, gap)<<endl;
}
cout<<greeting(name, lytis)<<endl;
for(int i=0; i<plotis; i++){
    cout<<space(n, gap)<<endl;
}
cout<<line(n, star)<<endl;
}


int main (){
char star ='*';
char gap = ' ';
int linelength;
string name;
char lytis;
int plotis;
cout<<"Enter your name:"<<endl;
getline(cin, name);
cout<<"Iveskite savo lyti: (V/M)"<<endl;
cin>>lytis;
cout<<"Iveskite norima remelio ploti:"<<endl;
cin>>plotis;
if(lytis=='V'||lytis=='v'){

 linelength=name.length()+14;

pasisveikinimas(name, lytis, gap, linelength, star, plotis);
}
else if(lytis=='M' || lytis=='m'){
     linelength=name.length()+13;

pasisveikinimas(name, lytis, gap, linelength, star, plotis);
}

else{
    cout<<"Neteisingai ivesta lytis!"<<endl;
}


    return 0;
}