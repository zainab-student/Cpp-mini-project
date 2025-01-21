#include <iostream> //input output
#include <fstream>  //file handling
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int accNo;
    char name[25];
    char Fname[25];
    char cnic[25];
    char P_no[25];
    char email[25];
    float amount;
    srand(time(0));
    accNo = rand() * rand() + rand() * rand();
    cout << "Enter Your name :: ";
    cin >> name;
    cout << "Enter Your Father name ::";
    cin >> Fname;
    cout << "Enter your cnic ::";
    cin >> cnic;
    cout << "Enter your phone no ::";
    cin >> P_no;
    cout<<"Enter your email::";
    cin>>email;
    cout << "Enter your amount :: ";
    cin >> amount;
    cout << accNo << "This is your account number...\n";
    cout << "please save it";
    fstream file;//object name
    file.open("data.txt",ios::out|ios::app);
    file << accNo << "\t" << name << "\t" <<Fname<<"\t"<< P_no << "\t" << email << "\t" << amount << endl;
    file.close();
    return 0;
}