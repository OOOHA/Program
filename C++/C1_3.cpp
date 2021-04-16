//載入輸入輸出
#include<iostream>
//使用名稱空間(記憶先分一塊位置出來做暫存用)
using namespace std;
/*自訂函數原型-寫在主程式上方
資料型態 函數名稱(參數列);*/
/*無回傳無參數*/ 
void show1();
/*無回傳有參數*/
void show2(int,int);
/*有回傳無參數*/ 
int show3();
/*有回傳有參數*/
float show4(float,float,float);
/*inline函數-提升程式呼叫函數執行效率,不能含有複雜的控制語句,
如迴圈或switch等,所以只有較小且頻繁被呼叫的簡單函數才適用
inline 資料型態 函數名稱(參數列); 
*/
inline int show5(int,int);
/*一維陣列函數
資料型態 函數名稱(資料型態 陣列名稱[大小],資料型態 陣列大小);*/
int n;
void fillArr(int[],int);
void showArr(int[],int);
int sumArr(int[],int);
/*二維陣列函數
資料型態 函數名稱(資料型態 陣列名稱[列大小][行大小],資料型態 列大小,資料型態 行大小); 
*/  
void showArr2(int[][4],int,int);

//練習
void gArr1(int[][4],int,int) ;
void gArr2(int[][4],int,int);
//主程式
int main(){
    /*呼叫函數-寫在主程式中或自訂函數內
    無回傳值-  函數名稱(參數列); 
    有回傳值-  輸出 函數名稱(參數列); 
    */ 
    
    /*無回傳無參數*/ 
    show1();
    /*無回傳有參數*/
    show2(5,8);
    /*有回傳無參數*/ 
    cout<<"最大值:"<<show3() <<endl;
    /*有回傳有參數*/
    float x,y,z;
    cout<<"請輸入第1個數字:";
    cin>>x; 
    cout<<"請輸入第2個數字:";
    cin>>y; 
    cout<<"請輸入第3個數字:";
    cin>>z; 
    cout<<"最小值:"<<show4(x,y,z)<<endl;
    /*inline函數*/
    int n1,n2;
    cout<<"請輸入二個數字:";
    cin>>n1>>n2;
    cout<<"計算結果:" <<show5(n1,n2) <<endl;
    /*一維陣列函數*/
    cout<<"請輸入筆數:";
    cin>>n;
    int arr[n] ;
    //fillArr(arr,n);
    
    //showArr(arr,n);
    cout<<"陣列和="<<sumArr(arr,n)<<endl;
    /*二維陣列函數*/
    int arr1[2][4]={{1,2,3,4},{2,3,4,5}};
    showArr2(arr1,2,4);
    
    
    /*練習
    1.請讓使用者輸入N位同學成績資料
    2.輸入方式如下
      第1位同學
          國文成績:
          英文成績:
          數學成績:
      ----------------
    3.顯示如果如下
                    國文  英文  數學  總分  平均 
      第1位同學
      第2位同學
    4.輸入及顯示請分別使用不同函數 (gArr1,gArr2)
    */
    int num;//N位同學
    cout<<"請輸入成績筆數:" ;
    cin>>num; 
    int score[num][4];
    gArr2(score,num,4);
    
    
    system("pause");//暫停
    return 0;//結束
}
/*自訂函數-寫在主程式下方
資料型態 函數名稱(參數列){
    執行內容;
    return 變數或計算式;
}*/ 

/*無回傳無參數*/ 
void show1(){
    string str;
    cout<<"請輸入姓名:";
    getline(cin,str); 
    cout<<str<<"您好!" <<endl; 
}
/*無回傳有參數*/
void show2(int a,int b){
    int c;
    c=a+b;
    cout<<"總和="<<c<<endl;
}
/*有回傳無參數*/ 
int show3(){
    int a,b,max;
    cout<<"請輸入二個數字:";
    cin>>a>>b;
    max=a>b?a:b;
    return max;
}
/*有回傳有參數*/ 
float show4(float a,float b,float c){
    float min;
    if(a<b){
        if(a<c) min=a;
        else    min=c;
    }else{
        if(b<c) min=b;
        else    min=c;
    }
    return min; 
}
/*inline函數*/
inline int show5(int a,int b){
    int c;
    c=a*b;
    return c;
}
/*一維陣列函數
資料型態 函數名稱(資料型態 陣列名稱[大小],資料型態 陣列大小){
    執行內容;
    return 變數或運算式;
}
*/
void fillArr(int a[],int b){
    for(int i=0;i<b;i++){
        cout<<"請輸入第"<<i+1<<"筆資料:"; 
        cin>>a[i];
    }
}
void showArr(int a[],int b){
    cout<<"輸出結果如下:"<<endl; 
    for(int i=0;i<b;i++){
        cout<<a[i]<<",";
    }
    cout<<"\b "<<endl;
}
int sumArr(int a[],int b){
    fillArr(a,b);
    showArr(a,b);
    int sum=0;
    for(int i=0;i<b;i++){
        sum+=a[i];
    }
    return sum;
}
/*二維陣列函數
資料型態 函數名稱(資料型態 陣列名稱[列大小][行大小],資料型態 列大小,資料型態 行大小){
    執行內容;
    return 變數或運算式;
} 
*/
void showArr2(int a[][4],int b,int c){
    cout<<"二維陣列內容如下:"<<endl;
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
//練習
/*void gArr1(int a[][4],int b,int c) {
    char subject[][5]={"國文,英文,數學"}; //1中文=2英文字大小  末尾\0
    for(int i=0;i<b;i++) {
        int sum=0;
        cout<<"請輸入第"<<i+1<<"位同學"<<endl; 
        for(int j=0;j<c-1;j++){
            cout<<"\t"<<subject[j]<<"成績:";
            cin>>a[i][j];
            sum+=a[i][j];
        }
        a[i][3]=sum;
        cout<<"---------------"<<endl;
    }
}
/*void gArr2(int a[][4],int b,int c){
    gArr1(a,b,c);
    cout<<"\t\t國文\t英文\t數學\t總分\t平均"<<endl;
    for(int i=0;i<b;i++) {
        cout<<"第"<<i+1<<"位同學\t" ;
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<(float)a[i][3]/3<<endl;
    }
}*/