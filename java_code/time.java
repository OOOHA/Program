package java_code;

import java.util.Calendar;
import java.util.Date;
import java.text.DateFormat;
import java.text.SimpleDateFormat;

public class time {

    public static void main(String args[])
    {
        Calendar calendar = Calendar.getInstance();
        Date time = calendar.getTime();
        System.out.println(time);
        
        int year = calendar.get(Calendar.YEAR);
        int month = calendar.get(Calendar.MONTH)+1;//0開始數
        int date = calendar.get(Calendar.DATE);
        
        System.out.println(year+"/"+month+"/"+date);
        
        
        DateFormat dateformat1 = DateFormat.getDateInstance();
        String str1 = dateformat1.format(time);
        System.out.println(str1);
        
        String longStyle =
                DateFormat.getDateInstance(DateFormat.LONG).format(time);
        System.out.println(longStyle); 
        
        String fullStyle = DateFormat.
                getDateInstance(DateFormat.FULL).format(time);
        System.out.println(fullStyle);
        
        SimpleDateFormat sdf = 
                new SimpleDateFormat("yyyy.MM.dd G 'at' HH:mm:ss z");
        String sdfstr1 = sdf.format(time);
        System.out.println(sdfstr1);
        
        SimpleDateFormat sdf2 = 
                new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSXXX");
        String sdfstr2 = sdf2.format(time);
        System.out.println(sdfstr2);
    }
    
}
