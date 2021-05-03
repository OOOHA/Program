package code;
import java.io.*;


public class BUFFEREDREADER 
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader buf;
        buf = new BufferedReader(new InputStreamReader(System.in));

        String in;
        in = buf.readLine();

        System.out.println();
        System.out.println("Output:" + in);

        int num;
        String stringForNum;

        stringForNum = buf.readLine();
        num = Integer.parseInt(stringForNum);
        System.out.println(num);
        System.out.println(num + 1);
    }
    
}
