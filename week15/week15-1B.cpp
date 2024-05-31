int duplicateNumbersXOR(int* nums, int numsSize) {
    int table[51] = {};
    for(int i=0; i<numsSize; i++){
        table[nums[i]]++;
    }
    int ans = 0;
    for(int i=1; i<=50; i++) {
        if(table[i]==2) ans = ans ^ i;
    }
    return ans;
}
