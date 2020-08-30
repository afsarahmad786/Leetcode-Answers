int arr[38];
class Solution {
public:
    int tribonacci(int n) {
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 1;
        if(n==0){
            return 0;
        }else if(n==1){
            return 1;
        }else if(n==2){
            return 1;
        }
        TRI(arr, 3);
        return arr[n-1]+arr[n-2]+arr[n-3];
    }
    void TRI(int arr[], int k){
        if(k>=38){
            return;
        }
        arr[k] = arr[k-1]+arr[k-2]+arr[k-3];
        TRI(arr, k+1);
    }
};