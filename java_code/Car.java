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