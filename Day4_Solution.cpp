#include <iostream>
#include<math.h>
using namespace std;
bool isPrime(unsigned long int n) 
{ 
    
    for (unsigned long int i = 3; i <sqrt(n); i=i+2) 
        if ((n % i == 0)&&(i!=n)) 
            return false; 
  
    return true; 
} 

int main() {
    
	unsigned long long int T;
	cin>>T;
	while(T>0)
	{
	    unsigned long int n;
	   cin>>n;
	   if(n%2==0&&n!=2)
	      cout<<"Tanya"<<endl;
	     else if(n==2||n==3||n==5||n==7)
	     cout<<"Divesh"<<endl;
	     
	   else
	   {
	       if(isPrime(n))
	       cout<<"Divesh"<<endl;
	       else
	       cout<<"Tanya"<<endl;
	   }
        
	    T--;
	}

	return 0;
}
