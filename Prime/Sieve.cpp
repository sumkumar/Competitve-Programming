#include <iostream>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull pr[1000005],N=1000000,l;
bool p1[1000005];

int sieve(){
    ull i,j;
    for(i=2;i*i<=N;i++){
        if(!p1[i]){
            for(j=i*i;j<=N;j+=i){
                p1[j]=1;
            }
        }
    }
    j=0;
    for(i=2;i<=N;i++){
        if(!p1[i])
        pr[j++]=i;
    }
    l=j;
}



int main() {
	sieve();
	return 0;
}