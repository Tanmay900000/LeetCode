class Solution {
    public int maximumPopulation(int[][] logs) {
    int max = Integer.MIN_VALUE, yearOfMax = Integer.MIN_VALUE, count = 0;

    for (int i = 1950; i <= 2050; i++) {
        for (int k = 0; k < logs.length; k++) {
            if (logs[k][0] <= i && logs[k][1] > i) {
                count++;
            }
        }

        if (max < count) {
            max = count;
            yearOfMax = i;
        }

        count = 0;
    }

    return yearOfMax;
}
}