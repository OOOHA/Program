package java_code;

public class Car
{
    float speed = 0;
    int carNumber;
    float acceleration;
    float deceleration;
    String carColor; 

    public static final String SHOWNUMBER = "car number:";//java rule S1192
    public static final String SHOWCOLOR = "car color:";//java rule S1192

    public void carInfo1(int number, String color)//1st car method
    {
        this.carNumber = number;
        this.carColor = color;

        System.out.println("1st Car");
        System.out.println(SHOWNUMBER + carNumber);
        System.out.println(SHOWCOLOR + carColor);
    }

    public void carInfo2(int number, String color)//2nd car method
    {
        this.carNumber = number;
        this.carColor = color;

        System.out.println("2nd Car");
        System.out.println(SHOWNUMBER + carNumber);
        System.out.println(SHOWCOLOR + carColor);
    }

    public void carInfo3(int number, String color)//3rd car method
    {
        this.carNumber = number;
        this.carColor = color;

        System.out.println("3rd Car");
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