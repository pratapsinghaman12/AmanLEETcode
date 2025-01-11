class Solution {
    public String convert(String s, int numRows) {
        if(numRows == 1 || s.length() <= numRows){
            return s;
        }

        StringBuilder[] rows = new StringBuilder[numRows];
        for(int i = 0;i<numRows;i++){
            rows[i] = new StringBuilder();
        }

        int currRow = 0;
        boolean flag = false;

        for( char x : s.toCharArray()){
            rows[currRow].append(x);

            if(currRow == 0 || currRow == numRows - 1){
                flag = !flag;
            }

            currRow += flag ? 1 : -1;
        }

        StringBuilder result = new StringBuilder();
        for(StringBuilder x : rows){
            result.append(x);
        }
        return result.toString();
    }
}