package java_code;

public class school 
{
    public static void main(String[] args)
    {
        String a = "abc";
        a = a + 10;
        System.out.println(a);

        String a12 = "123";
        a12 += 10;
        System.out.println(a12);

        int ii = java.lang.Integer.MAX_VALUE;
        int sum;
        System.out.println(ii);

        sum = ii + 1;
        System.out.println(sum);

        sum = ii + 2;
        System.out.println(sum);

        System.out.println(ii + 2L); 

        char ch1 = '\"';
        char ch2 = '\74';
        char ch3 = '\u003e';

        System.out.println(ch1 + "Hi." + ch1);
        System.out.println("\"Hi!\"");
        System.out.println(ch2 + "Hi" + ch3); 

        boolean status = true;
        System.out.println(status);

        int a1 = 45;
        float b = 2.3f;
        double b1 = 2.7;
        System.out.println(a1 + "\t" + b);
        System.out.println(a1/b);
        System.out.println(b1);
        System.out.println((float)a1);
        System.out.println(a1);

        boolean x = false;
        String str = new String("X is true");

        if(x == false)
        {
            str = "x is false";
            System.out.println(str);
        }
        if(x = true)
        {
            str = "x is a big true";
            System.out.println(str);
        
        }    
        int a2 = 8;
        int b3 = 3;
        int max;
        max = (a2 > b3) ? a2 : b3;//while a2 > b3, max = a2 otherwise max = b3
        System.out.println(a2 + "" + b3);
        System.out.println(max);

        //Enhance For Loop
        int numbers[] = {1,2,3,4,5,6,7,8,9,10};
        int iii = 0;
        for(int count : numbers)
        {
            System.out.print(count);
            System.out.print(" ");
            iii++;
        }
        System.out.println();

        int aforarray[];
        aforarray = new int[3];//set 3 memory space for integer a to use
        aforarray[0] = 6;
        aforarray[1] = 9;

        for(int i = 0; i < aforarray.length; i++)
        {
            System.out.print(aforarray[i] + " ");
        }
        System.out.println();
        System.out.println(aforarray.length);//array's length
        System.out.println();

        int aforarraytest[] = {1,2,3,4,5};
        int[] bforarraytest = {1,2,3,4,5};
        for(int i = 0; i < aforarraytest.length; i++)
        {
            System.out.print(aforarraytest[i] + " ");
        }
        System.out.println();
        for(int i = 0; i < bforarraytest.length; i++ )
        {
            System.out.print(bforarraytest[i] + " ");
        }
        System.out.println();


        int aforarraycopy[] = new int[]{1,2,3,4,5,6,7,8,9,10};
        int bforarraycopy[];

        bforarraycopy = aforarraycopy;
        bforarraycopy[2] = 30;
        System.out.println(aforarraycopy[2]);
        for(int i = 0; i < aforarraycopy.length; i++)
        {
            System.out.print(aforarraycopy[i] + " ");
        }
        System.out.println();
        for(int i = 0; i < bforarraycopy.length; i++)
        {
            System.out.print(bforarraycopy[i] + " ");
        }
        System.out.println();

        int aforarrayclone[] = new int[]{1,2,3,4,5,6,7,8,9,10};
        int bforarrayclone[];

        bforarrayclone = aforarrayclone.clone();
        bforarrayclone[2] = 30;
        System.out.println(aforarrayclone[2]);
        System.out.println(bforarrayclone[2]);

        for(int i = 0; i < aforarrayclone.length; i++)
        {
            System.out.print(aforarrayclone[i] + " ");
        }
        System.out.println();
        for(int i = 0; i < bforarrayclone.length; i++)
        {
            System.out.print(bforarrayclone[i] + " ");
        }
        System.out.println();
        System.out.println();

        int afor2array[][] = {{1,2,3,4,5},
                              {6,7,8,9,10}};
        for(int i = 0; i < afor2array.length; i++)
        {
            for(int j = 0; j < afor2array[i].length; j++)
            {
                System.out.print(afor2array[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println();

    }    
}
