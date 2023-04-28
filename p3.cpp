#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char pass[50];
    int a;
    
    cout<<"Enter your password :- ";
    cin>>pass;
    
	try{
		for (a = 0; a <= 50; a++){
        if (isupper(pass[a]) == 1 ){
            goto x;			
        }if (a == 50){
           throw pass;           
        }
    }
    
	x:
	cout<<"Your password is valid";	
	}
	catch(...){
		
	 	cout<<"Try again , Enter valid password";
	 	
	}

    return 0;
}
