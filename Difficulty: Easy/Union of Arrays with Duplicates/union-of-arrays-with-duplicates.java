class Solution {
    public static ArrayList<Integer> findUnion(int[] a, int[] b) {
        // code here
        TreeMap<Integer,Integer> mpp = new TreeMap<>();
        int m = a.length;
        int n = b.length;
        ArrayList<Integer> result = new ArrayList<>();
        
        for(int i = 0; i < m; i++)
           mpp.put(a[i],mpp.getOrDefault(a[i],0)+1);
           
        for(int i = 0; i < n; i++)
           mpp.put(b[i],mpp.getOrDefault(b[i],0)+1);
        
        for(int i : mpp.keySet())
           result.add(i);
           
    return result;
    }
}