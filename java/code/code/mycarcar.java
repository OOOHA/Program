package code;
import java.util.Scanner;

public class mycarcar// extends speedChange
{
    public static final String WANT = "How many times would you want:";//java rule S1192
    public static final String LINE1 = "--------------------------------------------";//java rule S1192
    public static final String LINE2 = "============================================";//java rule S1192
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        Car car1 = new Car();//define 1st car and call
        car1.carInfo("1st car info:", 12345, "Blue");
        System.out.println(LINE2);

        Car car2 = new Car();//define 2nd car and call
        car2.carInfo("2nd car info:", 23456, "Red");
        System.out.println(LINE2);

        Car car3 = new Car();//define 3rd car and call
        car3.carInfo("3rd car info:", 34567, "Green");
        System.out.println(LINE2);



        System.out.print("Please enter the 1st car's acceleration:");
        float speedfor1 = sc.nextFloat();// 1st car's acceleration
        System.out.print(WANT);
        float timesfor1 = sc.nextFloat();
        System.out.println(LINE1);

        System.out.println("The 1st car speed is now:" + car1.speedChange(speedfor1 * timesfor1));
        System.out.println(LINE1);// 1st car's speed after acceleration

        System.out.print("Please enter the 1st car's deceleration:");
        float speedDownFor1 = sc.nextFloat();//1st car's deceleration
        System.out.print(WANT);
        float timesDownFor1 = sc.nextFloat();
        System.out.println(LINE1);
        System.out.println("The 1st car speed is now:" + car1.speedChange(speedDownFor1,timesDownFor1));
        System.out.println(LINE2);// 1st car's speed after deceleration



        System.out.print("Please enter the 2nd car's acceleration:");
        float speedfor2 = sc.nextFloat();// 2nd car's acceleration
        System.out.print(WANT);
        float timesfor2 = sc.nextFloat();
        System.out.println(LINE1);
        
        System.out.println("The 2nd car's speed is now:" + car2.speedChange(speedfor2 * timesfor2));
        System.out.println(LINE1);// 2nd car's speed after acceleration

        System.out.print("Please enter the 2nd car's deceleration:");
        float speedDownFor2 = sc.nextFloat();// 2nd car's deceleration
        System.out.print(WANT);
        float timesDownFor2 = sc.nextFloat();
        System.out.println(LINE1);
        System.out.println("The 2nd car speed is now:" + car2.speedChange(speedDownFor2,timesDownFor2));
        System.out.println(LINE2);// 2nd car's speed after deceleration



        System.out.print("Please enter the 3rd car's acceleration:");
        float speedfor3 = sc.nextFloat();// 3rd car's acceleration
        System.out.print(WANT);
        float timesfor3 = sc.nextFloat();
        System.out.println(LINE1);
        
        System.out.println("The 3rd car's speed is now:" + car3.speedChange(speedfor3 * timesfor3));
        System.out.println(LINE1);// 2nd car's speed after acceleration

        System.out.print("Please enter the 3rd car's deceleration:");
        float speedDownFor3 = sc.nextFloat();//3rd car's deceleration
        System.out.print(WANT);
        float timesDownFor3 = sc.nextFloat();
        System.out.println(LINE1);
        System.out.println("The 3ed car speed is now:" + car3.speedChange(speedDownFor3,timesDownFor3));
        System.out.println(LINE2);// 2nd car's speed after deceleration

        sc.close();//stop system.in leak

    }
    
}

class littlecarcar 
{
    private float speed = 0;
    private int carNumber;
    private float acceleration;
    private float deceleration;
    private String carColor; 

    public static final String SHOWNUMBER = "car number:";//java rule S1192
    public static final String SHOWCOLOR = "car color:";//java rule S1192

    //constructor
    public littlecarcar(int carNumber, float acceleration, float deceleration, String carColor)
    {
        this.carNumber = carNumber;
        this.acceleration = acceleration;
        this.deceleration = deceleration;
        this.carColor = carColor;
    }

    public void carInfo(String sequence, int number, String color)//1st car method
    {
        this.carNumber = number;
        this.carColor = color;

        System.out.println(sequence);
        System.out.println(SHOWNUMBER + carNumber);
        System.out.println(SHOWCOLOR + carColor);
    }

    public float speedChange(float acceleration)////calculate the speed acceleration
    {
        speed = speed + acceleration;
        return speed;
    }

    public float speedChange(float deceleration, float times)//calculate the speed deceleration
    {
        deceleration = deceleration * times;

        if(speed > deceleration)//Because the speed is deceleration not reverse so check if the speed became 0 the speed can't be negative number
        {
            speed = speed - deceleration;
            return speed;
        }
        else//if the result become negative number or become 0 then the speed is 0
        {
            return 0;
        }
    }
}
