#include<iostream>

using namespace std;

int main(){
	
    int age;
    cout<<"Enter your age :- ";
    cin >> age;
    
    try{
        if(age<18){
        	
            throw age;
        }
		else{
            cout<<"You are eligible to vote"<<endl;
        }
    }
	catch(int n){
		
        cout<<"You cannot vote waiting....";
    }
    
    return 0;
}
