#include <iostream>
using namespace std;
#define F(i,a,b) for(int i = (int)(a); i <= (int)(b); i++)

int main() {
	int T;
	cin>>T;
	for(int i=0; i<T; i++)
	{
	    int M, N, x, y;
	    cin>>M>>N>>x>>y;
	    int Cost[M][N];
	    int Po;
	    int sum=0;
	    for (int j=0; j<M; j++)
	    {
	        for(int k=0; k<N; k++)
	        {
	            cin>>Cost[j][k];
	        }
	    }
Po = Cost[0][0];
int MinCost[x][y]; //declare the minCost matrix

    MinCost[0][0] = 0;

    // initialize first row of MinCost matrix
    F(j,1,y-1)
        MinCost[0][j] = MinCost[0][j-1] + Cost[0][j];

    //Initialize first column of MinCost Matrix
    F(i,1,x-1)
        MinCost[i][0] = MinCost[i-1][0] + Cost[i][0];

    //This bottom-up approach ensures that all the sub-problems needed
    // have already been calculated.
    F(i,1,M-1)
    {
        F(j,1,N-1)
        {
            //Calculate cost of visiting (i,j) using the
            //recurrence relation discussed above
            MinCost[i][j] = min(MinCost[i-1][j],MinCost[i][j-1]) + Cost[i][j];
        }
    }
    //cout<<MinCost[x][y];
    if(MinCost[x][y] <= Po)
    {
        cout<<"Escape"<<endl;
    }
    else
        cout<<"Died"<<endl;
}

	return 0;
}
