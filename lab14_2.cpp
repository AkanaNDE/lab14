#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool A[][N]){
int i = 0 ;
int n = 0;
while(i < N){
    while(n < N){
    cout << A[i][n] << " ";
    n++;
    }
cout << "\n";
i++;
n=0;
}
}

void inputMatrix(double A[][N]){
for(int i=0;i<N;i++){
cout << "Row " << i+1 <<": ";
for(int a=0;a<N;a++){
cin >> A[i][a];
}
}
}

void findLocalMax(const double A[][N], bool B[][N]){
for(int i=0;i<N;i++){
for(int j=0;j<N;j++){
if(j==0) B[i][j]=0;
else if(i==0) B[i][j]=0;
else if(j==N-1) B[i][j]=0;
else if(i==N-1) B[i][j]=0;
else if(A[i][j]>=A[i+1][j]&&A[i][j]>=A[i-1][j]&&A[i][j]>=A[i][j+1]&&A[i][j]>=A[i][j-1]) B[i][j]=1;
else B[i][j]=0;
}
}
}