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
    int newAmount;
    cout<<"Enter your account no ::";
    cin>>search;
    cout<<"Enter amount to withdraw ::";
    cin>>newAmount;
    fstream file,file1;
    file.open("data.txt",ios::in);
    file1.open("data1.txt",ios::out|ios::app);
    file>>accNo>>name>>Fname>>cnic>>P_no>>email>>amount;
    while(!file.eof()){
        if(accNo==search){
            cout<<"\n current amount::"<<amount;
            amount=amount-newAmount;
            cout<<"\n updated amount::"<<amount;
            file1<<accNo<<name<<"\t"<<Fname<<"\t"<<cnic<<"\t"<<P_no<<"\t"<<email<<"\t"<<amount<<endl;
        }else{
            file1<<accNo<<name<<"\t"<<Fname<<"\t"<<cnic<<"\t"<<P_no<<"\t"<<email<<"\t"<<amount<<endl;

        }
        file>>accNo>>name>>Fname>>cnic>>P_no>>email>>amount;


}
file.close();
file1.close();
remove("data.txt");
rename("data1.txt","data.txt");
return 0;
}