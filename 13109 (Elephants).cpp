#include <iostream>
#include <algorithm>


using namespace std;

int main() {

	int n,m,w,f,aux,wgt[100000];

	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>m>>w;

		//weights
		for(int j=0;j<m;j++) {
			cin>>wgt[j];
		}

		sort(wgt,wgt+m);

		aux=f=0;
		for(int i=0;i<m;i++) {
			if(aux + wgt[i]>w){
				break;
			}
			aux+=wgt[i];
			f+=1;
		}
		cout<<f<<endl;
	}
}
