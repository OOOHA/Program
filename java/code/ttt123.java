package code;
import java.util.Scanner;

public class ttt123 
{
    public static void main(String[] args) 
    {
        ccc cir[] = new ccc[5];
         
        Scanner sc = new Scanner(System.in);
        
        for(int i = 1; i <= 3; i++)
        {
            double r = sc.nextDouble();
            cir[i] = new ccc(r);
        }

        for(int i = 1; i <= 3; i++)
        {
            cir[i].show();
        }
    }    
    
}

class ccc
{
    private /*static*/ double radius;

    public ccc(double radius)
    {
        this.radius = radius; 
    }
    public /*static */void show()
    {
        System.out.println(radius);
    }
}