#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;


int c1 = [1,3 ,5,7,9];
int c2 = [2,3,6,7,10];
int c4= [4,5,6,7 ] ;
int c8 = [8,9,10];




int ispower(int num,int base){
	for(int  i = 0; i< 10; i++){
		if(num ==pow(base,i)){
		
			return  0;
		}
		
	}return 1;
}


int encode(){
	string message;
	cout<<"Enter Message to be encoded" <<endl;
	cin>>message;
	int len = message.length();
	int red_bits = 1;
	int new_len = len ;
	//calculating number of redundant bits
	while(pow(2,red_bits)< len + red_bits + 1){
		red_bits = red_bits + 1;
		new_len  =  red_bits  + 1;
	}
	int enc_msg[new_len+1];int  k = 0;
	//inserting data bits and setting redundant bits as zero
	for(int i = 0; i <new_len + 1;i ++){
		if( ispower(i,2) == 0){
		
			enc_msg[i]= 0;
		}
		else{
			enc_msg[i]=message[k];
			k = k + 1;
		}
		
	}
	//setting redundant bits
	for(int  i = 0; i < 5;i++){
	
		
	
		
		
	}
	
		
	

	
	
	
	
	return 0;
	
	
}

int decode(){
	string encoded_msg;
	cout<<"Enter message to be decoded"<<endl;
	cin>> encoded_msg;
	return 0;
	
	
	
	
}


int main(){
	int arr[5];
	encode();
	//decode();
	return 0;
	
	
	
}


