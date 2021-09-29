package code;

public class palindrome {
    public static void main(String args[])
    {
        int x = 10;
        String s = Integer.toString(x);
        String d;
        StringBuilder c = new StringBuilder(s);
        d = c.reverse().toString();

        boolean result = false;

        if(x < 0)
        {
            result = false;
        }

        if(d.equals(s))
        {
            result = true;
        }
        
        
        System.out.println(result);
    }
}