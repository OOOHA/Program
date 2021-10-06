package code;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class RomanToInteger
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter:");
        String input = sc.nextLine();

        calculater calculate = new calculater();

        System.out.println(calculate.romanToInt(input));
        
        sc.close();
    }
    
}

class calculater
{
    public int romanToInt(String s) 
    {
        Map <Character, Integer> map = new HashMap<>();

        map.put('I',1);
        map.put('V',5);
        map.put('X',10);
        map.put('L',50);
        map.put('C',100);
        map.put('D',500);
        map.put('M',1000);

        int result = 0;
        for(int i = 0; i < s.length() - 1; i++)
        {
            if(map.get(s.charAt(i)) < map.get(s.charAt(i + 1)))
            {
                result -= map.get(s.charAt(i));
            }
            else
            {
            result += map.get(s.charAt(i));
            }
        }

        return result + map.get(s.charAt(s.length() - 1));
    }
}