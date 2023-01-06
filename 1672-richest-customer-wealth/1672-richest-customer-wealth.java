class Solution {
    public int maximumWealth(int[][] accounts) {
        int wealth = -1;
        for(int i = 0; i < accounts.length; i++) {
            int temp_sum = 0;
            for(int j = 0; j < accounts[i].length; j++) {
                temp_sum += accounts[i][j];
            }
            if(temp_sum > wealth) {
                wealth = temp_sum;
            }
        }
        return wealth;
    }
}