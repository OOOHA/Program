package code;

public class aa29{
    public static void main(String args[])
    {
        int x = -2147483648;

        int result = 0;
        if(x % 10 == 0)
        {
            x = x / 10;  
        }
        if(x < 0)
            {
                long xs;
                xs = -x;
                System.out.println(xs);
                // String s = Long.toString(xs);
                // StringBuilder c = new StringBuilder(s);
                // String d;
                // d = c.reverse().toString();
                // long L = Long.parseLong(d);
                // L = -L;
                //     if(L < Integer.MIN_VALUE)
                //     {
                //         L = 0;
                //     }
                // int i = (int)L;
                // result = i;
            }
            else
            {
                String s = String.valueOf(x);
                StringBuilder c = new StringBuilder(s);
                String d;
                d = c.reverse().toString();
                long L = Long.parseLong(d);
                if(L > Integer.MAX_VALUE)
                    {
                        L = 0;
                    }
                int i = (int)L;
                result = i;

            }
        //System.out.println(result);
    }
}