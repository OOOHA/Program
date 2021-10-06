package code;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class MorseCode
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter to get Morse Code output:");
        String input = sc.nextLine();

        morse calculate = new morse();

        System.out.println(calculate.toMorse(input));
        
        sc.close();

    }
    
}

class morse
{
    public String toMorse(String s) 
    {
        Map <Character, String> map = new HashMap<>();

        map.put('A',".-");
        map.put('B',"-...");
        map.put('C',"-.-.");
        map.put('D',"-..");
        map.put('E',".");
        map.put('F',"..-.");
        map.put('G',"--.");
        map.put('H',"....");
        map.put('I',"..");
        map.put('J',".---");
        map.put('K',"-.-");
        map.put('L',".-..");
        map.put('M',"--");
        map.put('N',"-.");
        map.put('O',"---");
        map.put('P',".--.");
        map.put('Q',"--.-");
        map.put('R',".-.");
        map.put('S',"...");
        map.put('T',"-");
        map.put('U',"..-");
        map.put('V',"...-");
        map.put('W',".--");
        map.put('X',"-..-");
        map.put('Y',"-.--");
        map.put('Z',"--..");

        map.put('a',".-");
        map.put('b',"-...");
        map.put('c',"-.-.");
        map.put('d',"-..");
        map.put('e',".");
        map.put('f',"..-.");
        map.put('g',"--.");
        map.put('h',"....");
        map.put('o',"..");
        map.put('j',".---");
        map.put('k',"-.-");
        map.put('l',".-..");
        map.put('m',"--");
        map.put('n',"-.");
        map.put('o',"---");
        map.put('p',".--.");
        map.put('q',"--.-");
        map.put('r',".-.");
        map.put('s',"...");
        map.put('t',"-");
        map.put('u',"..-");
        map.put('v',"...-");
        map.put('w',".--");
        map.put('x',"-..-");
        map.put('y',"-.--");
        map.put('z',"--..");

        map.put('1',".----");
        map.put('2',"..---");
        map.put('3',"...--");
        map.put('4',"....-");
        map.put('5',".....");
        map.put('6',"-....");
        map.put('7',"--...");
        map.put('8',"---..");
        map.put('9',"----.");
        map.put('0',"-----");

        map.put(' ',"\n");

        String m = "";

        for(int i = 0; i < s.length() - 1; i++)
        {
            m += map.get(s.charAt(i));
        }
        
        return m;
    }        
}