#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;
    vector<int> A(n);
    cout << "Enter elements of first array: ";
    for(int i = 0; i < n; i++) cin >> A[i];

    cout << "Enter size of second array: ";
    cin >> m;
    vector<int> B(m);
    cout << "Enter elements of second array: ";
    for(int i = 0; i < m; i++) cin >> B[i];

    // Sort both arrays
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    vector<int> UnionArr;
    int i = 0, j = 0;

    while(i < A.size() && j < B.size()) {
        if(A[i] < B[j]) {
            if(UnionArr.empty() || UnionArr.back() != A[i])
                UnionArr.push_back(A[i]);
            i++;
        }
        else if(B[j] < A[i]) {
            if(UnionArr.empty() || UnionArr.back() != B[j])
                UnionArr.push_back(B[j]);
            j++;
        }
        else { // equal element
            if(UnionArr.empty() || UnionArr.back() != A[i])
                UnionArr.push_back(A[i]);
            i++; j++;
        }
    }

    // Remaining elements of A
    while(i < A.size()) {
        if(UnionArr.empty() || UnionArr.back() != A[i])
            UnionArr.push_back(A[i]);
        i++;
    }

    // Remaining elements of B
    while(j < B.size()) {
        if(UnionArr.empty() || UnionArr.back() != B[j])
            UnionArr.push_back(B[j]);
        j++;
    }

    cout << "\nUnion: ";
    for(int x : UnionArr) cout << x << " ";
    cout << endl;

    return 0;
}
