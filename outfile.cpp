#include<fstream>
#include<iostream>
#include<string>

int main(){
    using namespace std;
    
    char automobile[50];
    int year;
    double a_price;
    double b_price;

    ofstream outfile;
    outfile.open("carinfo.txt");

    cout<<"Enter the make and model of automobile: ";
    cin.getline(automobile,50);
    cout<<"Enter the model year: ";
    cin>>year;
    cout<<"Enter the origenal asking price: ";
    cin>>a_price;
    b_price = 0.913*a_price;

    outfile<<fixed;
    outfile.precision(2);
    outfile.setf(ios_base::showpoint);
    outfile<<"make and model: "<<automobile<<endl;
    outfile<<"year: "<< year<<endl;
    outfile<<"was asking price $" << a_price <<endl;
    outfile<<"now asking price $" << b_price << endl;

    outfile.close();
    return 0;
}