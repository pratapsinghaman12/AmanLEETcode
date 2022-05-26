// { Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*; 
class GFG{
    public static void main(String args[]) throws IOException { 
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0){
            String S = sc.nextLine().trim();
            Solution ob = new Solution();
            if(ob.valid(S))
                System.out.println(1);
            else
                System.out.println(0);
        }
    }
}// } Driver Code Ends


//User function Template for Java
class Solution 
{ 
    boolean matching(char x,char y)
    {
        return ((x=='('&&y==')')||(x=='{'&&y=='}')||(x=='['&&y==']'));
    }
    boolean valid(String s) 
    { 
        Stack<Character>st= new Stack<Character>();
        for(int i=0;i<s.length();i++)
        {
            char x= s.charAt(i);
            if(x=='('||x=='{'||x=='[')
            {
                st.push(x);
            }
            else
            {
                if(st.isEmpty())
                {
                    return false;
                }
                if(matching(st.peek(),x)==false)
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
        }
        return (st.isEmpty()==true);
    }
} 