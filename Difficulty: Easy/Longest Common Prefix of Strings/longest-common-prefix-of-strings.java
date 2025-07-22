// User function Template for Java
class Solution {
    public String longestCommonPrefix(String arr[]) {
        // code here
        //StringBuilder res = new StringBuilder(arr[0]);
        int n = arr.length;
        String str =arr[0];
        //int idx = 0;
        for(int i = 1; i < n; i++){
            int len = Math.min(str.length(), arr[i].length());
            int j = 0;
            while(j < len){
                if(str.charAt(j) == arr[i].charAt(j))
                j++;
                else
                break;
            }
            str = str.substring(0,j);
        }
        return str;
    }
}