#include <iostream>
#include <ctime>
#include <unistd.h>
#include <fstream>
#include <math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
ifstream inFile("infile", ios::in);

int k,n,num;
vector<int> v;
k=0;
n=0;

inFile>>num;

int input;

for(int i=0;i<num;++i)
{
    inFile >> input;
    v.push_back(input);
}
 
sort(v.begin(), v.end());
cout<<v[num-5]+v[num-4]+v[num-3]+v[num-2]+v[num-1]<<endl;



	
	return 0;
}
