class Intersection {
    public static void main(String[] args) {
        int A[] = {7, 2, 5, 8, 4}; 
        int B[] = {4, 2, 9, 5};
        System.out.println("intersection = "+ intersection(A,B));
    }
    
    public static String intersection( int A[], int B[]){
        String r = "";

        for(int i = 0; i < A.length; i++) {
            for(int j = 0; j < B.length; j++) {
                if (A[i] == B[j]) {
                    r = r + " "+A[i];
                }
            }
        }

        return r;
    }    
}

// build & run java Intersection.java