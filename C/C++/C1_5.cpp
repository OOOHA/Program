#include<iostream> //include載入  iostream 輸入輸出
//定義名稱空間
using namespace std; 

/*主程式區域
int 整數
main()主程式進入點
()目前無任何參數,也可以傳入參數
{程式內容} 
測試在DOS下所以必須加return 0;  暫停用 
*/ 
int main(){
    //程式內容撰寫區域 
    
    /*輸出語法    <<連接符號   文字內容如果為數字可以直接輸入,文字要加上雙引號 
    cout<<文字內容1<<文字內容2.....;
    
    未定義名稱時每行開頭必須加上std::  
    */ 
    
    std::cout<<12<<"C++\n"; 
    std::cout<<"hello c++"<<endl;
    cout<<12<<"C++"; 
    cout<<"hello c++"<<endl;
    
    /*一、變數名稱命名規則 
    1.開頭只能使用英文字母或底線(系統用)
    2.英文與數字可以混合使用
    3.英文字母大寫為不同單字   abc  Abc aBc 
    4.不能使用關鍵字或識別字當變數名稱(使用時出現字為粗體或其它顏色) 
    5.儘量使用有意義的英文名稱  myEngGrade 
    
    二、變數宣告(不能重覆定義) 
    語法:  
    1.資料型態 變數名稱; 
    2.資料型態 變數名稱=值; 
    
    三、資料型態  (unsigned無正負號) 
    1.整數 (預設int)- short(短整數) 、 int(整數) 、 long(長整數) 、unsigned short 、unsigned int 、unsigned long
    2.小數 (預設double)- float 、 double 、 long double
    3.字元(單引號包圍) - char 、unsigned char 
    4.字串(雙引號包圍) - string
    5.布林(真true=1  假false=0) - bool
    */
    int eng;
    int chi=80; 
    eng=75;
    chi=60;
    cout<<"eng="<<eng<<",chi="<<chi<<endl;
    
    short a1=-100;
    unsigned short a2=100u;
    cout<<"a1="<<a1<<",a2="<<a2<<endl;
    long a3=1000L;//值加上小寫或大寫 L 
    unsigned long a4=10000UL;//無正負號會加上ul大小寫均可 
    cout<<"a3="<<a3<<",a4="<<a4<<endl;
    
    float b1=3.5F;//值加上小寫或大寫F代表float
    double b2=3.777;
    long double b3=3.8888L;
    cout<<"b1="<<b1<<",b2="<<b2<<",b3="<<b3<<endl;
    
    /*char c1= 'A';
    char c2= '甲';
    char c3=65;//十進位ASCII碼(鍵盤碼) 
    cout<<"c1="<<c1<<",c2="<<c2<<",c3="<<c3<<endl;*/

    string d1="巨匠電腦";
    string d2="上課中...";
    cout<<"d1="<<d1<<",d2="<<d2<<endl;

    bool e1=true;
    bool e2=false;
    bool e3=1;
    bool e4=0;
    bool e5=eng>chi;
    bool e6=100;//非0都為true 
    cout<<"e1="<<e1<<",e2="<<e2<<",e3="<<e3<<endl;
    cout<<"e4="<<e4<<",e5="<<e5<<",e6="<<e6<<endl;

    /*練習
    1.word分數 77   excel分數 82   ppt分數 92
    2.總分->以word、excel、ppt來進行計算
      平均->以總分來進行計算
    3.判斷平均是否及格(以真假來判斷) 
    */
    //int word=77;
    //int excel=82;
    //int ppt=93; 
    int word=77,excel=82,ppt=92;
    int sum=word+excel+ppt;
    float avg=(float)sum/3;//左側型態為float,右側型能為int,所以得到為int,如果要為小數必須強制轉型(只能加在等於右側) 
    bool ok=avg>=60;
    cout<<"word="<<word<<",excel="<<excel<<",ppt="<<ppt<<endl;
    cout<<"總分="<<sum<<",平均="<<avg<<",是否及格(1及格,0不及格)="<<ok<<endl; 

    /*
    四、查看資料型態範圍
    1.要載入  
    #include<cfloat>
    #include<climits>
    2.輸出方式
    short        ->  SHRT_MIN    SHRT_MAX     USHRT_MAX 
    int          ->  INT_MIN     INT_MAX      UINT_MAX
    long         ->  LONG_MIN    LONG_MAX     ULONG_MAX
    float        ->  FLT_MIN     FLT_MAX
    double       ->  DBL_MIN     DBL_MAX
    long double  ->  LDBL_MIN    LDBL_MAX
    char         ->  CHAR_MIN    CHAR_MAX     UCHAR_MAX
    
    cout<<"型態\t最小\t最大\t無正負號"<<endl; //  \t代表按TAB跳位
    cout<<"short\t"<<SHRT_MIN<<"\t"<<SHRT_MAX<<"\t"<<USHRT_MAX<<endl;
    cout<<"int\t"<<INT_MIN<<"\t"<<INT_MAX<<"\t"<<UINT_MAX<<endl;
    cout<<"long\t"<<LONG_MIN<<"\t"<<LONG_MAX<<"\t"<<ULONG_MAX<<endl;
    cout<<"float\t"<<FLT_MIN<<"\t"<<FLT_MAX<<"\t"<<endl;
    cout<<"double\t"<<DBL_MIN<<"\t"<<DBL_MAX<<"\t"<<endl;
    cout<<"long double\t"<<LDBL_MIN<<"\t"<<LDBL_MAX<<"\t"<<endl;
    cout<<"char\t"<<CHAR_MIN<<"\t"<<CHAR_MAX<<"\t"<<UCHAR_MAX<<endl;
    */
    /*
    五、查看型態佔記憶體大小
    語法  sizeof(資料型態 或 變數名稱)
    */ 
    cout<<"short佔記憶大小="<<sizeof(short)<<"bytes"<<endl;
    cout<<"int佔記憶大小="<<sizeof(chi) <<"bytes"<<endl;
    return 0; 
}

