#include<iostream>
using namespace std;
int main(){
    /*一、位數計算  10轉8  10轉16
      二、整數 8進位與16進位寫法
          8進位前方補0
          16進位前方補0x
      三、字元 8進位與16進位寫法
          8進位前方補\
          16進位前方補\x    
      四、 小數(科學記號)
          3.82e+3    正代表乘   3.82*1000 
          3.82e-3    負代表除   3.82/1000 
    */ 
    int a=53;//53代表十進位值
    int a1=065;//八進位值
    int a2=0x35;//十六進位值 
    cout<<"十進位值="<<a<<",八進位值="<<a1<<",十六進位值="<<a2<<endl; 
    
    char b=53;//十進位ASCII
    char b1=065;//八進位ASCII
    char b2=0x35;//十六進位ASCII
    char b3='A';//一般字元
    char b4='\101';//八進位數值
    char b5='\x41';//十六進位數值 
    cout<<"b="<<b<<",b1="<<b1<<",b2="<<b2<<endl;
    cout<<"b3="<<b3<<",b4="<<b4<<",b5="<<b5<<endl;
    
    double c1=3.82e3;
    double c2=3.82e-3;
    cout<<"c1="<<c1<<",c2="<<c2<<endl;  
    
    /*
    五、跳脫字元
    \n   換行
    \t   TAB跳位 
    \'   單引號 
    \"   雙引號 
    \\   反斜線 
    \a   警告音 
    \b   backspace刪除鍵 (要夾在二個文字中間,如果後方沒文字請加上空白鍵) 
    */ 
    cout<<"輸出單引號\'"<<endl; 
    cout<<"輸出雙引號\""<<endl; 
    cout<<"輸出反斜線\\"<<endl;
    cout<<"警告音\a"<<endl;
    cout<<"刪除鍵a\b "<<endl;
    
    /*
    六、符號常數(變數值不能改變) 
    1.#define 變數名稱(大寫) 值
    2.const 資料型態 變數名稱=值; 
    */ 
    #define PI 3.14159
    const int r=10; 
    cout<<"PI="<<PI<<",r="<<r<<endl;    
    
    /*七、指定運算子(=)*/
    int x1=10;
    int x2=20,x3=30;
    int x4,x5,x6;
    x4=100;
    x5=100;
    x6=100;
    x4=x5=x6=200;
    //int x7=x8=50;//不符合規則 
    cout<<"x4="<<x4<<",x5="<<x5<<",x6="<<x6<<endl;

    /*八、算術運算子
          +(加) -(減) *(乘) /(除) %(餘數) 
    */ 
    int y1=20,y2=50;
    cout<<"y1+y2="<<(y1+y2)<<endl;
    cout<<"y1-y2="<<(y1-y2)<<endl;
    cout<<"y1*y2="<<(y1*y2)<<endl;
    cout<<"y1/y2="<<(y1/y2)<<endl;
    cout<<"y1%y2="<<(y1%y2)<<endl;

    /*九、遞增遞減運算子
          ++(每次加1)  --(每次減1)
    */
    int y3;
    y3=++y1;//++寫前面代表先計算再指定   y1=y1+1; y3=y1; 
    cout<<"y1="<<y1<<",y3="<<y3<<endl;
    y3=y1++;//++寫後面代表先指定再計算   y3=y1; y1=y1+1; 
    cout<<"y1="<<y1<<",y3="<<y3<<endl;
    y3=--y1;//--寫前面代表先計算再指定   y1=y1-1; y3=y1; 
    cout<<"y1="<<y1<<",y3="<<y3<<endl;
    y3=y1--;//--寫後面代表先指定再計算   y3=y1; y1=y1-1; 
    cout<<"y1="<<y1<<",y3="<<y3<<endl;

    
    /*十、邏輯運算子(得到值為布林) 
          &&(AND-且) ||(OR-或) !(NOT-反向) 
    */
    cout<<"y1="<<y1<<",y2="<<y2<<",y3="<<y3<<endl;
    cout<<"y1<y2 && y1<y3="<<(y1<y2 && y1<y3)<<endl;
    cout<<"y1<y2 && y1>y3="<<(y1<y2 && y1>y3)<<endl;
    cout<<"y1<y2 || y1>y3="<<(y1<y2 || y1>y3)<<endl;
    cout<<"!(y1<y2 && y1>y3)="<<!(y1<y2 && y1>y3)<<endl;

    /*十一、位元運算子
            以2進位方式進行運算
            &(AND) 同為1才是1,其餘皆為0 
            |(OR)  只要其中一個為1就是1 
            ^(XOR) 同為1或0皆為0,其餘才是1 
            ~(NOT) 1的補數 0與1互換 ,第一碼如果為1代表負值 
    */ 
    int z1=38,z2=12;
    cout<<"z1&z2="<<(z1&z2)<<endl;
    cout<<"z1|z2="<<(z1|z2)<<endl;
    cout<<"z1^z2="<<(z1^z2)<<endl;
    cout<<"~z1="<<~z1<<endl;

    /*十二、複合指定運算子
       +=(每次加多少) -=(每次減多少) *=(每次乘多少) /=(每次除多少) %=(每次除多少的餘數)
       &=(AND)  |=(OR)  ^=(XOR) 
    */ 
    int n1=10;  
    n1+=20;//n1=n1+20;  n1=30 
    cout<<"n1="<<n1<<endl;
    n1-=10;//n1=n1-10   n1=20
    cout<<"n1="<<n1<<endl;
    n1*=2;//n1=n1*2     n1=40
    cout<<"n1="<<n1<<endl;
    n1/=5;//n1=n1/5     n1=8
    cout<<"n1="<<n1<<endl;
    n1%=6;//n1=n1%6     n1=2
    cout<<"n1="<<n1<<endl;
    n1&=45;//n1=n1&45   n1=0
    cout<<"n1="<<n1<<endl;
    n1|=62;//n1=n1|62   n1=62
    cout<<"n1="<<n1<<endl;
    n1^=77;//n1=n1^77   n1=115
    cout<<"n1="<<n1<<endl; 

    /*十三、關係運算子(結果為bool型態) 
            >(大於) <(小於) ==(等於) >=(大於等於) <=(小於等於) !=(不等於)
      十四、插入運算子
            dec(十進位-預設)  oct(八進位)   hex(十六進位)  boolalpha(以true或false顯示)  noboolalpha(以1或0顯示-預設)
            showbase(以基底格式顯示0,0x)   noshowbase(不使用基底格式-預設)      endl(換行) 
    */ 
    int n2=80;
    cout<<"n1="<<showbase<<oct<<n1<<",n2="<<hex<<n2<<noshowbase<<dec<<endl;
    cout<<boolalpha<<"n1>n2="<<(n1>n2)<<endl;
    cout<<"n1<n2="<<(n1<n2)<<endl;
    cout<<"n1==n2="<<(n1==n2)<<endl;
    cout<<"n1>=n2="<<(n1>=n2)<<endl;
    cout<<"n1<=n2="<<(n1<=n2)<<noboolalpha<<endl;
    cout<<"n1!=n2="<<(n1!=n2)<<endl;


    return 0;
}