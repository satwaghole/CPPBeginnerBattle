#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    
    
/* i/p n=5
o/p=
0 0 0 0 5 0 0 0 0
0 0 0 4 8 12 0 0 0
0 0 3 6 9 12 15 0 0
0 2 4 6 8 10 12 14 0
1 2 3 4 5 6 7 8 9

*/

int n;
    cin>>n;

    for(int i=1;i<=n; ++i)
    {
        for(int j=n-i; j>0; j--)
            cout<<"0"<<" ";

  /*    an= a+(n-1)*d;
        a= n-i+1
        d= n-i+1
				n = 2 *i -1
	 */
        for(int k=(n-i+1);k<=(n-i+1)+(2*i-1-1)*(n-i+1);k=k+(n-i+1))
        {
	            cout<<k<<" ";
        }
/* OR
 				int start=n-i+1;
        for(int k=0;k<2*i-1;k++)
        {
	            cout<<start<<' ';
	            start+=(n-i+1);
        }
*/
	     for(int j=n-i; j>=1;--j)
            cout<<"0"<<" ";

        cout<<"\n";
    }



    return 0;
}
