#include <iostream>
 
using namespace std;

int main() {
	int T;
	cin>>T;
	for (int i=0; i<T; i++)
	{
	    int size;
	    cin>>size;
	    char string1[size];
	    cin>>string1;
	    char temp;
	    if(size%2==0)
	    {
	        for(int k=0; k<size-1; k++)
	        {
	            temp = string1[k];
	            string1[k] = string1[k+1];
	            string1[k+1] = temp;
	            k++;
	        }
	    }
	    else {
	        for (int k=0; k<size-2; k++)
	        {
	            temp = string1[k];
	            string1[k] = string1[k+1];
	            string1[k+1] = temp;
	            k++;
	        }
	    }
	  for (int j=0; j<size; j++)
	  {
	      int asc = string1[j]-'a';
	      int rem = 25 - asc;
	      string1[j] = char(rem + 'a');
	  }
	  cout<<string1<<endl;
	
}
return 0;
}
