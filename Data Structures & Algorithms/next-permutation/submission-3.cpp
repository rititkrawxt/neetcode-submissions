class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int n = A.size();
        int pivot = -1;

        // Step 1: Find the pivot
        for (int i = n - 2; i >= 0; i--) {
            if (A[i] < A[i + 1]) {
                pivot = i;
                break;
            }
        }

        // Step 2: If no pivot exists, reverse the entire array
        if (pivot == -1) {
            reverse(A.begin(), A.end());
            return;
        }

        // Step 3: Find the next greater element from the right
        for (int i = n - 1; i > pivot; i--) {
            if (A[i] > A[pivot]) {
                swap(A[i], A[pivot]);
                break;
            }
        }

        // Step 4: Reverse the suffix
        reverse(A.begin() + pivot + 1, A.end());
    }
};