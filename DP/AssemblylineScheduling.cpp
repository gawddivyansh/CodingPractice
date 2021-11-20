#include<bits/stdc++.h>
using namespace std;
#define NUM_STATION 2
#define NUM_LINE 4
int carAssembly(int a[][NUM_STATION], int t[][NUM_STATION],int *e, int *x){
	int T1[NUM_STATION], T2[NUM_STATION], i;
	T1[0] = e[0]+a[0][0];
	T2[0] = e[1]+a[1][0];
	for(i=0;i<NUM_STATION;i++){
		T1[i] = min(T1[i-1]+a[0][i],T2[i-1]+a[0][i]+t[1][i]);
		T2[i] = min(T2[i-1]+a[1][i],T1[i-1]+a[1][i]+t[0][i]);
	}
	return min(T[NUM_STATION-1]+x[0], T2[NUM_STATION-1]+x[1]);
}