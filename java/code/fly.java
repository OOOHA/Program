package code;
import java.util.Scanner;

public class fly 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        
        int crewsNum = 0;
        int spin = 0;
        int boo = 0;

        int morecrews = 0;
        int takeoff = 0;
        int nuclear = 0;

        String color1 = "";
        String color2 = "";
        String color3 = "";


        System.out.print("Please enter crews:");//enter things
        crewsNum = sc.nextInt();
        System.out.print("Please enter spin speed:");
        spin = sc.nextInt();
        System.out.print("Please enter boobs:");
        boo = sc.nextInt();

        System.out.println("Enter colors :");

        System.out.print("Please enter the color for airplane:");
        color1 = sc.next();
        System.out.print("Please enter the color for helicopter:");
        color2 = sc.next();
        System.out.print("Please enter the color for attack plane:");
        color3 = sc.next();


        plane Bessplane = new plane(crewsNum);//object
        helicopter heloic = new helicopter(spin);//object
        attackPlane attack = new attackPlane(boo);//object

        System.out.println("========== OUTPUT ==========");
        Bessplane.color(color1);
        Bessplane.show();
        System.out.println("===== NextInfo=====");
        heloic.color(color2);
        heloic.show();
        System.out.println("===== NextInfo=====");
        attack.color(color3);
        attack.show();

        System.out.println("========== INPUT ==========");

        System.out.print("Add more crews to the airplane: ");//enter things
        morecrews = sc.nextInt();
        System.out.print("Spin faster to takeoff: ");
        takeoff = sc.nextInt();
        System.out.print("How many nuclear did you launch: ");
        nuclear = sc.nextInt();

        Bessplane.add(morecrews);//call show abstract method
        heloic.add(takeoff);
        attack.shoot(nuclear);

        System.out.println("========== OUTPUT ==========");//output
        Bessplane.show();
        System.out.println("===== NextInfo=====");
        heloic.show();
        System.out.println("===== NextInfo=====");
        attack.show();
        sc.close();
    }    
}

abstract class demo
{
    protected String color = "";
    public void color(String color)
    {
        this.color = color;
    }
    abstract void show();
}

class plane extends demo
{
    private int crews;

    public plane(int crews)
    {
        this.crews = crews;
    }

    public void add(int newcrews)
    {
        crews += newcrews;
    }
    public void show()
    {
        System.out.println("There are " + crews + " crews onboard the " + color + " airplane !");
        System.out.println("SHO~ SHO~ SHO~");
    }
}

class helicopter extends demo
{
    private int spinPerSec;

    public helicopter(int spinPerSec)
    {
        this.spinPerSec = spinPerSec;
    }
    public void add(int addspin)
    {
        spinPerSec += addspin;
    }
    public void show()
    {
        System.out.println("The " + color + "helicopter's spin is now: " + spinPerSec + " Pre/Sec");
        System.out.println("DA DA DA DA DA");
    }
}

class attackPlane extends demo
{
    private int bomb;

    public attackPlane(int bomb)
    {
        this.bomb = bomb;
    }
    public void shoot(int redboomb)
    {
        bomb -= redboomb;
    }
    public void show()
    {
        System.out.println("Your Attack plane is : " + color);
        System.out.println("There are " + bomb + " bombs ready for attack!");
        System.out.println("Boom~ Boom~ Boom~");
    }
}