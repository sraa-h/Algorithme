#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//binary search
int main(){
    int N, a;
    cin >> N >> a;
    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    int left = 0;
    int right = N-1;
    int count = 0;
    while(left <= right){
        int mid = (left+right)/2;
        count++;
        if(vec[mid] == a){
            break;
        }else if(vec[mid] > a){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    cout << count << endl;
}
