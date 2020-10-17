#include<bits/stdc++.h> 
#include<algorithm>

using namespace std; 


int longest_commom_subsequence(char *s1, char *s2, int m, int n)
{
	int L[m+1][n+1];
	int i, j; 

	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{

			if (i==0 || j ==0)
			{
				L[i][j]=0;
			}

			else if (s1[i-1]==s2[j-1])
			{
				L[i][j] = 1 + L[i-1][j-1];
			}
			else
			{
				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
			}

		}
	}

	return L[m][n];

}




int main()
{
	char X[] = "AGGTAB";  
    	char Y[] = "GXTXAYB";  
      
	int m = strlen(X);  
	int n = strlen(Y);  
	      
	cout << "Length of LCS is " << longest_commom_subsequence( X, Y, m, n ) << endl;  
	      
	return 0;  


}
