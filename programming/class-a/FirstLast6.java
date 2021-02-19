class FirstLast6 {
    public static void main(String[] args) { 
        int v[] = {6, 1, 2, 3};
        System.out.println(firstLast6(v));
        // firstLast6([1, 2, 6]) → true
        // firstLast6([6, 1, 2, 3]) → true
        // firstLast6([13, 6, 1, 2, 3]) → false
    }

    public static boolean firstLast6(int[] nums) {
        return nums[0] == 6 || nums[nums.length-1] == 6;
    }      
}

// build & run java FirstLast6.java