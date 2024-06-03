public class scoreOfString {

    public int score(String s) {
        int num = 0;
        for(int i = 0; i < s.length() - 1; i++){
            num += Math.abs(s.charAt(i) - s.charAt(i + 1));
        }
        return num;
    }
    
}
