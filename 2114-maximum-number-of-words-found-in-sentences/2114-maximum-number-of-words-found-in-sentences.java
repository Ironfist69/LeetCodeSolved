class Solution {
    public int mostWordsFound(String[] sentences) {
        int max_len=0;
        for(String currSen:sentences) {
            int senLen=currSen.split(" ").length;
            if(max_len<senLen) {
                max_len=senLen;
            }
        }
        return max_len;
    }
}