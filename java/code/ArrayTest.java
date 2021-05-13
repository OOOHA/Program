package code;

public class ArrayTest 
{
    public static final String LINE = "==========================================";
    public static void main(String args[])
    {
        int x[] = new int[]{10,20,30,40,50,60,70,80,90,100};
        int y[];

        System.out.println(x[2]);
        y = x;
        x[2] = 50;
        System.out.println(x[2]);
        System.out.println(y[2]);
        System.out.println(y[3]);

        System.out.println(LINE);

        x[2] = 30;//initialization
        for(int i = 0; i < x.length; i++)
        {
            System.out.print(x[i] + "   ");
        }
        System.out.println();
        y = x.clone();
        y[2] = 50;
        System.out.println(x[2]);
        System.out.println(y[2]);
    }
    
}
