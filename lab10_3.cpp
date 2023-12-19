//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int count = 0;
    float sum = 0,i =0;
    string text;
    ifstream source("score.txt");
    while (getline(source,text))
    {
     sum += atof(text.c_str());
     i+=pow(atof(text.c_str()),2);
     count++;
    } 
    cout << "Number of data = "<< count<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<sum/count<<endl;
    cout << "Standard deviation = "<< sqrt((i/count)-pow((sum/count),2));
    
    source.close();
    return 0;
}