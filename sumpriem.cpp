#include<iostream>
using namespace std;
int nxtprime(int);
int isprime(int);


int nxtprime(int num)
{
	do{
		num++;
	}while(!isprime(num));
	return(num);
}
int isprime(int num)
{
	int inum,count,prime=1;
	inum=num/2;
	for(count=2;count<num;count++)
	{
		if(num%count==0){
			prime=0;
			break;
		}
		
	}
	return(prime);
}
 main()
 {
 	int num,count,flag=0;
 	cout<<"enter a positive number "<<endl;
 	cin>>num;
 	for(count=2;count<=num-count;count=nxtprime(count))
 	{
 		if(isprime(num-count))
 		{
 			flag=1;
 			cout<<count<<"+"<<num-count<<"="<<num<<endl;
		 }
		
	 }
 	if(flag=0){
 		cout<<"the given number cant be expressed in terms of primr numbers"<<endl;
	 }
      return 0;
 }
