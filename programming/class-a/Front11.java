class Front11 {
    public static void main(String[] args) { 
        int x[] = {1, 2, 3};
        int y[] = {7, 9, 8};
        System.out.println(front11(x,y));
        // front11([1, 2, 3], [7, 9, 8]) → [1, 7]
        // front11([1], [2]) → [1, 2]
        // front11([1, 7], []) → [1]
    }

    public static int[] front11(int[] a, int[] b) {
        if (a.length == 0 && b.length == 0)
            return new int[] {};
   
        else if (a.length !=0 && b.length == 0)
            return new int[]{a[0]};

        else if (a.length == 0 && b.length != 0)
            return new int[]{b[0]};

        else
            return new int[] {a[0],b[0]};
    }
}

// build & run java Front11.java