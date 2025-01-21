#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    int accNo;
    char name[25];
    char Fname[25];
    char cnic[25];
    char P_no[25];
    char email[25];
    float amount;
    int search;
    cout<<"Enter your account number ::";
    cin>>search;
    fstream file;
    file.open("data.txt",ios::in);
    if(!file){
        cout<<"File opening error !";
    }
    file>>accNo>>name>>Fname>>cnic>>P_no>>email>>amount;
    while(!file.eof()){//end of file till data is not search
        if(accNo==search){
            cout<<accNo<<name<<Fname<<cnic<<P_no<<email<<amount;
        }
        file>>accNo>>name>>Fname>>cnic>>P_no>>email>>amount;

    }
    file.close();
    return 0;
}