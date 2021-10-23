#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,j;
    cin >> i;
    int arr[i];
    for(j = 0 ;j < i ; j++)
    cin >> arr[j];
    for(j = i -1 ; j >=0 ;j--)
    cout << arr[j] << " ";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
