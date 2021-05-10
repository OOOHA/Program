package code;

public class abc {
    
    public static void main(String[] args)
    {
        int[] a = new int[]{10,20,30,5,10,50};
        int sum = 0;

        if(a.length == 1)
        {
            System.out.println(a[0]);
        }
        
        int max;

        for(int i = 0; i < a.length -1; i++)
        {
            max = a[i];
            if(a[i + 1] > a[i])
            {
                max = a[i + 1];
            }
            for(int j = i + 1; j < i + 2; j++)
            {
                if(a[j] > a[i])
                {
                    if(i == a.length - 1)
                    {
                        sum += a[i];    
                    }
                    sum += a[j];
                }
                else
                {
                    sum = 0;
                    System.out.println(max);
                }
                /*System.out.print("i = " + i + " ");
                System.out.print("j = " + j + " ");
                System.out.println();*/
                //sum += a[j];
                //System.out.print(a[i] + "+" + a[j] + "=");
            }
        }
        System.out.println(sum);
        
    }
}
